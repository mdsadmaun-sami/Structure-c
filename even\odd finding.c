/******************************************************************************

Q. Write a program in C to check if a given number is 
even or odd using the function with a return type.

*******************************************************************************/

#include <stdio.h>
int check(int num);
int main()
{
    int num;
    printf("Enter number please: \n");
    scanf("%d",&num);
    int c=check(num);
    if(c==1){
        printf("Even");
    }else{
        printf("Odd");
    }
    
    return 0;
}
int check(int num){
    if(num%2==0){
       return 1;}
    else{
        return 0;
    }
}
