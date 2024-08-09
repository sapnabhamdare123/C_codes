//sort in string
#include <stdio.h>
#include <string.h>
int main() 
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    char arr[n][100];  
    printf("Enter strings:\n");
    for(int i=0; i<n; i++) 
    {
        scanf("%s", arr[i]);
    }
    for(int i=0; i<n-1; i++) 
    {
        int min=i;
        for(int j = i + 1; j < n; j++) {
        
            if (strcmp(arr[j], arr[min]) < 0) 
            {
                min = j;
            }
        }
        if (min != i) 
        {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min]);
            strcpy(arr[min], temp);
        }
    }
    printf("Sorted strings: ");
    for (int p = 0; p < n; p++) {
        printf("%s, ", arr[p]);
    }

    return 0;
}



