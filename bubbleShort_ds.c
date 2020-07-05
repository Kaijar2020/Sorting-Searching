
//akib_id:182482525
#include<stdio.h>

int main()
{
    int a[50],size,i,j,temp;
    printf("Take the array size:");
    scanf("%d",&size);
    printf("\nTake the element of array:");
    i=0;
    while(i<size)
    {
        scanf("%d",&a[i]);
        i++;
    }
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nsorted array in desnding order is :");
    i=0;
    do
    {
        printf("%d ",a[i]);
        i++;
    }
    while(i<size);

    getch();
}
