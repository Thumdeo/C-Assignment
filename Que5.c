// Q5. Write a program to check the input characters for uppercase,
// lowercase, number of digits and other characters. Display appropriate
// message.
#include <stdio.h>
#include<string.h>

int main(int argc,char *argv[]){
    int i ,x;
    
    for (x = 0; x < argc;x++){
      char *str = argv[x];

        for (i = 0 ;str[i] != '\0'; i++){

        if ( str[i] >= 'A' && str[i] <= 'Z'){ 
            printf("%c is Uppercase \n",str[i]);
        }


        else if (str[i] >= 'a' && str[i] <= 'z' )
        {
            printf("%c is Lowercase \n",str[i]);
        }

        else{
            printf("Input Error !");
        }
    }
    return 0;
}
}
    




