#include<iostream>
using namespace std;
int main(){
    /*Challenge 2 - Matrix Multiplication
Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.
Constraints
1 <= n1,n2,n3 <= 1,000  */

    //taking matrix as input
    int n1,n2,n3;
    cout<<" ENTER ORDER OF MATRICES TO BE MULTIPLIED AS N1, N2, N3 (N2 COMMON) ";
    cin>>n1>>n2>>n3;
    int m1[n1][n2];     //matrix 1
    int m2[n2][n3];     //matrix2
    int ans[n1][n3];    //ans matrix

    //taking matrix input
    for (int i = 0; i < n1; i++)        //taking matrix 1 as input
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>m1[i][j];
        }
        
    }
    for (int i = 0; i < n2; i++)        //taking matrix 2 as input
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>m2[i][j];
        }
        
    }
    for (int i = 0; i < n1; i++)        //finding matrix ans and initialising with 0 to avoid any random value
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j]=0;
        }
        
    }
    // MAIN CODE FOR MATRIX MULTIPLICATION
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j]+= m1[i][k]*m2[k][j];
            }
            
        }
        
    }
    //printing final ansering matrix
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
    

}