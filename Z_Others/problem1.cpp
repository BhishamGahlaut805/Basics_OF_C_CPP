#include<iostream>
using namespace std;

// Given a time in the format of hh:mm (12-hour format) 0 < HH < 12, 0 <= MM < 60. The task is to convert it into words.
// Note: There are different corner cases appears for simplicity refer this example:

// 6:00 six o'clock
// 6:10 ten minutes past six
// 6:15 quarter past six
// 6:30 half past six
// 6:45 quarter to seven
// 6:47 thirteen minutes to seven


string timetoword(int h,int m){
    string ans;
    string word[100]={" twelve "," one "," two "," three "," four "," five "," six "," seven "," eight "," nine "," ten "," eleven "," twelve "," thirteen "," fourteen "," fifteen "," sixteen "," seventeen "," eighteen "," nineteen "," twenty "," twenty one "," twenty two "," twenty three "," twenty four "," twenty five "," twenty six "," twenty seven "," twenty eight "," twenty nine "};
    string oclock=" o'clock ";
    string past=" past ";
    string to=" to ";
    string qtr=" quarter ";
    if(m==0){  
        ans= word[h]+ oclock;
        return ans;
    }
    if(m==15){ 
        ans=qtr + past+word[h];
    
    } 
     else if(m>=1 && m<=29 && m!=15 ){
        ans= word[m] +" minutes "+past+ word[h];
    
    }
    else  if(m==30){
        ans=" half "+past+ word[h];

    }
     else if(m==45){
        ans=qtr +to+word[h];
    
    }
     else if(m>=31 && m<=59 && m!=45 ){
        ans=word[60-m]+" minutes "+to+word[h+1];
               
    }
     else if(m>=60)
                {
                    ans =   " minutes to " + word[(h+1)%12];
                }
                
                else{
                 ans = word[60-m] +  " minutes to " + word[(h+1)%12];
                }
    return ans;
    }
  

         string timeToWord11(int H, int M){
         string tick;
        string nums[] = {"twelve", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
        string oclock = " o' clock";
        string to = " to ";
        string past = " past ";
        string qrtr = "quarter";
        string half = "half";
        string mints = " minutes";
        string mint = " minute";
        if(M == 0)
        {
            tick = nums[H] + oclock;
        }
        else if(M == 15) 
        {
            tick = qrtr + past + nums[H];
        }
        else if(M == 30)
        {
            tick = half + past + nums[H];
        }
        else if(M == 45) 
        {
            tick =  qrtr + to + nums[H+1];
        }
        else
        {
                if(M == 1)
                {
                    tick = nums[1] + mint + past + nums[H];
                }
                else if(M == 59) 
                {
                    tick = nums[1] + mint + to + nums[(H+1)%12];
                }
                else if(M<30) 
                {
                    tick = nums[M] + mints + past + nums[H];
                }
                else if(M>=60)
                {
                    tick =   " minutes to " + nums[(H+1)%12];
                }
                else{
                 tick = nums[60-M] +  " minutes to " + nums[(H+1)%12];
                }
        }
        return tick;
    }
       
int main(){
    int h,m;
    cout<<"ENTER HOURS"<<endl;
    cin>>h;
    cout<<"ENTER MINUTES"<<endl;
    cin>>m;
    cout<<"THE TIME IS "<<timetoword(h,m);
 
return 0;
}