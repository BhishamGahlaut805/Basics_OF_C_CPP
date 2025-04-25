#include<iostream>
using namespace std;
int main(){
    
    /* input a matrix using arrays*/
    int n,m;
    cout<<" enter matrix r&c ";
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    /*main code for transpose of a matrix*/
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp=a[i][j];  /* for not assuming system to be having a random value*/
            a[i][j]=a[j][i]; // swaping
            a[j][i]=temp;   //loop continuing

        }
        
    }
    for (int i = 0; i < m; i++)//print matrix
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";  // line break given to form a matrix
        
    }
    
    
    
}