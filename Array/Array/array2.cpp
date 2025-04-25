#include<iostream>
using namespace std;

//Sorting of array elements
//1. Selection Sort-FIND THE MINIMUM ELEMENTS IN UNSORTED ARRAY AND REPLACE WITH ELEMENTS AT THE BEGINNING.
 int main(){
    int n;
    cout<<"ENTER NO. OF ELEMENTS OF ARRAY "<<"\n";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS OF ARRAY "<<"\n";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
//     //A Ascending order
//     for (int i = 0; i <= n-1; i++)           // loop replacing all ahead lesser elements towards ahead
//     {
//         for (int j = i+1; j<=n; j++)
//         {
//             if (arr[j]<arr[i])
//             {
//                int temp=arr[j];
//                arr[j]=arr[i];
//                arr[i]=temp;
//             }
            
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<endl;
//     }
    
//     // //B. descending order

//     for (int i = 0; i <= n-1; i++)
//     {
//         for (int j = i+1; j<=n-1; j++)
//         {
//             if (arr[i]<arr[j])
//             {
//                int temp=arr[i];         // done as such in this case becoz i is initial elements of array and j is later
//                arr[i]=arr[j];
//                arr[j]=temp;               
//             }
            
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<endl;
//     }


//2. BUBBLE SORT- REPEATEDLY SORT 2 ELEMENTS IF THEY ARE IN WRONG ORDER

int random=1;// random element to begin swaping iterations
    while (random<n)
    {
        for (int i = 0; i <n-random; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp=arr[i];                            //storing value of arr[i] in random temp integer value so that no random value it can assign.
                arr[i]=arr[i+1];            // replacing elements as in sorted / ascending order
                arr[i+1]=temp;
            }
            
        }
        random++;           // for the continuation of the loop
    }
    
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;
}

 }

//}
//3.INSERTION SORT-INSERT AN ELEMENT FROM UNSORTED ARRAY TO ITS CORRECT POSITION IN SORTED ARRAY.
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)     // TAKING ARRAY AS INPUT
    {
       cin>>arr[i];
    }
    for (int i = 1; i < n; i++)      
    {
        int current_value=arr[i];   //STORING ARRAY VALUE IN INT CURRENT_VALUE
        int j=i-1;                  //CONSIDERING PREVIOUS ELEMENTS IN ORDER TO COMPARE
        while (arr[j]>current_value && j>=0)
        {
           arr[j+1]=arr[j];           //REPLACING ELEMENTS IN SORTED ARRAY
           j--;                        
        }
       arr[j+1]= current_value;

    }
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<endl;
    }
}