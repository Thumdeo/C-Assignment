// Q2. Write a program to calculate a Factorial of a number.

#include <stdio.h>

int main () {
    int n,i,fact = 1;
    scanf("%d",&n);
    for (i = 1; i<= n; i++){
         fact *= i;
    }
    printf(fact);
    return 0 ;
}


