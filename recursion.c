#include<stdio.h>
#include<conio.h>
#include<string.h>

void greet(int n) {
    if (n == 0) { // base case
        return;
    }
    greet(n - 1); // recursive call
}

int main(){
   printf("Hello World\n");
   greet(5);
return 0;
}