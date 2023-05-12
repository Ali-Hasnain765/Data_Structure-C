#include<stdio.h>
int main ()
{
    int a[100],i,n,search,newindex;
    printf ("how many you want?\n");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        printf (" %d",a[i]);
    }
    printf ("\nenter the value you want to search\n");
    scanf ("%d",&search);
    for(i=0;i<n;i++)
    {
        if (a[i]==search)
        {
        newindex=i;
        printf ("the element found at %d index\n",i);
        break;
        }
    }
    if (i==n)
        printf ("\nelement not found\n");
        //delete
        for (i=newindex;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
      printf ("after searching & deleting the elements are:\n");
      for (i=0;i<n-1;i++)
      {
          printf (" %d",a[i]);
      }
}
