//WAP to find largest and smallest in list of integers
//Doing it without using 
#include <stdio.h>
void main()
{
    int n,num;
    int largest,smallest;
    printf("Enter the total number of integers in list : ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    scanf("%d",&num);
    largest = num;
    smallest = num;
    for(int i=1;i<n;i++)
    {
        scanf("%d",&num);
        if (num > largest) {
            largest = num;
        } else if (num < smallest) {
            smallest = num;
        }
    }
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

}