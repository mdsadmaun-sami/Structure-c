#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};
struct employee{
    char name[50];
    struct date dob;
};

int main()
{
    int n;
    printf("enter number of employee : ");
    scanf("%d",&n);
    struct employee emp[n];
    for ( int i = 0 ; i < n ; i++ )
    {
        printf("Enter employee details for %d ( id name, day,month,year ):-\n",i+1);
        scanf("%s %d %d %d",emp[i].name,&emp[i].dob.day,&emp[i].dob.month,&emp[i].dob.year);
    }

    printf("Employees joined after 2020 :- \n");

    for( int i=0 ; i<n ; i++ )
    {
        if (emp[i].dob.year > 2020 )
        {
            printf("Name :- %s\njoining date:- %d/%d/%d\n\n",emp[i].name,emp[i].dob.day,emp[i].dob.month,emp[i].dob.year);
        }
    }
    return 0;
}
