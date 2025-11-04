// Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

// N.B:
// - Print the output for each element in a comma separated fashion.
// - Do not use Stack, use brute force approach (nested loop) to solve.
#include<stdio.h>

int main()
{
    int n,i,j;
    int arr[10];
    int count=0;

    printf("Enter the element you want to enter:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i-1;j>=0;j--)
        {
            if(arr[i]<arr[j])
            {
                printf("%d,",arr[j]);
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("-1,");
        }
    }
    return 0;

}
