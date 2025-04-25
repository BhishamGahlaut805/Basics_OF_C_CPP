#include<string.h>
#include<stdio.h>
int main(){
   
   //reading a file
   FILE*ptr=fopen("Hello.txt","r");
   char str[100];
   //Read all lines
   while(fgets(str,100,ptr)!=NULL){  // Reading & Printing from a file
    printf("%s",str);
   }

   //Read single line
   //fgets(destination,size,source)

   if(fgets(str,100,ptr)!=NULL){
    printf("%s",str);
   }
fclose(ptr);

   //Creating a File
   FILE*p=fopen("New.txt","w");

   //Enter in a file
   //fputs(from,to)
   char str1[]={"Hello One and all"};
   
   fputs(str1,p);

   
   fclose(p);



}