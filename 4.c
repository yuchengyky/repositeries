#include <stdio.h>

int main(void){
	int a[2];
	
	printf("请输入两个正整数：");
	for (int i=0; i<2; ++i){
		scanf("%d", &a[i]);
	} 

	int x=a[0],y=a[1];
	
	int z = x%y;	
	//z用来保存最大公约数。从两个数的小者开始寻找，逐次减1往下寻找 
	while(z>0){
		if (a[0]%z==0 && a[1]%z==0){
			break;	//找到最大公约数则退出 
		}
		--z;
	}

	printf("%d和%d的最大公约数为:%d\n", a[0], a[1], z);
	
	//最大公倍数即为 a*b/最大公约数
	int gcm = a[0] * a[1] /z;
	printf("%d和%d的最大公倍数为:%d\n", a[0], a[1], gcm);
	
	return 0;
}

