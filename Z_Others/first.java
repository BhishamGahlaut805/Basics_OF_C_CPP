/**
 * first
 */
import java.util.Scanner;
public class first {

    // public static void main(String[] args) {
    //     System.out.println("hello world");
    //     System.out.println("HEllo java  ");
    //     System.out.print("Good");
    //     System.out.print("Good 123");
       
        // for (int index = 1; index <=10; index++) {
        //     System.out.print(index*2);
          
        // }

       // Scanner sc = new Scanner(System.in);
            // String name= sc.nextLine();
            // int roll=sc.nextInt();
            // double marks= sc.nextDouble();
            // char grade=sc.next().charAt(0);
            // System.out.println("Name:"+name);
            // System.out.println("Roll no:"+roll);
            // System.out.println("Marks:"+marks);
            // System.out.println("Grade:"+grade);
            
            
         // 
        //   int num2=sc.nextInt();
        //   System.out.println(num1+num2);
        // for(int i=1;i<=10;i++){
        //     System.out.println(num1 +"*"+ i+"="+num1*i);
            
        // }
            // String day[]={"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
             
            //  System.out.println("Enter day number of the week");
            // 
            //  System.out.println("The day is "+ day[num]);
             
            //  System.out.println("Enter a number");
            //     int  num=sc.nextInt();
            //    int i=0;
            //    while (i<=num ) 
            //    {if(i%2==0)
                
            //         System.out.print(i+" ");
            //         i++;
                
            //    }
                // int a= sc.nextInt();
                // for(int i=a;i>0;i--){
                //     for(int j=i;j<=a;j++){
                //         System.out.print(" * ");
                //     }
                //     System.out.println("\n");
                // }
                // int a= sc.nextInt();
                // for(int i=0;i<=a;i++){
                //     for(int j=i;j>0;j--){
                //         System.out.print(" * ");
                //     }
                //     System.out.println("\n");
                // }
                // int a= sc.nextInt();
                // for(int i=a;i>0;i--){
                //     for(int j=a;j>i;j--){
                //         System.out.print(" * ");
                //     }
                //     System.out.println("\n");
                // }
                
                


   public boolean isSafe(char[][] board, int row, int col, int number) {
       //column
       for(int i=0; i<board.length; i++) {
           if(board[i][col] == (char)(number+'0')) {
               return false;
           }
       }
      
       //row
       for(int j=0; j<board.length; j++) {
           if(board[row][j] == (char)(number+'0')) {
               return false;
           }
       }
      
       //grid
       int sr = 3 * (row/3);
       int sc = 3 * (col/3);
      
       for(int i=sr; i<sr+3; i++) {
           for(int j=sc; j<sc+3; j++) {
               if(board[i][j] == (char)(number+'0')) {
                   return false;
               }
           }
       }
    
    return true;



}


public boolean helper(char[][] board, int row, int col) {
    if(row == board.length) {
        return true;
    }
   
    int nrow = 0;
    int ncol = 0;
   
    if(col == board.length-1) {
        nrow = row + 1;
        ncol = 0;
    } else {
        nrow = row;
        ncol = col + 1;
    }
   
    if(board[row][col] != '.') {
        if(helper(board, nrow, ncol)) {
            return true;
        }
    } else {
       
        //fill the place
        for(int i=1; i<=9; i++) {
            if(isSafe(board, row, col, i)) {
                board[row][col] = (char)(i+'0');
                if(helper(board, nrow, ncol))
                    return true;
                else
                     board[row][col] = '.';
            }
        }
    }
                  
    return false;
}

public void solveSudoku(char[][] board) {
    helper(board, 0, 0);
}
Scanner sc = new Scanner(System.in);
int n=sc.nextInt();


for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

    }
}


}





 //
    
