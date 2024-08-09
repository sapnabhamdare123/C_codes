//maximum element in array.
#include<stdio.h>
int main()
{
int n,max=0;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int k=0; k<n; k++)
{
	if(arr[k]>max)
	{
		max=arr[k];
	}
}
printf("%d",max);
return 0;
}
	
	
	
	
	
	
//last occurrence of a given key in the array.	
	/*#include <stdio.h>
int main() {
    int n, mid, j, p;
    printf("Enter the number n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    } 
    int key;
    printf("Enter the key value: ");
    scanf("%d", &key);
    j = 0;
    p = n - 1;
    int lastOccurrence = -1;
    while (j <= p) 
    {
        mid = (j + p) / 2;
        if (key == arr[mid])
         {
            lastOccurrence = mid;
            j = mid + 1; 
        }
         else if (key > arr[mid]) 
         {
            j = mid + 1;
        } 
        else 
        {
            p = mid - 1;
        }
    }
    
    if (lastOccurrence != -1)
     {
        printf("Last occurrence of %d is at index: %d\n", key, lastOccurrence);
    } 
    else 
    {
        printf("%d not found in the array\n", key);
    }
    return 0;
}*/

