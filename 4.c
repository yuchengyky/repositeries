#include <stdio.h>

int main(void){
	int a[2];
	
	printf("������������������");
	for (int i=0; i<2; ++i){
		scanf("%d", &a[i]);
	} 

	int x=a[0],y=a[1];
	
	int z = x%y;	
	//z�����������Լ��������������С�߿�ʼѰ�ң���μ�1����Ѱ�� 
	while(z>0){
		if (a[0]%z==0 && a[1]%z==0){
			break;	//�ҵ����Լ�����˳� 
		}
		--z;
	}

	printf("%d��%d�����Լ��Ϊ:%d\n", a[0], a[1], z);
	
	//��󹫱�����Ϊ a*b/���Լ��
	int gcm = a[0] * a[1] /z;
	printf("%d��%d����󹫱���Ϊ:%d\n", a[0], a[1], gcm);
	
	return 0;
}

