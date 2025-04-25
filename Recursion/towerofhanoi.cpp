#include<iostream>
using namespace std;

void towerofhanoi(int n, char source, char destination, char helper)
{
    if (n == 0)
    {           // n=number of blocks
        return; // base case
    }
    towerofhanoi(n - 1, source, helper, destination); // n-1 blocks shift from souce to helper
    cout << "Move from " << source << " to " << destination << endl;
    towerofhanoi(n - 1, helper, destination, source); // transfer from helper to destination as helper now become source and souce becomes helper
}
void tower(int n,int a,int b,int c){
    if(n==0){
        return;
    }
    tower(n - 1, a, c,b);
    cout << a << "->" << b << endl;
    tower(n - 1, c, b, a);
}
int main(){
    // towerofhanoi(3,'a','b','c');
    tower(2, 1, 2, 3);
}