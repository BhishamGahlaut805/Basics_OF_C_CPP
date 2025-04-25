#include<iostream>
#include<string> // Header file for adding strings
#include<algorithm> // sorting a string
using namespace std;

int main(){
    //Declaring a string
/*
    string start ;
    start=" Bhisham ";  // inputing a string
    cout<<start<<endl;

    // string of any size

   string str() ;
    //It declares a string of size.

    string s(5, 'N');
    cout<<s<<endl;
    //It declares a string of size 5 with all characters ‘N’.

    string abc(s);
    string xyz(start);
    //It declares a copy of the string s.
    cout<<abc<<endl;
    cout<<xyz<<endl;

    //Input and Output of a string
    string input;
    cin>>input;
    cout<<input<<endl;

    //Using getline() function: To input the string with space we use getline() function --> for full sentence input as it is

    string b;
    getline(cin,s);
    cout<<s<<endl;

*/
    // different functions of string

//     //1. append(): Inserts additional characters at the end of the string (can also be
// done using ‘+’ or ‘+=’ operator). Its time complexity is O(N) where N is the
// size of the new string.---> adding words/letters/numbers

     //append operator c.append()

     string c= "fam" , d="ily";
     c.append(d);
     cout<<c<<endl;

     string e= "10" , f="00";
     e.append(f);
     cout<<e<<endl;

    string g(d);  // making value of d stored in g
    cout<<g<<endl;

    string h(e);
    cout<<h<<endl;

    //2.assign(): Assigns new string by replacing the previous value (can also be
//done using ‘=’ operator).

    //assignining operator i.assign()

     string i=" bhisham";
     i.assign(" Home");
     cout<<i<<endl;

    string j=" home";
    j= "love";      //assign
    cout<<j<<endl;

    cout<<i+j<<endl; //append

//3.at(): Returns the character at a particular position (can also be done using ‘[
//]’ operator). Its time complexity is O(1).

    //.at()--> particular position character
    // array[]---> alternative to above
    string k="Bhisham"; //0 based indicing
    cout<<k.at(5)<<endl;
    cout<<k[5]<<endl;

//4.clear(): Erases all the contents of the string and assign an empty string (“”)
//of length zero. Its time complexity is O(1).

//.clear()operator---> for clearing the written part

    string l=" hsfkjbjfbjds ";
    l.clear();
    cout<<l<<endl;

  /* 5.compare(): Compares the value of the string with the string passed in the
parameter and returns an integer accordingly. Its time complexity is O(N +
M) where N is the size of the first string and M is the size of the second
string.*/

    // .compare()--> compare operator / letters lexicographically
    string m=" abc ", n=" xyz ";
    cout<<n.compare(m)<<endl;
    string o=" abc ", p=" abc ";
    cout<<p.compare(o)<<endl;
    string q=" stu ", r=" efg ";
    cout<<r.compare(q)<<endl;
    string s=" 19990 ", t=" 57488484 ";
    cout<<t.compare(s)<<endl;
    // Positive output --> n is greater
    // negative output --> m is greater
    // zero output --> equal

    // 6.empty(): Returns a boolean value, true if the string is empty and false if the
//string is not empty. Its time complexity is O(1).

//.empty()--> true or false based empty/filled
    string u=" dhshjsdjsshueu ";
    u.clear();//clear
    if(u.empty()){
        cout<<" empty "<<endl;
    }

//7.erase(): Deletes a substring of the string. Its time complexity is O(N) where
//N is the size of the new string.

// .erase()---> erasing substring
    string v="bhisham";
    v.erase(3,6);
    cout<<v<<endl;

    //8.find(): Searches the string and returns the first occurrence of the parameter
//in the string. Its time complexity is O(N) where N is the size of the string.

//.find()--> first occurence

    string w="boolean";
    cout<<"This is "<<w.find("oo")<<endl;

   //9.insert(): Inserts additional characters into the string at a particular position.
//Its time complexity is O(N) where N is the size of the new string.

//.insert()---> insert inner characters

    string x="bhisham";
    x.insert(7, "Gahlaut");
    cout<<x<<endl;

    //10.length(): Returns the length of the string. Its time complexity is O(1).
    //.length()---> total characters of string

    string y="Greatness";
    cout<<y.length()<<endl;

//     //11.resize(): Resize the string to the new length which can be less than or
// greater than the current length. Its time complexity is O(N) where N is the
// size of the new string.

// .resize()---> resize more or less in a string


    string z="university";
    z.resize(6);
    cout<<z<<endl;

    string a1="university";
    a1.resize(12);
    cout<<a1<<endl; // add 2 null characters

    //12.size(): Returns the length of the string. Its time complexity is O(1).
//.size()---> return size same as length

    string a2="12456373";
    cout<<a2.size()<<endl;

    string a3="jsfjhdjhdwh";
    cout<<a3.size()<<endl;

//13.substr(): Returns a string which is the copy of the substring. Its time
//complexity is O(N) where N is the size of the substring.

//.substr()---> returns a substring

    string a4=" truhwgshehehwgwugdkauwdj";
    cout<<a4.substr(3,8)<<endl;

    //14.stoi(): Returns the strings converted to int datatype.
//.stoi()--->string to integer

    string a5="3648";
    int a6= stoi(a5);
    cout<<a6 + 2<<endl;

    //15. To convert an integer to a string, we use to_string() function.
//to_string()---> int to string

    int b1= 3648;
    string b2= to_string(b1);
    cout<<b2+"2"<<endl;

    //16.Then we can use sort() function that is present in above header file on our string.
// Sort() function takes 2 arguments viz. iterator to start of the string and iterator to
// end of the string.

 string d1=" gdhshduwkwdcbhwbwwii";
 sort(d1.begin(), d1.end());
 cout<<d1<<endl;

 string d2=" qieoeqpeqxkkkkkkcskl";
 sort(d2.begin(), d2.end());
 cout<<d2<<endl;

 string d3=" gduwdhwhidiiwidiwinii";
 sort(d3.begin(), d3.end());
 cout<<d3<<endl;

 string d4=" gzxfsewdducnsmxkddiidjdddd";
 sort(d4.begin(), d4.end());
 cout<<d4<<endl;

 string d5=" shgdhasdgwuduwduwjdwun";
 sort(d5.begin(), d5.end());
 cout<<d5<<endl;

return 0;
}
