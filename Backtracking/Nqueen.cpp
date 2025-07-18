#include<iostream>
using namespace std;

//NQueen problem
bool issafe(int**arr,int x,int y, int n){
    //for same row
    for(int row=0;row<x;row++){
        if (arr[row][y]==1)
        {
            return false;
        }
        
    }
    //for left diagonal
    int row=x;
    int col=y;
    while (row>=0 && col>=0)
    {
        if(arr[row][col]==1){
            return false;
        }
        row--; //it gives the left diagonal
        col--;
    }
    //for right diagonal
     row=x;
     col=y;
    while (row>=0 && col<n)
    {
        if(arr[row][col]==1){
            return false;
        }
        row--; //it gives the right diagonal
        col++;
    }
    
return true;


}

bool queen(int **arr,int x,int n){
    if(x>=n){
        return true; //base condition
    }

    for (int col=0;col<n;col++)
    {
        if (issafe(arr,x,col,n))
        {
            arr[x][col]=1;
            if (queen(arr,x+1,n))
            {
               return true;
            }
            
            arr[x][col]=0;//Backtracking
        }
        
    }
    return false;
    
}
int main(){
    int n;
    cin>>n;
    int**arr=new int*[n];
    for (int i = 0; i < n; i++)
    {
        
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    if(queen(arr,0,n)){
        for (int i = 0; i < n; i++)
    {
        
        
        for(int j=0;j<n;j++){
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    }

return 0;
}