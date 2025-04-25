#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//vector<data_type> vector_name;

int main(){ 
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    // display(vec1);   
    //     display(vec1);
    // vec1.pop_back();
    // display(vec1); 
    // return 0;
//     PS C:\Users\bhish\OneDrive\Desktop\CPP> .\vector1.exe
// Enter the size of your vector
// 5
// Enter an element to add to this vector: 1    
// Enter an element to add to this vector: 4 
// Enter an element to add to this vector: 6
// Enter an element to add to this vector:  4
// Enter an element to add to this vector: 3
// 1 4 6 4 3
// 1 4 6 4 3
// 1 4 6 4

vector<int> :: iterator iter=vec1.begin();
vec1.insert(iter+3,566);
display(vec1);


}
