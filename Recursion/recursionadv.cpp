#include<iostream>
using namespace std;

        //1. Tiling problem
        // Find the number of ways to tile the floor with 1x2 and 1x1 tiles.
        // Idea: Tile[i] = Tile[i-1] (1x1) + Tile[i-2](1x2)
        //same as fibonacci
        int tiling(int n){
            if(n==0||n==1){  //Base case
                return n;
            }
            //main recursive
            return( tiling(n-1) + tiling(n-2));
        }
        //if we place vertically first tile,rest will remain n-1
        //if we place horizontally first tile,rest will remain n-2

    //2.Friend's Pairing problem
    int friendspair(int n){
        if (n==0||n==1||n==2)
        {
            return n;   //Base case
        }
        return friendspair(n-1) + friendspair(n-2)*(n-1); //both single and pair ways
    }
    //1st n-1 are remaining cases for singles and to complete all permutations of n-2 we have multiplied with n-1 as first person as n-1 ways to get paired 

    //3.knapsack problem
    int knapsack(int value[],int weight[],int n,int wok){
        //n--> no. of items , wok= max weight of knapsack

        //base cases
        if(n==0 || wok==0){
            return 0;
        }
        if(weight[n-1]>wok){
            return knapsack(value,weight,n-1,wok); //excluding that material n
        }
        return max(knapsack(value,weight,n-1, wok-weight[n-1])+value[n-1], knapsack(value,weight,n-1,wok));
        //first case we are including item in our knapsack and 2nd we are excluding
    }
int main(){

    // int n;
    // cin>>n;
 //   cout<<tiling(n)<<endl;
 //  cout<<friendspair(n);

    int value[]={100,50,150};
    int weight[]={20,30,10};
   
    cout<<knapsack(value,weight,3,50);
    return 0;
}