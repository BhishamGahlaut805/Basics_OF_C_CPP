#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//   struct student
// {
//     int rollno;
//     int marks;
//     char name[10];
//     char sen[50];
// }  b;

 typedef struct college
{
    char nameofcollege[20];
    int ranking;
    struct student1
    {
        int student_id;
        char name[20];
        int rollno;
    } studentA;
    
}C;

struct structure1
{
    int x;
    int y;
};


int main(){
//     int size;
//     struct student s;
//     size=sizeof(s);
//     printf("%d\n",size);

//    struct student b ={13,100,"Bhisham","This is amazing"};
//     printf("%d\n",b.marks);
//     printf("%d\n",b.rollno);
//     printf("%s\n",b.name);
//     printf("%s",b.sen);

        struct structure1 s25;
        printf("%d\n",sizeof(s25));

     C s2;
    printf("%d\n",sizeof(s2));
   C a={"YMCA",1,{10,"Bhisham",13}};
   C b={"ABCD",2,{25,"Rahul",78}};
   printf("Student 1\n");
   printf("College Name:%s\n",a.nameofcollege);
   printf("Ranking:%d\n",a.ranking);
   printf("Student name%s\n",a.studentA.name);
   printf("Student ID:%d\n",a.studentA.student_id);
   printf("Student Roll no. %d\n",a.studentA.rollno);
   printf("Student 2\n");
   printf("College Name:%s\n",b.nameofcollege);
   printf("Ranking:%d\n",b.ranking);
   printf("Student name%s\n",b.studentA.name);
   printf("Student ID:%d\n",b.studentA.student_id);
   printf("Student Roll no. %d\n",b.studentA.rollno);
   



    
}
