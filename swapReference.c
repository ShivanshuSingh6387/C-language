#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
   printf("\n");
   int x ;
    printf("Enter a number :");
    scanf("%d",&x);
    int y;
    printf("Enter a number :");
    scanf("%d",&y);
    printf(" %d %d\n", x, y);
    swap(&x,&y); // passing the address of x and y to the swap function
    printf(" %d %d\n", x, y);
return 0;
}