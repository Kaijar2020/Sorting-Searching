

//akib id:182482525
#include<stdio.h>

int main()
{
    int a[50],n,i,j,box,temp,k;
    printf("Take the array size:");
    scanf("%d",&n);
    printf("\nTake the element of array:");
    i=0;
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    for(i=0; i<n-1; i++)
    {
        box=a[0];
        k=0;
        j=0;
        do
        {
            if(a[j]<box)
            {
                box=a[j];
                k=j;
            }
            j++;

        }while(j<n-i);
        temp=a[k];
        a[k]=a[j-1];
        a[j-1]=temp;

    }
    printf("\nsorted array in desending order is :");
    i=0;
    while(i<n)
    {
        printf("%d ",a[i]);
        i++;
    }

    return 0;
}
