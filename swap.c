#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   int x;
   printf("enter a number :",x);
   scanf("%d",&x);
    int y;
    printf("enter a number :",y);
    scanf("%d",&y);
    printf(" %d %d\n", x, y);
    // int temp; //using a temporary variable
    // temp = x;
    // x = y;
    // y = temp;
    x=x+y;  // without using a temporary variable
    y=x-y;
    x=x-y;
    printf(" %d %d\n", x, y);
return 0;
}