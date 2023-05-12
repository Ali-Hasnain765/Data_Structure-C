#include<stdio.h>
int main()
{
    int i,n,src,max,min,mid,arr[100];
    printf("Enter num of element\n");
    scanf("%d",&n);
    printf("Enter the digits\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
         printf("Enter search digit\n");
        scanf("%d",&src);
        min=0;
        max=n-1;
        mid=(min+max)/2;
        while(min<=max){
            if(arr[mid]<src){
                min=mid+1;
            }
            else if (arr[mid] == src) {
                printf("%d found at %d position",src,mid+1);
                break;
            }
            else
                max=mid-1;

            //If the condition match with line 16&17 then,it will come to line 25.
            mid=(min+max)/2;

        }
        if (min>max) {
            printf("%d not found",src);
        }
        return 0;
}
