// #include<iostream>
// using namespace std;

//  int main(){
// //     int n,m,l;
// //     cin>>n>>m>>l;
// // for (int i = 1,j=1,k=1; i <11,j<11,k<11 ;i++,j++,k++)
// // {
// //     cout<<n*i<<" "<<m*j<<" "<<l*k<<endl;
// // }
// // for(;;){
// //     cout<<"Hacker";
// // }
// // for(;int i=1;){  //infinite looping 
// //     cout<<i<<endl;
// // }

//  int n1,n2;
//     cout<<"ENTER ORDER OF MATRICES TO ADDED \n";
//     cin>>n1>>n2;
//     int m1[n1][n2];     //matrix 1
//     int m2[n1][n2];     //matrix2
//     int m3[n1][n2];
   
//     //taking matrix input
//     printf("Enter matrix 1\n");
//     for (int i = 0; i < n1; i++)        //taking matrix 1 as input
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin>>m1[i][j];
//         }
//         cout<<"\n";
//     }
//     printf("enter matrix 2\n");
//     for (int i = 0; i < n1; i++)        //taking matrix 2 as input
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin>>m2[i][j];
//         }
//         cout<<endl;
        
//     }
//     for (int i = 0; i < n1; i++)        
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             m3[i][j]=0;
//         }
        
//     }
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
           
//                 m3[i][j]= m1[i][j]+m2[i][j];
            
//         }
//     }
//     printf("Resultant matrix is:\n");
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             printf("%d ",m3[i][j]);
//         }
//         cout<<endl;
//     }



// return 0;
// }

#include<iostream>
using namespace std;

bool isSafe(int **board,int size,int row,int col,int number){
    //For column
    for(int i=0;i<9;i++){
        if(board[i][col]==number){
            return false;
        }
    }
    //row
    for(int j=0;j<9;j++){
        if(board[row][j]==number){
            return false;
        }
    }
    //Grid
     int start_row=3*(row/3);
     int start_col=3*(col/3);
     for(int i=start_row;i<start_row+3;i++){
        for(int j=start_col;j<start_col+3;j++){
            if(board[i][j]==number){
                return false;
            }

        }
     }
     return true;
}

bool sudoku(int** board,int size ,int row,int col){
    if (row==9)      //Traversed across whole board
    {
        return true;
    }

    int nrow=0;
    int ncol=0;
    if (col==8)    //If we are on last col then 
    {                   //start from next row's 1st col
        nrow=row+1;     
        ncol=0;
    }
    else
    {
        nrow=row;       //We are traversing in same row
        ncol=col+1;     //and increasing our column
    }

    if (board[row][col]!=0) //Non-empty cell
    {
        if (sudoku(board,size,nrow,ncol)) //Recursive calling 
        {                                 
            return true;
        }
        else
        //Else fill the places
        {
            for(int i=1;i<=9;i++){   //For filling digits 1-9
                if(isSafe(board,size,row,col,i)){ //If safe we fill
                    board[row][col]=i;
                    if (sudoku(board,size,nrow,ncol))//recursive call
                    {                               
                        return true;            
                    }
                    else{       
                        board[row][col]=0;  //backtracking
                    }
                    
                }
            }
        }
        return false;
        
    }
    

}
int main(){
    int n;
    cout<<"Enter size of Sudoku Board\n";
    cin>>n;
    cout<<"Enter the Soduku:Place 0 at non filled places"<<endl;
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<"Solved Sudoku is:"<<endl;
    if(sudoku(arr,n,0,0)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}