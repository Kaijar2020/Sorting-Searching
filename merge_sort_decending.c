
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int n;



void merge(int *a,int s,int e)
{
    int mid = (s+e)/2;

    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];

    while(i<=mid && j<=e)
    {
        if(a[i] > a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while(j<=e)
    {
        temp[k++]  = a[j++];
    }


    for(int i=s; i<=e; i++)
    {
        a[i] = temp[i];
    }


}

void mergeSort(int a[],int s,int e)
{

    if(s>=e)
    {
        return;
    }

    else
    {
        int mid = (s+e)/2;

        mergeSort(a,s,mid);
        mergeSort(a,mid+1,e);

        merge(a,s,e);
    }


}




int main()
{

    printf("Take array size n :");
    scanf("%d",&n);
    int a[n];


    for(int i=0; i<n; i++)
    {
        a[i]=rand()%100;
    }
    int z=0;
    printf("\nRandome value is:");
    while(z<n)
    {
        printf("%d ",a[z]);
        z++;
    }
    mergeSort(a,0,n-1);
    printf("\n\nThe desending order sorted array is :");

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    getch();


}
