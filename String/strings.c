#include<stdio.h>
#include<string.h>

int main(){
//    1.strlen(string_name)=String length/size
//    2.strcmp(string1,string2) 1-/+->unequal 0->Equal
//    3.strcpy(to_string,from_string)   
//    4.strcat(first string,second string);
//    5.strncpy(to_string,from, position to copy/double)
//    6.strncat(1st,2nd,no. of letters to copy from start of 2nd)
//    7.strncmp(1st,second,no. of letters to compare)
//    8.strchr(string,letter)-string ->0 based  indexing
//    9.strrchr(string,letter)-string ->0 based  indexing
//    10.strstr(string,substring)-string first occurence
//    11.strtok(string,delimiters)->return tokens in a line
//       delimiters->breakers like ., space

    char s1[]="Hello World";
    char s2[]={"Hello Hello"};
    char s3[]={""};
    char s4[]={"World hello"};
    char s5[]={"World World"};
    char s6[]={"College "};
    char s7[]={"YMCA"};
    char s8[]={"Hello hey!"};
    char s9[]={""};
    char s10[]={"University"};
    char s11[]={"JCBUST"};
    char s12[]={"Hi Everyone"};
    char s13[]={"How Amazing"};
    char s14[]={"VishavVidalaya"};
    char s15[]="JCBUST UNIVERSITY";
    char s16[]="Hey! there I'm here";
    const char delimiters[] = " ";

    strcpy(s3,s5);
    strcat(s6,s7);
    strncpy(s9,s8,8);
    strncat(s11,s10,7);
    
    printf("Size :%d \n",strlen(s1));
    printf("String compare:%d \n",strcmp(s2,s4));
    printf("String Copy-> %s\n",s3); 
    printf("String concatenation:-> %s\n",s6);
    printf("Special copy ->%s\n",s9);
    printf("Special concatenation-> %s \n",s11);
    printf("Special compare %d\n",strncmp(s12,s13,1));
    printf("Search of first occurence %d\n",strchr(s14,'a')-s14);
    printf("Last occurence in String %d\n",strrchr(s14,'a')-s14);
    printf("first occurence of substring %d\n",strstr(s15,"BUST")-s15);
    
    char* token = strtok(s16, delimiters); 
    while (token != NULL) { 
        printf("Token: %s\n", token); 
        token = strtok(NULL, delimiters); 
    } 
  return 0;
}    
    //OUTPUT
    // Size :11 
    // String compare:1 
    // String Copy-> World World
    // String concatenation:-> College YMCA
    // Special copy ->Hello heey!
    // Special concatenation-> JCBUSTUnivers 
    // Special compare 0
    // Search of first occurence 4
    // Last occurence in String 13
    // first occurence of substring 2
    // Token: Hey!
    // Token: there
    // Token: I'm
    // Token: here
    