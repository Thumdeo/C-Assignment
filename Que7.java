// Q7. Write a java program to accept a number from user using command line
// argument and display its table. 



public class Que7{
    public static void main(String[] args) {
         int n = Integer.parseInt(args[0]);
         for ( int i = 1;i <= 10 ; i++){
               System.out.printf("%d X %d = %d \n", n ,i, n * i);
         }
     }
 }
 

