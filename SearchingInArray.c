#include<stdio.h>
#include<stdbool.h>
int main(){
   int arr[5]={8,3,6,2,5};
   int n=sizeof(arr)/sizeof(arr[0]); // Calculate the number of elements in the array
   for(int i=0;i<n;i++){
      printf("%d ",arr[i]); // Print each element of the array
   }
   int target=56; // Element to search for
   bool found=false; // Flag to indicate if the element is found
    for(int i=0;i<n;i++){
        if(arr[i]==target){ // Check if the current element matches the target
            found=true; // Set found to true if the element is found
            break; // Exit the loop as we found the target
        }
    }
    if(found){
        printf("\nElement %d is found in the array.",target); // Print if the element is found
    }
    else{
        printf("\nElement %d is not found in the array.",target); // Print if the element is not found
    }
return 0;
}