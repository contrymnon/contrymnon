#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap a=\n");
	printf("nhap b=\n");
	scanf("%d" ,&a);
	scanf("%d" ,&b);
	if (a<b){
		int s = a*b;
		printf("%d la ket qua can tim",s);
		}else{
			if (b==0){
				printf("phuong trinh vo nghiem");
			}else{
				int u = a/b;
				printf("%d la ket qua can tim",u);
			}
		}
}
		

