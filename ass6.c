#include<stdio.h>
int main(){

	int p,r,t;
	float si;
	printf("Enter Principal:");
	scanf("%d",&p);
	printf("Enter rate:");
	scanf("%d",&r);
	printf("Enter time:");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("Your Simple Interest is:%.2f\n",si);
	return 0;
	
}
