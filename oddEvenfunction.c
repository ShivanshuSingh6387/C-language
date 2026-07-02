#include<stdio.h>
#include<conio.h>
#include<string.h>
void oddEven(int x){
    if(x%2==0){
        printf("%d is an even number\n",x);
    }
    else{
        printf("%d is an odd number\n",x);
    }
    return;
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    oddEven(a); // Calling the function & passing the value of a as an argument
   
return 0;
}