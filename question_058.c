//Q58.Find the maximum and minimum element in an array.
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0], min = arr[0];
    for(i = 1; i<n; i++){
        if(arr[i] > max)
        max = arr[i];
        if(arr[i] < min)
        min = arr[i];
    }
    printf("maximum elements = %d\n", max);
    printf("minimum elements = %d\n",min);
    return 0;
    
}