#include<stdio.h>
#include<conio.h>
#include<string.h>
int min(int x,int y){
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
   int a,b;
   printf("Enter 1st Number :");
   scanf("%d",&a);
   printf("Enter 2nd Number :");
   scanf("%d",&b);
   int m=min(a,b);
   printf("Minimum of %d and %d is : %d",a,b,m);
return 0;
}