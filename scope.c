#include<stdio.h>
#include<conio.h>
#include<string.h>
int i = 0; // global variable
void change(){
    i = 10; // changing the value of global variable
}
int main(){
    int i=70; // local variable
       printf("%d ",i);
   change();
   printf("%d ",i);

return 0;
}