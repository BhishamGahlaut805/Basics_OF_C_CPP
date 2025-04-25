#include<iostream>
using namespace std;
int main(){
    //1.printing a matrix using 2 d arrays
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < n; j++)
        {
           cin>>arr[i][j];
        }
        
    }
//     cout<<"MATRIX IS "<<"\n"<<endl;
//    for (int i = 0; i < n; i++)
//     {
//         for (int j= 0; j < n; j++)
//         {
//            cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
    //2.searching in a matrix
    int x;
    cin>>x;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < n; j++)
        {if (arr[i][j]==x)
        {
            cout<<"order of number is " <<i+1<<" *"<<j+1<<endl;;
        }
        flag=1;
        
           
        }
        
    }
    if (flag)
    {
        cout<<"element is found"<<"\n";
    }
    else{
        cout<<"element is not found ";
    }
}


   //3.spiral print of a matrix
//    int row_start=0, row_end=n-1,  col_start=0,col_end=m-1;
//    while (row_start<=row_end && col_start<=col_end)
//    {
//     //A. for row start
//     for (int col = col_start; col <= col_end; col++)
//     {
//         cout<<arr[row_start][col]<<" ";
//         }
//         row_start++;
    
//     //B. for column end
//     for (int row = row_start; row <= row_end; row++)
    
//     {cout<<arr[row][col_end]<<" ";}
//         col_end--;
    
//     //C.for row end
//     for (int col = col_end; col >=col_start; col--)
    
//     {cout<<arr[row_end][col]<<" ";}
//         row_end--;
    
//     //D. for column start
//     for (int row = row_end; row >= row_start; row--)
    
//     {cout<<arr[row][col_start]<<" ";}
//         col_start++;
    
    
    
    
    
//    }
//    return 0;
    


// }