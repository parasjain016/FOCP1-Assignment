// Q18. Develop a program to identify and print duplicate elements in an array, or print “-1” if no 
// duplicates exist, applying frequency detection and data validation. 
// Examples:  
// Input: {2, 10,10, 100, 2, 10, 11,2,11,2} 
// Output: 2 10 11 
// Input: {5, 40, 1, 40, 100000, 1, 5, 1} 
// Output: 5 40 1



#include<stdio.h>

int main()
{
    int n,i,j,k,printed,found=0;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nDuplicate elements : ");

    for(i=0;i<n;i++)
    {
        // check if this element occurred before -> then skip
        printed = 0;
        for(k=0;k<i;k++)
        {
            if(arr[k] == arr[i])
            {
                printed = 1;
                break;
            }
        }
        if(printed) continue;

        // now check if it occurs later → if yes print one time
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ",arr[i]);
                found = 1;
                break;
            }
        }
    }

    if(!found) printf("-1");

    return 0;
}
