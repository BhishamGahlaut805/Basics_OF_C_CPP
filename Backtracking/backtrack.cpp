#include<iostream>
using namespace std;
//Rat in a maze
bool issafe(int **arr, int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
        return 1;
    }
    return 0;
}
   bool ratinmaze(int** Arr,int x,int y,int n,int**solArray){
    if((x==n-1)&&(y==n-1)){
        solArray[x][y]=1;
        return true;
    }
    if (issafe(Arr,x,y,n)){
        solArray[x][y]=1;

    
    if (ratinmaze(Arr,x+1,y,n,solArray)){
        return true;
    }
    if (ratinmaze(Arr,x,y+1,n,solArray)){
        return true;
    }
    solArray[x][y]=0; //backtraking
    return false;
    
   }
   return false;
   }

int main(){
int n;
cin>>n;
int **arr=new int*[n];
for (int i = 0; i < n; i++)
{
    arr[i]=new int[n];
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>arr[i][j];
    }
    
}
int **solarr=new int*[n];
for (int i = 0; i < n; i++)
{
    solarr[i]=new int[n];
    for (int j = 0; j < n; j++)
    {
       solarr[i][j]=0;
    }
    
}
if (ratinmaze(arr,0,0,n,solarr))
{
    for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}




return 0;
}
}