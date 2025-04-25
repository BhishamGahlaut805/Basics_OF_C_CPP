#include<iostream>
using namespace std;
/*
int main(){
//Write a program to find a unique number in an array where all numbers except
//one, are present twice.

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   // xor ^ of a number with itself gives 0
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum^a[i];   //taking xor bitwise operator of every value to it next value

    }
    cout<<"UNIQUE NO.IS"<<sum<<" ";

return 0;
}   
*/
//Write a program to find 2 unique numbers in an array where all numbers
//except two, are present twice.
/*
int setBit(int n, int pos) {
return ((n & (1 << pos)) != 0);
}
void unique(int arr[], int n) {
int xorsum = 0;
for (int i = 0; i < n; i++) {
xorsum = xorsum ^ arr[i];
}
int tempxor = xorsum;
int setbit = 0;
int pos = 0;
while (setbit != 1) {
setbit = xorsum & 1;
pos++;
xorsum = xorsum >> 1;
}
int newxor = 0;
for (int i = 0; i < n; i++) {
if (setBit(arr[i], pos - 1)) {
newxor = newxor ^ arr[i];
}
}
cout << newxor << endl;
cout << (tempxor ^ newxor) << endl;
}
int main() {
int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
unique(arr, 8);
return 0;
}*/



int getbit(int n,int pos){
    return(( n &(1<<pos))!=0);
}
int setbit(int n,int pos){
    return(( n |(1<<pos)));
}

/*
int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //program for 2 unique elements in an array

    int sum=0;             //initialising with 0
    for(int i=0;i<n;i++){
        sum=sum^arr[i];    //taking xor of every element with one another
    }
    int temp=sum;          //because no value of sum will be left while continuing looping
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit= sum&1;      //getting last bit required
        pos++;              //taking xor of each element having req set bit


    }
    int newxor=0;
    for(int i=0; i<n;i++){
        if(getbit(arr[i],pos-1)){//position where 1 occurs or same bit as the sum(of 2 unique numbers)
            newxor=newxor^arr[i];//newxor is 1st unique element
        }
    }
    cout<<newxor<<" ";
    cout<<(temp^newxor)<<endl; //xor of sum with first unique element gives 2nd element
}

*/


int main(){
//     Write a program to find a unique number in an array where all numbers
// except one, are present thrice.
    
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result=0;
    for(int i=0;i<64;i++){ //taking the 64 bit characters
       
        int sum=0;
        for(int j=0;j<n;j++){//iterating over all elements of array
        
            if(getbit(arr[j],i)){   //if the bit is set means 1 storing all such values counting
                sum++;
            }
        }
        if(sum%3!=0){               //to check the element not presented 3 thrice
            result=setbit(result,i);    //getting that element
        }
    }
    cout<<"UNIQUE ELEMENT IS "<<result;
}