#include<iostream>
using namespace std;
typedef struct employ
{
    int salary;
    char name;
    string fullname;
}employ1;

int main(){
   employ1 s1,s2,s3,s4,s5;
    s1={1750001,'A',"BHISHAM"};
    s2={9750001,'B',"MOHAN"};
    s3={11750001,'C',"SOHAN"};
    s4={2750001,'D',"KUMAR"};
    s5={5750001,'E',"RAME"};
    

cout<<"EMPLOY 1: "<<endl;
cout<<"SALARY : "<<s1.salary<<endl;
cout<<"GRADE : "<<s1.name<<endl;
cout<<"NAME OF CANDIDATE : "<<s1.fullname<<endl;

cout<<"EMPLOY 2: "<<endl;
cout<<"SALARY : "<<s2.salary<<endl;
cout<<"GRADE : "<<s2.name<<endl;
cout<<"NAME OF CANDIDATE : "<<s2.fullname<<endl;

cout<<"EMPLOY 3: "<<endl;
cout<<"SALARY : "<<s3.salary<<endl;
cout<<"GRADE : "<<s3.name<<endl;
cout<<"NAME OF CANDIDATE : "<<s3.fullname<<endl;

cout<<"EMPLOY 4: "<<endl;
cout<<"SALARY : "<<s4.salary<<endl;
cout<<"GRADE : "<<s4.name<<endl;
cout<<"NAME OF CANDIDATE : "<<s4.fullname<<endl;

cout<<"EMPLOY 5: "<<endl;
cout<<"SALARY : "<<s5.salary<<endl;
cout<<"GRADE : "<<s5.name<<endl;
cout<<"NAME OF CANDIDATE : "<<s5.fullname<<endl;

return 0;
}
// OUTPUT 

// EMPLOY 1: 
// SALARY : 1750001
// GRADE : A
// NAME OF CANDIDATE : BHISHAM
// EMPLOY 2: 
// SALARY : 9750001
// GRADE : B
// NAME OF CANDIDATE : MOHAN
// EMPLOY 3: 
// SALARY : 11750001
// GRADE : C
// NAME OF CANDIDATE : SOHAN
// EMPLOY 4: 
// SALARY : 2750001
// GRADE : D
// NAME OF CANDIDATE : KUMAR
// EMPLOY 5: 
// SALARY : 5750001
// GRADE : E
// NAME OF CANDIDATE : RAME

