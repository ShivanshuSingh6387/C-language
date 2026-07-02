#include<stdio.h>
#include<conio.h>
#include<string.h>
void greet(int n){ // function definition
    if(n==0){ // base case
        return;
    }
    printf("%d\n",n); // print the value of n
    greet(n-1); // recursive call
}
int main(){
    int n; // variable declaration
   printf("enter n"); 
   scanf("%d",&n);
   greet(n); // function call
return 0;
}