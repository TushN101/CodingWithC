//Write a program to copy one array to another using pointer
#include <stdio.h>
void main()
{
    int main_array[]={1,2,3,4,5};
    printf("Orignal array : ");
    for (int i=0;i<5;i++){
        printf("%d ",main_array[i]);
    }
    int final_array[5];
    //Storing the address of the main array
    int *mainPtr=main_array;
    int *finalPtr=final_array;
    for(int i=0;i<5;i++)
    {
        *(finalPtr+i)=*(mainPtr+i);
    }
    printf("\nCopied Array: ");
    for (int i=0;i<5;i++)
    {
        printf("%d ",final_array[i]);
    }
}