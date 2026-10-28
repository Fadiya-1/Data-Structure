#include<stdio.h>
  int main() {
   int inputArray[100],elementCount,counter,num;
   printf("enter number of elements in array\n");
   scanf ("%d",&elementCount);
   printf("enter %d number\n",elementCount);
   for(counter=0; counter < elementCount; counter++){
       scanf("%d", &inputArray[counter]);
   }
   printf("enter a number to search in array\n");
   scanf("%d",&num);
   for(counter=0; counter < elementCount; counter++)
   {
       if(inputArray[counter] == num){
           printf("number %d fount at index %d\n",num, counter);
           break;
       }
    }
    if(counter == elementCount){
     printf("number %d not present in input array\n",num);
    }
    return 0;
}
