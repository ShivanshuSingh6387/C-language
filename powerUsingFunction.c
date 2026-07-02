#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int a;
printf("Enter the value of a :");
scanf("%d",&a);
int b;
printf("Enter the value of b :");   
scanf("%d",&b);
int p = pow(a,b);
printf("The value of %d raised to the power of %d is : %d",a,b,p);
   
return 0;
}