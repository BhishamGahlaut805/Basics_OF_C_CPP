#include<stdio.h>
//Lastdigit Questions
//1.Reverse Of a Number

void rev(int n){
    int reverse =0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n/=10;
    }
    printf("%d",reverse);
}

//2.Armstrong
void isarmstrong(int n){
    int original=n;
    int ans=0;
    while(n>0){
        int lastdigit=n%10;
         ans= ans+lastdigit*lastdigit*lastdigit;
        n/=10;
    }
    if(original==ans){
        printf("Yes");

    }
    else{
        printf("no");
    }
}

//3.Palindrome
void isPalin(int n){
    int rev=0;
    int org=n;
    while(n>0){
        int last=n%10;
        rev=rev*10+last;
        n/=10;

    }
    if(org==rev){
        printf("yes");
    }
    else{
        printf("No");
    }


}

//Decimal To binary
void decToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // Print the binary representation in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d",binaryNum[j]);
}

//Binary to decimal

int btd(int n){
    int x=1;
    int ans=0;
    while(n>0){
        int last=n%10;
        ans+=last*x;
        x=x*2;
        n/=10;

    }
    printf("%d",ans);
}
// long long dec_convert(int n, int base)
// {
//     string result = "";
//     while (n > 0)
//     {
//         long long k = n % base;
//         result += k;
//         n = n / base;
//     }
//     long long ans = stoi(result);
//     return ans;
// }
int main(){
    // rev(153);
    // isarmstrong(153);
    // isarmstrong(1132);
    // isPalin(121);
    // isPalin(190231);
    // btd(10101);

decToBinary(5);

}