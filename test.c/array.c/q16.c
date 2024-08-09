//binary serch.
#include <stdio.h>
int main() 
{
    int n,mid,j,p;
    printf("enter the number n:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
     {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("enter the key value: ");
    scanf("%d",&key);
    j=0;
    p=n-1;
    while(j<= p) 
    {
        mid = (j+p)/2;
        if (key==arr[mid]) 
        {
            printf("Key %d found at index %d\n", key, mid);
            return 0;
        } 
        else if (key>arr[mid])
         {
            j=mid+1;
        }
        else 
        {
            p = mid-1;
        }
    }
    printf("Key %d not found in the array\n", key);
    return 0;
}

				
				
				
				
				
				
				
				
				
				
