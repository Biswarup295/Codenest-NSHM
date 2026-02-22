#include<stdio.h>
int main()
{
    int a[100],n,odd_count = 0,even_count = 0 ;
    printf("Enter How many elements you want: ");
    scanf("%d",&n);
    printf("\n Enter the elements of the array: \n");
    for(int i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n ; i++)
    {
        if(a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Even Count of the Numbers: %d",even_count);
    printf("\nOdd Count of the Numbers: %d",odd_count);
    return 0;
}
