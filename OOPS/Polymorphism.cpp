#include<iostream>
using namespace std;

//Polymorphism, Inheritance
//1.Function Overloading

class bhisham{
    public:
    void test(){
        cout<<"1.No operator in function"<<endl;
    }
    void test(int x){
        cout<<"2.Single Operator int function"<<endl;
    }
    void test(double x){
        cout<<"3.Double operator"<<endl;
    }

};
//2.Operator overloading
class complex{
   private:
   int real,imaginary;
   public:
   complex(int r,int i){
        real=r;
        imaginary=i;
   }
   complex (){
    cout<<"Default";
   }

   
   complex operator+ (complex const &obj){
    complex result;
    result.real= real+ obj.real;
    result.imaginary= imaginary+obj.imaginary;
    return result;

   }
   void display(){
    cout<<real<<" + i"<<imaginary<<endl;
   }

};


int main(){
    // bhisham obj;
    // obj.test();
    // obj.test(4);
    // obj.test(2.44);

complex c1(23,5);
complex c2(3,25);
complex c3=c1+c2;
c3.display();
return 0;
}