#include<stdio.h>
#include<conio.h>
#include<string.h>
int sum(int x, int y){ 
    return x + y;
}
int main(){
   int x;
   printf("Enter 1st number ");
   scanf("%d",&x);
   int y;
   printf("Enter 2nd number ");
   scanf("%d",&y);
   printf("%d", sum(x, y)); 
return 0;
}