#include<stdio.h>

int main(){
	float a;
	int c=1;
	printf("Enter the number of which you want to print the table\n");
	scanf("%f",&a);
	float b=a*10;
	float d=b/10;
	while(a<=b,c<=10){
		printf("%f*%d=%f\n",d,c,a);
		c++;
		a=a+d;
	}
	
	
	
	system("pause");
	return 0;
}
