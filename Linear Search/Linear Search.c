#include<stdio.h>
int main ()
{
    int i,n=7,search;
    int arr[]={9,1,2,14,2,9,46};
    int flag = 0;
        printf("Enter search digit\n");
        scanf("%d",&search);
        for(i=0;i<n;i++){
            if(arr [i]== search) {
                printf("%d found at position: %d\n ",search,i+1);
                flag=1;
                break ; //To get out of the loop
            }
        }

        if (flag==0)

            printf("%d not found ",search);
            return 0;
}
