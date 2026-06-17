#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d \n", 3 < 4 && 3 < 5);
    printf("%d \n", 3 < 4 && 5 < 4);
    printf("%d \n", 3 < 4 && 5 < 4);
    printf("%d \n", 3 > 4 && 5 > 4);
    printf("%d \n", 3 < 4 && 3 < 5);
    printf("%d \n", !(3 < 4 && 3 < 5));
    printf("%d \n", !(4 < 3 || 5 < 3));
    return 0;
}