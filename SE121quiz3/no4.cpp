#include<stdio.h>
int main (){
	int n,i,fact=1;
	
	printf("Enter a positive number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("The factorial of this num:%d",fact);
}
