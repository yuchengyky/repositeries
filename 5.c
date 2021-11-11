#include <stdio.h>
#include <math.h>
 
#define PI 3.1415926535

//预处理函数，根据sin函数的周期性，将输入的x限定在 -PI~PI 之间 
double preprocessing(double);

int main(void){

	double originalInput;
	printf("请输入一个数，计算其sin值：");
	scanf("%lf", &originalInput);
	
	double x = preprocessing(originalInput);
	//printf("进过预处理，将输入的值限定在-PI~PI之间，x=%lf\n", x);	//调试用，查看根据周期性得到的结果是否正确 （返回值应为 -PI~PI之间） 
	
	int countNumber=0;	//统计计算了多少项 
	double each=x;		//用来表示 sin(x) 中的每一项 
	double result=0.0;	//计算结果 
	int gap = 1;		//每项的分母 
	while ( fabs(each) > 10e-12){
		++countNumber; 
		result += each;
		gap += 2;
		each = -1*each*x*x/(gap * (gap-1));
	}	
	
	//注意：退出了循环， 此时 abs(each)刚好小于10e-6,需要将其加入结果。
	++countNumber; 
	result += each;
	
	printf("泰勒展开了%d项，最后一项绝对值刚好小于10e-6,\n计算得sin(%lf)=%lf", countNumber,originalInput,result);
	
	return 0;	
}

double preprocessing(double x){
	double dPeriod = x/(2*PI);	//计算x 含有多少个 2PI
	if (dPeriod < 0) return x-2*PI* (int)(dPeriod-0.5);
	return x-2*PI*  (int)(dPeriod+0.5);
}
