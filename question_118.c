// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include<stdio.h>

int main()
{
    int nums[30];
    int i,n;
    int numlc[31]={0};
    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
        numlc[nums[i]]++;
    }
    printf("The missing number:");
    for(i=0;i<=n;i++)
    {
        if(numlc[i] == 0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
