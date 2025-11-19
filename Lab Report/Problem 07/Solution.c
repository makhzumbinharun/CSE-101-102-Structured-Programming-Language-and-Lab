#include <stdio.h>

int findMax(int arr[], int index, int size) {
    if (index == size - 1)
        return arr[index];
    int maxRest = findMax(arr, index + 1, size);
    return (arr[index] > maxRest) ? arr[index] : maxRest;
}

int findMin(int arr[], int index, int size) {
    if (index == size - 1)
        return arr[index];

    int minRest = findMin(arr, index + 1, size);

    return (arr[index] < minRest) ? arr[index] : minRest;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int maxVal = findMax(arr, 0, size);
    int minVal = findMin(arr, 0, size);

    printf("Max = %d\n", maxVal);
    printf("Min = %d\n", minVal);

    return 0;
}
