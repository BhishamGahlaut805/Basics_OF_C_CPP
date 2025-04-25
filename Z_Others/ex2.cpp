#include<stdio.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

int freq[n]={0};
for(int i=0;i<n;i++){
    freq[arr[i]]++;

}
int ans=-11213;
for(int i=0;i<n;i++){
    if(freq[i]>ans){
        ans=freq[i];
    }
}
printf("%d",ans);

return 0;
}