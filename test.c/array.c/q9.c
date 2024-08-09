//take an array of size n and a number k from the user as a input and print the element of on array in a rotated manner with a gap of k ex let us say the array is 3,6,7,5,10 and the value of k=2 the output should be 7,3,10,6,5
#include<stdio.h>
int main()
{/*
int n,temp,i,j;
int s=1;
printf("enter the number n :");
scanf("%d",&n);
int arr[n];
int b[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
int k;
int z=k;
printf(" the value of k : ");
scanf("%d",&k);
for(int i=0; i<n; i++)
{
	b[i]=arr[k];
}
printf("%d",b[i]);
return 0;
}*/
int n, k;

    printf("Enter the number n: ");
    scanf("%d", &n);
    
    int arr[n];
    int b[n];

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Adjust k to handle cases where k is greater than n
    k = k % n;

    for (int i = 0; i < n; i++) {
        // Calculate the index for the rotated element
        int rotatedIndex = (i + k) % n;
        b[i] = arr[rotatedIndex];
    }

    printf("Rotated array with gap of %d:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
	
	
