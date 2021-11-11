#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrimeNumber(int a){
	if (a<2) return false;	//质数的前提条件为大于1的正整数 
	for (int i=2; i<=sqrt(a) ; ++i){
		if (a%i==0) return false;		
	}
	return true;
}
int main(void){
	int i=0;
	int sum=0;			//统计所有质数和 
	int primerCount=0;	//统计质数个数 
	
	scanf("%d", &i);
	
	while(i!=-1){
		if (isPrimeNumber(i)){
			++primerCount;
			sum += i;
		}
		scanf("%d", &i);

	}
	
	if (primerCount) {//有质数 
		double dRet =  1.0*sum/primerCount;
		printf("输入-1之前之前的质数个数为：%d，其平均值为%f", primerCount, dRet);
	}
	else {
		printf("输入的整数中在输入-1之前， 没有质数\n");
	}
	
	return 0;
}
