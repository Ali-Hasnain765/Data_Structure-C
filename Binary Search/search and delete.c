//Ali Hasnain Moula Chowdhury
//213-35-765

#include <stdio.h>

int main()
{
    printf("Enter the size of an array :\n");
    int n;
    scanf("%d",&n);

    int arr[n],i,j;

                                 ///            *** Traverse of the array***                   ///

    ///Loop for input all the element of array

    printf("\nEnter the array elements :\n");

    for ( i=0 ; i<n ; i++ )
    {
        scanf("%d",&arr[i]);
    }

    ///Loop for printing out all the element of the array

    printf("\nThe array is :\n");

    for ( i=0 ; i<n ; i++ )
    {
        printf("%d\t",arr[i]);
    }


                                 ///            *** Sorting The array by accending order***                   ///

    int temp;

    ///using bubble sort to sorting the array by accending order

    for (i=0 ; i<n-1 ; i++)
    {

        for (j=0 ; j<n-i-1 ;j++)
        {
            if ( arr[j] > arr[j+1] )
            {
                 temp = arr[j+1];
                 arr[j+1] = arr[j];
                 arr[j] = temp;
            }
        }

    }
    ///Loop for printing the sorted array
     printf("\n\nThe sorted array by accending order is:\n");

        for ( i=0 ; i<n ; i++ )
        {
            printf("%d\t",arr[i]);

        }

                                 ///            ***Binary Searching a specific value location from the array***                   ///
     printf("\n\nEnter the search value :\n");
     int search;
     scanf("%d",&search);

     int high = n-1,low = 0;
     int middle = (low+high)/2 ;

     for( i=0; low <= high; i++ )
     {
         if ( arr[middle] > search )
         {
             high = middle - 1;
         }

         else if ( arr[middle] == search )
         {
             printf("\nThe element %d is found at index %d\n",search,middle);
             break;
         }

         else
         {
             low = middle + 1;
         }
         middle = (low+high)/2 ;
     }
     if( arr[middle] != search )
     {
         printf("\nThe element %d is not found!!\n",search);
     }


                                 ///            *** Deletion of the searching value from the array**                   ///

      if( arr[middle] == search )
      {
          ///Loop for deletion of searching value

          for ( j= middle ; j<n; j++ )
          {
              arr[j] = arr[j+1];
          }

          ///Printing the array after deletion of searching value

          printf("\nAfter deleting the element %d from the array :\n",search);

          for ( i=0; i<n-1; i++)
          {
              printf("%d\t",arr[i]);
          }
      }
      ///if search element is not available in the array then we will print the normal array
      else
      {
          printf("\nAfter deleting the element %d from the array :\n",search);

          for ( i=0; i<n; i++)
          {
              printf("%d\t",arr[i]);
          }
      }
 return 0;
}
