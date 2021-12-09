#include <stdio.h>
#include <stdlib.h>
void print_arr(int[], int);
int main()
{
    int a[10], i, size;
    printf("\nEnter the size of array       :");
    scanf("%d",&size);
    printf("\nEnter the elements of array   : ");
    for(i = 0;i < size;i++)
    {
        printf("\nEnter %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nElements before sorting\t:");
    print_arr(a,size);
    bub_sort(a,size);
    printf("\nElements after sorting\t:");
    print_arr(a,size);
}
void print_arr(int a[],int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void bub_sort(int a[], int n)
{
    int flag = 0;
    int i,j,temp;
    for(i = 0;i< n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("\nAlready elements are sorted order\n");
            break;
        }
    }
}
