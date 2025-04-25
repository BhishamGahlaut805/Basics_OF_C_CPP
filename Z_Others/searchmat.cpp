#include<iostream>
using namespace std;
int main(){
//     Challenge 3 - 2D matrix Search
// Problem
// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

//taking input matrix using array
int n,m;
cout<<" enter order ";
cin>>n>>m;
int target;
cout<<" enter target value ";
cin>>target;
int mat[n][m];
cout<<" enter matrix ";
for (int i = 0; i <n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin>>mat[i][j];
    }
    
}
//1.linear search in matrix
/*
    bool ans=false;             //bool value for assigning true or false
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j]==target)      //req condition
            {
                ans=true;

            }
            
        }
        
    }
    if (ans)                    //final value return
    {
        cout<<"ELEMENT FOUND";
    }
    else
    {
        cout<<"ELEMENT NOT FOUND";
    }
    
  */  
    
    //2. optimised approach
// 1. Start from the top right element.
// 2. You are at (r,c)
// if(matrix[r][c] == target)
// return true
// If (matrix[r][c] > target)
// c--
// else
// r++;
     
     bool found=false;
     int r=0,c=n-1;  //top right position as a starting point
     while (r<m && c>=0)   //final limits
     {
        if (mat[r][c]==target)
        {
            found=true;
        }
        if (mat[r][c]>target)
        {
            c-- ;

        }
        else
        {
            r++ ;
        }
        

        
        
     }
      if (found)                    //final value return
    {
        cout<<"ELEMENT FOUND";
    }
    else
    {
        cout<<"ELEMENT NOT FOUND";
    }
     


}