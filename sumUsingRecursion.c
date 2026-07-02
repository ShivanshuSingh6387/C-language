#include <stdio.h>

void printNumbers(int n,int sum) {
    if (n == 0) {  
        printf("%d", sum);
        return;
    }
   
 printNumbers(n - 1,sum+n);  // Recursive call
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printNumbers(n,0); //function call

    return 0;
}