#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrimeNumber(int a){
	if (a<2) return false;	//������ǰ������Ϊ����1�������� 
	for (int i=2; i<=sqrt(a) ; ++i){
		if (a%i==0) return false;		
	}
	return true;
}
int main(void){
	int i=0;
	int sum=0;			//ͳ������������ 
	int primerCount=0;	//ͳ���������� 
	
	scanf("%d", &i);
	
	while(i!=-1){
		if (isPrimeNumber(i)){
			++primerCount;
			sum += i;
		}
		scanf("%d", &i);

	}
	
	if (primerCount) {//������ 
		double dRet =  1.0*sum/primerCount;
		printf("����-1֮ǰ֮ǰ����������Ϊ��%d����ƽ��ֵΪ%f", primerCount, dRet);
	}
	else {
		printf("�����������������-1֮ǰ�� û������\n");
	}
	
	return 0;
}
