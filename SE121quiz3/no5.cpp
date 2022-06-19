#include<stdio.h>
int main(){
	int n,num,temp,rem,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	num=n;
	
	while(n!=0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
	   
		n=n/10;
	}  
	if(sum==num){
		printf("An armstrong number");
	}
   else{
	printf("Not an armstrong number");
}
    return 0;
}
