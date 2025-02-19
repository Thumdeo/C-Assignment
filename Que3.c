// Q3. Write a program to calculate Fibonacci Series up to n numbers

#include <stdio.h>
int main () { 
     
    int i, n,num1 = 0 ,num2 = 1,sum;
    printf(" enter the number : ");
    scanf("%d",&n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("%d %d",num1, num2);
    
    for (i = 2; i < n; i++ ){
        sum = num1 + num2;
        printf(" %d ",sum);
        num1 = num2;
        num2 = sum;
 
    }
    printf("\n");
    return 0;

}
  
  
  
  





