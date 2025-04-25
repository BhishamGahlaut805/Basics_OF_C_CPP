#include<iostream>
using namespace std;
int main(){
    /*
    //character arrays- of char
    char arr[100];
    cin>>arr;
  // cout<<arr<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4];
   int i=0;
   while(arr[i] != '\0'){   // \0 element to declare end of a word /line;
    cout<<arr[i]<<endl;;    //printing all the letters 
    i++;
   }
    */

   //to check word is a palindrome or not

/*

   int n;
   cin>>n;
   char arr[n+1];   // n+1 for last 0th element to represent end point

   cin>>arr;
   bool check=0;
   for (int i = 0; i < n; i++)
   {
    if (arr[i]==arr[n-1+i])     // N-1+i for the continuation of loop to check matching of first and last char
    {
        check =1;
    }
   
    
   }
   if(check){
    cout<<" PALINDROME YES ";
   }
   else{
    cout<<" NOT PALINDOME ";
   }


*/

//     // longest word in a sentence

//     int n;
//    cin>>n;
//    cin.ignore();
//    char arr[n+1];   // n+1 for last 0th element to represent end point

//    cin.getline(arr,n);  //getline is used for taking whole sentence as input
//    cin.ignore();        //to avoid buffer/overstatement
   
//    int i=0;
//    int currlength=0 , maxlength =0; // two variables for storing values
//     int st=0, maxst=0;
//     while (1)
//     {
//         if(arr[i]==' '|| arr[i]=='\0'){
//             if (currlength> maxlength)
//             {
//                 maxlength=currlength;
//                 maxst=st;
//             }
//             currlength=0;
//             st=i+1;
//         }
//         else
//         currlength++;
//         if (arr[i]=='\0')
        
//             break;
        
//             i++;
        
        
        
//     }
//     cout<<maxlength<<endl;
//     for (int i = 0; i < maxlength; i++)
//     {
//         cout<<arr[i+maxst];
//     }
    
    

}