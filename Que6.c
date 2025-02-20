// Q6. Write a program to perform matrix multiplication.
#include <stdio.h>


int main(){
    int i,j,a,b,product1;
    int  c[4][4] = { {1, 3, 0, 4}, 
                     {1, 3, 0, 4},
                     {-1, 5, 9, 4},
                     {-1, 5, 9, 4}
                    }; 
    int d[4][4] = 
                  { {1, 3, 0,4}, 
                    {1, 3, 0,4},
                    {-1, 5, 9,4},
                    {-1, 5, 9,4}
                  }; 
    int result[4][4] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                result[i][j] += c[i][k] * d[k][j];
            }
        }
    }
    for (i = 0; i < 4;i++){  
        for (j = 0; j < 4; j++)
        {
            /* code */
            printf("%2d ",result[i][j]);
        }
        printf("\n");
        
      
    }
    return 0;
}