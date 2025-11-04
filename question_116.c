// Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include<stdio.h>

int main()
{
    int num[30];
    int i,j,n;
    int k;
    printf("Enter the element you want to enter:");
    scanf("%d",&n);
    printf("Enter the target:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]<0)
        {
            printf("invalid input");
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((num[i]+num[j])==k)
            {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    printf("-1 -1");
    return 0;
}
