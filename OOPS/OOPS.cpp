#include<iostream>
using namespace std;

//1.Classes in c++
class student{
    //To make our class as public
    string name; //--->accessing the private members
    public: 
    
    int age;
    char gender;
    string contact;
    string rollNo;

    //for printing our class
    void printf(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Gender :"<<gender<<endl;
        cout<<"Contact :"<<contact<<endl;
        cout<<"Roll No. :"<<rollNo<<endl;
    }
    void setname(string s){  //Making string name as public
        name=s;
    }
    void getname(){  //Printing Private member
        cout<<name<<endl;
    }

    //DEFAULT CONSTRUCTOR-->WHEN NO PARAMETER PASSES IT WILL RUN
    student(){
        cout<<"DEFAULT CONSTRUCTOR: NO PARAMETER PASSED "<<endl;
    }//Default constructor

    
    //CONSTRUCTORS IN OOPS
    student (string s,int a,int g,string c,string r){
         cout<<"PARAMETERISED CONSTRUCTOR "<<endl;
        name=s;
        age=a;
        gender=g;
        contact=c;
        rollNo=r;
    }//Parameterised Constructor

    //DEFAULT COPY CONSTRUCTOR
    student(student &a){
         cout<<"COPY CONSTRUCTOR  "<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
        contact=a.contact;
        rollNo=a.rollNo;
    }

    //DESTRUCTERS
    ~student(){
        cout<<"DESTRUCTOR CALLED"<<endl;
    }

    //OPERATOR OVERLOADING -->DEFINING OPERATORS TO BEHAVE
    bool operator ==(student &a){
        if(name==a.name && age== a.age && gender==a.gender && contact==a.contact && rollNo==a.rollNo){
            return 1;
        }
    }

};


int main(){
    
    //student arr[3];
    /*
    string s;
    for(int i=0;i<3;i++){
        cout<<"NAME: = "<<endl;
        cin>>s;
        arr[i].setname(s); //Making public

         cout<<"AGE: = "<<endl;
        cin>>arr[i].age;
         cout<<"GENDER: = "<<endl;
        cin>>arr[i].gender;
         cout<<"CONTACT: = "<<endl;
        cin>>arr[i].contact;
         cout<<"ROLL NO: = "<<endl;
        cin>>arr[i].rollNo;
    }
    for(int i=0;i<3;i++){
        arr[i].printf();
    }
*/

// Output1
// Name :Bhisham
// Age :18
// Gender :M
// Contact :3742428472033
// Roll No. :234739847983
// Name :Jaypee
// Age :19
// Gender :M
// Contact :46546464864
// Roll No. :5544644484
// Name :Harman
// Age :19
// Gender :M
// Contact :35464646545
// Roll No. :5586778648

//CONSTRUCTORS IN OOPS
// student A("Bhisham",18,'M',"8950458165","23001011013");
// A.printf();
// student B("Bhisham",18,'M',"8950458165","23001011013");
// B.printf();
// student C("Bhisham",18,'M',"8950458165","23001011013");
// C.printf();
// student D("Bhisham",18,'M',"8950458165","23001011013");
// D.printf();
// student E("Bhisham",18,'M',"8950458165","23001011013");
// E.printf();

 student A("Bhisham",18,'M',"8950458165","23001011013");
 student B("Bhisham",18,'M',"8950458165","23001011013");
student F;
//F.printf();
student G=F;

//G.printf();

// Output 
// PARAMETERISED CONSTRUCTOR 
// DEFAULT CONSTRUCTOR: NO PARAMETER PASSED 
// COPY CONSTRUCTOR  


//OUTPUT-->DEFAULT CONSTRUCTOR
// DEFAULT CONSTRUCTOR: NO PARAMETER PASSED 
// Name :
// Age :0
// Gender :�
// Contact :
// Roll No. :

if(A==B){
    cout<<"SAME"<<endl;
}
else{
    cout<<"NOT SAME"<<endl;
}

return 0;
}
