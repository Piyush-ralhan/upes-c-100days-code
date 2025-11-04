//Q66.Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, i, num, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &num);
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > num) {
            pos = i;
            break;
        }
    }
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    n++; 
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}