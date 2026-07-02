#include <stdio.h>

void printNumbers(int n) {
    if (n == 0) {   // Base case
        return;
    }
   
    printf("%d ", n);
 printNumbers(n - 1);  // Recursive call
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printNumbers(n); //function call

    return 0;
}