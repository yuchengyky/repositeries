#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int a){
	for (int i=2; i*i<=a; ++i){	//也可以用 mant.h 中的函数sqrt, i<=sqrt(a) 
		if (a%i==0) return false;		
	}
	return true;
}
int eachDigitSum(int a){
	int gewei = a %10;
	int shiwei = a/10%10;
	int baiwei = a/100;
	
	return gewei+shiwei+baiwei;
}

int main(void){
	int eachDigitSumMax = 0;
	int result=2;	//返回各位数和最大的那个质数
	int count=0;	//输出换行计数
	 
	printf("1000以内的质数为：\n");
	for (int i=2; i<1000; ++i){
		if (isPrimeNumber(i)){
			++count;
			printf("%d\t", i);
			if (eachDigitSum(i)>eachDigitSumMax){
				result = i;
			}
			if (0 == count%10) printf("\n");
		}
	}
	printf("\n其中各位数和最大的质数为：%d", result);
	
	return 0;	
} 
