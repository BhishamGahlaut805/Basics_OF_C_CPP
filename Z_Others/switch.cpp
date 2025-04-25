//learning using if /else
#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"ENTER A CHARACTER";
    cin>>button;

   /* if(button=='a'){
        cout<<"hello everyone";
    }
    else if(button=='b'){
        cout<<"namaste ji";
    }
     else if(button=='c'){
        cout<<"namaskar ji";
    }
     else if(button=='d'){
        cout<<"hey there!";
    }
     else if(button=='e'){
        cout<<"vadakkam ji";
    }
     else if(button=='f'){
        cout<<"hola";
    }
    else{
        cout<<"i'm learning more!"<<endl;
    }*/

//using switch statement

    switch (button)
    {
    case 'a':
        cout<<"hello";
        break;

        case 'b':
        cout<<"hey there";
break;
        case 'c':
        cout<<"hi";
break;
        case 'd':
        cout<<"hola";
        break;
    
    default:
    cout<<"im learning more"<<endl;
        break;
    }
    



    return 0;
        
}
        
    

    



