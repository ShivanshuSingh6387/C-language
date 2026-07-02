#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   int sum = 0;
   while(n>0){
    int ld = n%10;
    n=n/10;
    sum = sum+ld;
   }
    printf("The sum of given numbers is %d :",sum);
    
return 0;
}