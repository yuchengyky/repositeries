#include <stdio.h>
#include <stdbool.h>

//�ж�x�Ƿ���y��Լ�� 
bool searchApproximate(int x, int y){
	//x������y��Լ������ôa�õ���ֵΪ�������֣� a*x ��С�� y�� 
	int a = y/x;
	return y == a*x;
} 

int main(void)
{
	for (int i=2; i<1000; ++i){	//1000���� 
		int sum = 0;
		for (int j=1; j<=i/2; ++j) {	// i/2~i��ֵ������i��Լ��������Χ 
			if (searchApproximate(j,i)) sum += j;	//��Լ����� 
		}
		if (sum == i) {
			printf("%d\t", i);
		}
	} 
	return 0;
} 

//	6       28      496 
