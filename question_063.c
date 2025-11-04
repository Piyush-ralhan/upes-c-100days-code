//Q63.Merge two arrays.
#include <stdio.h>
int main() {
    int n1, n2, i, j, k;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    int merged[n1 + n2];
    for(i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for(j = 0; j < n2; j++)
        merged[n1 + j] = arr2[j];
    printf("Merged array:\n");
    for(k = 0; k < n1 + n2; k++)
        printf("%d ", merged[k]);

    return 0;
}