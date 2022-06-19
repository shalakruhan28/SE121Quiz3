#include<stdio.h>
int main (){

int a[10],i,sum=0;
printf("Enter ten num:");
for(i=0;i<10;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<10;i++){

sum=sum+a[i];
}
printf("The sum is :%d\n",sum);
printf("The avarage is:%.2f", (float)sum/10);
return 0;
}
