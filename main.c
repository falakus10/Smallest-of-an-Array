#include <stdio.h>

int* findMin(int array[], int arraySize);

int main() {
    int array[] = {25,8,9,4,15,20,35,40,50,11,20,13};
    int numberArrayElements = sizeof(array) / sizeof(array[0]);
    int *smallestPtr = findMin(array,numberArrayElements);
    printf("Minimum of the array : %d\n", *smallestPtr);
    printf("Pointer adress of the smallest element of the array: %p",smallestPtr);

    return 0;
}

int* findMin(int array[], int arraySize) {
    int smallestNumber = array[0];
    int* ptrSmallestNumber = &array[0];
    for (int i = 1; i < arraySize; ++i) {
        if(array[i]<smallestNumber){
            smallestNumber = array[i];
            ptrSmallestNumber = &array[i];
        }
    }
    return ptrSmallestNumber;
}