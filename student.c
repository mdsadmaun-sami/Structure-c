#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int age;
    float marks;
};
int main()
{
    struct  student s1;
    strcpy(s1.name,"sami");
    s1.age=22;
    s1.marks=55;
    printf("name of s1 = %s\n",s1.name);
    printf("age of s1= %d\n",s1.age);
    printf("marks = %.2f",s1.marks);
    return 0;
}
