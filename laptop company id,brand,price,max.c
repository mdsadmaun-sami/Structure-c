#include<stdio.h>
struct laptop
{
    int id;
    char brand[50];
    int price;
};
int main()
{
    int n,i,sum=0;
    printf("enter number of laptop:");
    scanf("%d",&n);
    struct laptop l[n];
    for(i=0;i<n;i++)
    {
        printf("enter laptop id or laptop %d:",i+1);
        scanf("%d",&l[i].id);
        printf("enter brand for laptop %d:",i+1);
        scanf("%s", l[i].brand);
        printf("enter price for laptop %d:",i+1);
        scanf("%d",&l[i].price);
    }
    int index;
    int max =l[0].price;
    for(i=0;i<n;i++)
    {
        sum=sum+l[i].price;
        if( max < l[i].price )
        {
            max= l[i].price;
            index = 1;
        }
    }
    printf("total price: %d\n",sum);
    printf("maximum priced laptop : \n");
    printf("laptop id: %d\n",l[index].id);
    printf("laptop brand: %s\n",l[index].brand);
    printf("laptop price: %d\n",l[index].price);
    return 0;
}
