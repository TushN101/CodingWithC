// c program to print left half pyramid pattern of star
#include <stdio.h>

int main()
{
	for (int i=0;i<5; i++) 
	{
	    for(int j=0;j<=9;j++)
	    {
	        //i==2
	        if(j==5||(5-j<=i&&5-j>0)||(j-5<=i&&j-5>0))
	        {
	            printf("*");
	        }
	        else
	        {
	            printf(" "); 
	        }
	    }
	    printf("\n");
	}
	return 0;
}

//     *    
//    ***   
//   *****  
//  ******* 
// *********




