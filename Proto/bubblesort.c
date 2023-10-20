#include <stdio.h>

int main() {
    int i;
    printf("Enter the number of elements you want to sort: ");
    scanf("%d", &i);
    int arr[i];
    int temp;
    printf("Enter the numbers: ");
    for(int j = 0; j < i; j++) 
    {
        scanf("%d", &arr[j]); 
    }
    
    for(int p = 0; p < i; p++)
    {
        for(int k = 0; k < i - 1; k++)
        { 
            if(arr[k] > arr[k + 1]) 
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    
    printf("Sorted numbers: ");
    for(int z = 0; z < i; z++) 
    {
        printf("%d ", arr[z]);
    }
    
    return 0;
}
