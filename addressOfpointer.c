#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   int x = 10;
  int *z=&x; // storing the address of variable x in pointer z
   printf("%d\n",x); // printing the value of variable x
    printf("%p\n",z); // printing the value stored in pointer z which is the address of variable x
   printf("%p",&x); // printing the address of variable x
    printf("\n");
return 0;
}