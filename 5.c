#include <stdio.h>
#include <math.h>
 
#define PI 3.1415926535

//Ԥ������������sin�����������ԣ��������x�޶��� -PI~PI ֮�� 
double preprocessing(double);

int main(void){

	double originalInput;
	printf("������һ������������sinֵ��");
	scanf("%lf", &originalInput);
	
	double x = preprocessing(originalInput);
	//printf("����Ԥ�����������ֵ�޶���-PI~PI֮�䣬x=%lf\n", x);	//�����ã��鿴���������Եõ��Ľ���Ƿ���ȷ ������ֵӦΪ -PI~PI֮�䣩 
	
	int countNumber=0;	//ͳ�Ƽ����˶����� 
	double each=x;		//������ʾ sin(x) �е�ÿһ�� 
	double result=0.0;	//������ 
	int gap = 1;		//ÿ��ķ�ĸ 
	while ( fabs(each) > 10e-12){
		++countNumber; 
		result += each;
		gap += 2;
		each = -1*each*x*x/(gap * (gap-1));
	}	
	
	//ע�⣺�˳���ѭ���� ��ʱ abs(each)�պ�С��10e-6,��Ҫ�����������
	++countNumber; 
	result += each;
	
	printf("̩��չ����%d����һ�����ֵ�պ�С��10e-6,\n�����sin(%lf)=%lf", countNumber,originalInput,result);
	
	return 0;	
}

double preprocessing(double x){
	double dPeriod = x/(2*PI);	//����x ���ж��ٸ� 2PI
	if (dPeriod < 0) return x-2*PI* (int)(dPeriod-0.5);
	return x-2*PI*  (int)(dPeriod+0.5);
}
