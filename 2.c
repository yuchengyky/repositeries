#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int a){
	for (int i=2; i*i<=a; ++i){	//Ҳ������ mant.h �еĺ���sqrt, i<=sqrt(a) 
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
	int result=2;	//���ظ�λ���������Ǹ�����
	int count=0;	//������м���
	 
	printf("1000���ڵ�����Ϊ��\n");
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
	printf("\n���и�λ������������Ϊ��%d", result);
	
	return 0;	
} 
