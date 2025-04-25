#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    //string problems 
    //converting into lower case/upper case using ascii values

    string a= "JagdishChandraBose";
    cout<<'a'-'A'<<endl;
    cout<<'t'-'T'<<endl; // gap to 32 main point
    cout<<'A'-'a'<<endl;
    cout<<'a'-'a'<<endl;
    cout<<a<<endl;

    //convert to upper case
    for(int i=0; i< a.size(); i++){
        if(a[i]>='a' && a[i]<= 'z'){    // letter belong to lower character btw. a and z
            a[i]-=32;                   //subtracting ascii values as ascii value of a>A

        }
        
    }cout<<a<<endl;
    //convert to lower characters
    for(int i=0; i< a.size(); i++){
        if(a[i]>='A' && a[i]<= 'Z'){  // letter belong to upper character btw. A and Z
            a[i]+=32;           //adding    ascii values as ascii value of a>A;


        }
        
    }
cout<<a<<endl;


    //Inbuilt function for uppercase/lowercase

    transform( a.begin(), a.end(), a.begin() , ::toupper);
    cout<<a<<endl;
     transform( a.begin(), a.end(), a.begin() , ::tolower);
    cout<<a<<endl;

    //Greatest number using string sort
    string b="987691280395893049"; //numeric string
    sort(b.begin(), b.end(), greater<int>());
    cout<<" the greatest number is "<<b<<endl;

     string c="987691280395893049"; //numeric string
    sort(c.begin(), c.end(), less<int>());
    cout<<" the smallest number is "<<c<<endl;

  //Maximum repeting frequency

    string d;
    cin>>d;
    int freq[26];
    for(int i=0;i<26; i++)
        freq[i]=0;
        for (int i = 0; i< d.size(); i++)
        
            freq [d[i] -'a']++;  // storing frequency of each letter

        
        
    
//for output
        char ans='a';
        int maxF= 0;
        for (int k = 0; k < 26; k++)
        {
            if( freq[k]>maxF){  //condition for max freq and printing it
                maxF=freq[k];
             ans=k+'a';
             }  
            
        }
        cout<<" the maximum frequency of element " << ans<<" "<<" is "<<maxF<<endl;
         
// return particular character as max or its umber of times
     string str = "bhisham";
    char checkCharacter = 'a';
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;

return 0;
}