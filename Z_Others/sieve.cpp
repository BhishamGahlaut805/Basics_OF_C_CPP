#include<iostream>
using namespace std;

//Sieve of Eratosthenes
//1.---->to find all prime no. till n
void primesieve(int n){ //1.Declaring function for finding prime no.
    int prime[n]={0};//2.making a prime array of random size initiate with 0

    //applying loops from first prime no.(2)
    for (int i = 2; i <= n; i++)
    {
        if (prime[i]==0) //checking if unmarked
        {
           for (int j=i*i; j <= n; j+=i)//if unmarked starting from i*i bec first unmarked element will be i*i
           //jumping j across multiples of i
           {
            prime[j]=1;  //marking all multiples of that element i
           }
           
        }
        
    }
    //printing all unmarked(prime numbers)
    for (int i = 2; i <= n; i++)
    {
        if(prime[i]==0){//unmarked
            cout<<i<<" ";
        }
        //cout<<endl;
    }
    
    
}

//2. To find prime factors of a number

void primefactor(int n){
    int spf[n]={0}; // declaring a array of name smallest prime factor
    for (int i = 2; i <=n; i++)
    {
        spf[i]=i; // declaring spf of all to be equal to that no. and is true for prime no. and ahead is the condition for non primes
        
    }
   for (int i = 2; i <= n; i++)
   {
    if(spf[i]==i){ // to go ahead with multiples of non primes
        for (int j= i*i; j<=n; j+=i)
        {
            if(spf[j]==j){ //for all multiples of i if spf of them is equal to themselves then we find the lowest no.(spf)out of them which is stored ahead
                spf[j]=i;
            }
        }
        
    }
   }

   //AFTER THIS DIVIDE THAT NUMBER BY ITS SMALLEST PRIME FACTOR TO GET ALL THE PRIME FACTORISATION
   while (n!=1)
   {
    cout<<spf[n]<<" ";//dividing the number by its spf until 1 to get all prime factors
    n=n/spf[n];
   }
   
    
    
}
int main(){
int n;
cout<<"Enter number till prime";
cin>>n;
//primesieve(n);
primefactor(n);


}