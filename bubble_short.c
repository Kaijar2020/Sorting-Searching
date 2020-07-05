
//akib_id:182482525
#include<stdio.h>

int main()
{
    int a[50],size,i,j;
    printf("Take the array size:");
    scanf("%d",&size);
    printf("\nTake the element of array:");
    i=0;
    while(i<size)
    {
        scanf("%d",&a[i]);
        i++;
    }
    for(i=0; i<(size-1); i++)
    {
        j=0;
        while(j<size-i-1)
        {
            if(a[j]>a[j+1])
            {
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
            j++;
        }
    }
    printf("\nsorted array in assending order is :");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    return 0;
}
