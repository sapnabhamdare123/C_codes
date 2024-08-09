//graph
#include <stdio.h>
int main()
 {
    int array[5] = {7, 2, 6, 4, 5};
    int arr[5][5];
    
    for (int p=0; p<5; p++) 
    {
        for (int i=0; i<array[p] ; i++) 
        {
            for (int j=0; j<array[p]; j++)
             {
                if (j<array[p]) 
                {
                    arr[j][i] = '*';
                } else {
                    arr[j][i] = '-';
                }
            }
        }
        // Print the pattern in arr[][]
        for (int i = 0; i <1; i++) {
            for (int j = 0; j <array[p]; j++) {
                printf("%c ", arr[j][i]);
                printf("\n");
            }
            printf("\n");
        }
       printf("\n");
    }

    return 0;
}
