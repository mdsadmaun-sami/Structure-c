#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int age;
    float marks;
};
int main()
{
    struct  student class[3];
    for ( int i = 0 ; i < 3 ; i++ )
    {
        printf(" give name, age and marks of students %d :- ",i+1);
        scanf("%s %d %f",class[i].name,&class[i].age,&class[i].marks);
    }
    for ( int i = 0 ; i < 3 ; i++ )
    {
        printf("\nDetails of Student %d\n", i + 1);
        printf("name = %s\nage = %d\nmarks = %.2f\n",class[i].name,class[i].age,class[i].marks);
    }
    return 0;
}
