#include<stdio.h>
int main(){
    FILE*fptr;
fptr=fopen("file.cpp","w");
if(fptr==NULL){
    printf("Error in Opening File");

}
else{
    printf("File opened successfully");
}
fclose(fptr);

}
