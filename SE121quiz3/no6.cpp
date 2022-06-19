#include<stdio.h>
int main (){
	int N,temp,rem,sum=0;
	
	printf("Enter a digit num:");
	scanf("%d",&N);
	
	while(N!=0){
		rem=N%10;
		sum=sum+rem;
		temp=temp+rem;
		N=N/10;
	}
	printf("The sum of digit:%d",sum);
}
