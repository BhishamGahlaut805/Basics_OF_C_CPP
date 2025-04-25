#include<iostream>
using namespace std;

void pattern(int x,int y){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(i==1 || i==x||j==1||j==y){
                cout<<"*"<<" ";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}
int main(){
    int x,y;
    cin>>x>>y;
    pattern(x,y);




}