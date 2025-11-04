//Q69.Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n, i, largest, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    pos = 0;
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
            pos = i;
        }
    }
    printf("Largest element = %d (deleted)\n", largest);
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
    int newLargest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > newLargest)
            newLargest = arr[i];
    }

    printf("New largest element = %d\n", newLargest);

    return 0;
}