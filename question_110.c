// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include<stdio.h>

int main()
{
    int i,j,n;
    int arr[50];
    int max,k;
    printf("enter the number of element you want to enter:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("size of subarrays sum:");
    scanf("%d",&k);
    for(i=0;i<=(n-k);i++)
    {
        for(j=i;j<(k+i);j++)
        {
            if(arr[i]<=arr[j])
            {
                max=arr[j];
            }
        }
        printf("%d ",max);
    }
    return 0;
}
