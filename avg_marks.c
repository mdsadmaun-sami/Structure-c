/*Create a structure called "Student" with members name, age, and total marks.
Write a C program to input data for two students,
display their information, and find the average of total marks.*/
#include<stdio.h>
struct Student{
   char name[40] ;
   int age;
   float marks;
};
int main(){
    struct Student s1,s2;
    printf("Please Enter info for student 1:\n");
    printf("Name: \n");
    //scanf("%s",s1.name);// scanf space input hisebe neyna
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("Age: \n");
    scanf("%d",&s1.age);
    printf("Marks: \n");
    scanf("%f",&s1.marks);
   
    
    printf("Please Enter info for student 2:\n");
    printf("Name: \n");
    //scanf("%s",s2.name);
    fgets(s2.name,sizeof(s2.name),stdin);
    printf("Age: \n");
    scanf("%d",&s2.age);
    printf("Marks: \n");
    scanf("%f",&s2.marks);
    
    
    printf("Display info for student 1:\n");
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("Marks: %f\n",s1.marks);
    
    printf("Display info for student 2:\n");
    printf("Name: %s\n",s2.name);
    printf("Age: %d\n",s2.age);
    printf("Marks: %f\n",s2.marks);
    
    float avg;
    avg=(s1.marks+s2.marks)/2;
    printf("Average of total marks is %f",avg);
    return 0;
}
