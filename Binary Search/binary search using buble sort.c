#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, c, d, swap, min, max, middle,nvalue,nindex,n;
    int a[100];
    printf("Enter how many elements you want: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(c=0; c<n-1; c++)
    {
        for(d=0; d<n-1-c; d++)
        {
            if(a[d]> a[d+1])
            {
                swap = a[d+1];
                a[d+1] = a[d];
                a[d] = swap;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("Enter the value to search: ");
    scanf("%d", &nvalue);
    min = 0;
    max = n-1;
    middle = (min+max)/2;
    while(min<=max)
    {
        if(a[middle]>nvalue)
        {
            max = middle-1;
            middle = (min+max)/2;
        }
    else if(a[middle]<nvalue)
        {
            min = middle+1;
            middle = (min+max)/2;
        }
    else
        {
            nindex = middle;
            printf("Found The value %d at [%d] index",nvalue,nindex);
            break;
        }
    }
    printf("\n");
    for(i=nindex; i<n; i++)
    {
        a[i] = a[i+1];
    }
    printf("\n");
    for(i=0; i<n-1; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
