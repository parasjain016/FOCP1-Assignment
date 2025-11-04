// Q15. Write a C program to cyclically rotate the array clockwise by one position, applying array 
// transformation logic used in scheduling and encryption. 
// Input: arr[] = {1, 2, 3, 4, 5}  
// Output: arr[] = {5, 1, 2, 3, 4} 
// Input: arr[] = {2, 3, 4, 5, 1} 
// Output: {1, 2, 3, 4, 5} 


#include<stdio.h>

int main()
{
    int n,i,last;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    last = arr[n-1];        // store last
    for(i=n-1;i>0;i--)
    {
        arr[i] = arr[i-1];  // shift right
    }
    arr[0] = last;          // place last to first → rotated

    printf("\nArray after clockwise rotation by 1 position :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
