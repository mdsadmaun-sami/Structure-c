#include<stdio.h>
#include<string.h>
struct Book{
    char author[50];
    int price,number_of_pages;
};
int main()
{
    struct  Book n[5];
    for ( int i = 0 ; i < 5 ; i++ )
    {
        printf("%d. give author name, price and number of pages :- ",i+1);
        scanf("%s %d %d",n[i].author,&n[i].price,&n[i].number_of_pages);
    }
    int max_price = n[0].price;
    for ( int i = 0 ; i < 5 ; i++ )
    {
        if ( n[i].price > max_price )
        {
            max_price = n[i].price;
        }
    }
    printf("Highest price = %d",max_price);
    return 0;
}
