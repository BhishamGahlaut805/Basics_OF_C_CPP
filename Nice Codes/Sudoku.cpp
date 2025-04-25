#include<iostream>
using namespace std;
//SOLVING A SUDOKU-->APPROACH
//1.Make base cases if reach last row/col ->to start from next
//2.Make safety cases 1,not in col,2.row,3.grid
//3.for grid assume 9 boxex of 3*3
//4.Fill at safe places and return

#define N 9
void print(int arr[N][N])
{
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
bool isSafe(int grid[N][N], int row, int col, int num){
    for (int x = 0; x <= 8; x++)
		if (grid[row][x] == num)
			return false;

            for (int x = 0; x <= 8; x++)
		if (grid[x][col] == num)
			return false;


    int sr = 3 * (row/3);
       int sc = 3 * (col/3);
      
       for(int i=sr; i<sr+3; i++) {
           for(int j=sc; j<sc+3; j++) {
               if(grid[i][j] == num) {
                   return false;
               }
           }
       }

	return true;
}

bool sudoku(int grid[N][N],int row,int col){
 
    if(row == N) {
           return true;
       }
      
       int nrow = 0;
       int ncol = 0;
      
       if(col == N-1) {
           nrow = row + 1;
           ncol = 0;
       } else {
           nrow = row;
           ncol = col + 1;
       }

       if(grid[row][col] != 0) { //Non empty cells
           if(sudoku(grid, nrow, ncol)) {
               return true;
           }
       } else {
          
           //fill the place
           for(int i=1; i<=9; i++) {
               if(isSafe(grid, row, col, i)) {
                   grid[row][col] = i;
                   if(sudoku(grid, nrow, ncol))
                       return true;
                   else
                        grid[row][col] = 0; //Backtracking
               }
    //            cout<<"STEPS"<<endl;
    //            	for (int i = 0; i < N; i++) 
	// {
	// 	for (int j = 0; j < N; j++)
	// 		cout << grid[i][j] << " ";
	// 	cout <<endl;
	// }

               
           }
       }
                     
       return false;
   }
  
int main(){
    // cout<<"Enter Soduku"<<endl;
    // int arr[9][9];
    // for(int i=0;i<9;i++){
    //     for(int j=0;j<9;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    cout<<"Solved Suudoku is:"<<endl;
   
    int arr[9][9]={{5,3,0,0,7,0,0,0,0},
                   {6,0,0,1,9,5,0,0,0},
                   {0,9,8,0,0,0,0,6,0},
                   {8,0,0,0,6,0,0,0,3},
                   {4,0,0,8,0,3,0,0,1},
                   {7,0,0,0,2,0,0,0,6},
                   {0,6,0,0,0,0,2,8,0},
                   {0,0,0,4,1,9,0,0,5},
                   {0,0,0,0,8,0,0,7,9}};

        if(sudoku(arr,0,0)==true){
            print(arr);
            }
        else{
            cout<<"Error";
        }
    
return 0;
}