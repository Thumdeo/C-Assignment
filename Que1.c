// Q1. Write a program to input n numbers on command line argument and
// calculate maximum of them
#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]) {
    int i,n,num,max = 0;
    for ( i = 0;i < argc; i ++){
      num = atoi(argv[i]);
      if (num > max){
          max = num;
        }

    }
    printf("%d",max);
    return 0 ;
}

