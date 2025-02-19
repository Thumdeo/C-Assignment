// Q4. Write a program to calculate the grade of a student. There are five
// subjects. Marks in each subject are entered from keyboard. Assign grade
// based on the following rule:
// Total Marks >= 90 Grade: Ex
// 90 > Total Marks >= 80 Grade: A
// 80 > Total Marks >= 70 Grade: B
// 70 > Total Marks >= 60 Grade: C
// 60 > Total Marks Grade: F

# include <stdio.h>
# include <stdlib.h>

int main (int argc, char *argv[]){  
    int i,num ;
    for (i = 1;i < argc; i++){
        num = atoi(argv[i]);
        if (num >= 90)
        { 
          printf("Grade: Ex \n");
        }
        else if ( 90 > num && num >= 80 ) {
            printf("Grade : A \n");

        } else if (80 > num && num >= 70){
            printf("Grade : B \n");

        }else if (70 > num && num >= 60)
        {
            printf("Grade : C \n");
        }
        else if ( 60 >= num )
        {
            printf("Grade : F \n");
        }
        
        }

    return 0;
}




















