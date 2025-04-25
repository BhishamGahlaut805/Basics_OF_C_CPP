#include<iostream>
using namespace std;

// Recursion - IV (Backtracking)

// Rat In a Maze
// Problem: Given a maze(2D matrix) with obstacles, starting from (0,0) you have to
// reach (n-1, n-1). If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).
// You can not move to the walls.
// Idea: Try all the possible paths to see if you can reach (n-1,n-1)

bool is_safe(int** arr,int x,int y, int n){ 
    //making a function to find is safe to reach a particular block . int**arr is dynamic size allocation of an array
//x,y-->position of a particular block
if (x<n &&y<n && arr[x][y]==1)
{
    return true;
}
return false;

}
//Main function for solution
bool ratinmaze(int **arr,int x,int y,int n,int **solarr){

    //base condition
    if(x==n-1 && y==n-1 ){
        solarr[x][y]=1;
        return true;
    }
    if (is_safe(arr,x,y,n))
    {
        solarr[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,solarr)){ //moving right
            return true;
        }
        if (ratinmaze(arr,x,y+1,n,solarr)) //moving down
        {
            return true;
        }
        solarr[x][y]=0; //BACKTRACKING coming to initial point if solution not come from above
        return false;
    }
    return false;
    
}


int main(){

    // 1 0 1 0 1
    // 1 1 1 1 1
    // 0 1 0 1 0
    // 1 0 0 1 1
    // 1 1 1 0 1
//DYNAMIC MEMORY ALLOCATION
int n;
cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    //input array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<endl;

    
    int **solarr=new int *[n];
    for (int i = 0; i < n; i++)
    {
       solarr[i]=new int[n];
       for(int j=0;j<n;j++){ //initial point of rat is (0,0)
        solarr[i][j]=0;
       }
    }
    //now calling ratinmaze function
    if(ratinmaze(arr,0,0,n,solarr)){
         for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<solarr[i][j]<<" ";
        }
        cout<<endl;
    }

    }
return 0;
}
