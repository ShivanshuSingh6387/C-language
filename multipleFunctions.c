#include<stdio.h>
#include<conio.h>
#include<string.h>

void england(){
   printf("you are in england\n");
   void japan(); // function prototype of japan function
   japan();
}
void india(){
        printf("you are in india\n");
        england();
    }
    void japan(){
        printf("you are in japan\n");
    }
int main(){
   printf("you are in main\n");
   india();

return 0;
}