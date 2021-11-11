#include <stdio.h>
#include <stdbool.h>

//判断x是否是y的约数 
bool searchApproximate(int x, int y){
	//x若不是y的约数，那么a得到的值为整数部分， a*x 将小于 y。 
	int a = y/x;
	return y == a*x;
} 

int main(void)
{
	for (int i=2; i<1000; ++i){	//1000以内 
		int sum = 0;
		for (int j=1; j<=i/2; ++j) {	// i/2~i的值均不是i的约数，化简范围 
			if (searchApproximate(j,i)) sum += j;	//将约数求和 
		}
		if (sum == i) {
			printf("%d\t", i);
		}
	} 
	return 0;
} 

//	6       28      496 
