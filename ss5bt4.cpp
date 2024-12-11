#include<stdio.h>
int main(){
	int a,i,total=0;
	printf("moi ban nhap so de tinh cuu chuong: ");
	scanf("%d",&a);
	for(i=1;i<=10;i++){
		total=a*i;
		printf("%d * %d = %d \n",a,i,total);
	}
	return 0;
}
