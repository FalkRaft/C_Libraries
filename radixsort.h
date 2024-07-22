#ifndef RADIXSORT_H
#define RADIXSORT_H



// Radix Sort in C Programming

#include <stdio.h>
//#include <time.h>

// Function to get the largest element from an array
int getMax(int array[], int n){
    int max = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

// Using counting sort to sort the elements in the basis of significant places
void countingSort(int array[], int size, int place){
    int output[size + 1];
    int max = (array[0] / place) % 10;
    for (int i = 1; i < size; i++){
        if (((array[i] / place) % 10) > max)
            max = array[i];
    }
    int count[max + 1];
    for (int i = 0; i < max; ++i)
        count[i] = 0;
    
    // Calculate count of elements
    for (int i = 0; i < size; i++)
        count[(array[i] / place) % 10]++;
    
    // Calculate cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    
    // Place the elements in sorted order
    for (int i = size - 1; i >= 0; i--){
        output[count[(array[i] / place) % 10] - 1] = array[i];
        count[(array[i] / place) % 10]--;
    }
    for (int i = 0; i < size; i++)
        array[i] = output[i];
}

// Main function to implement radix sort
void radixsort(int array[], int size){
    // Get maximum element
    int max = getMax(array, size);
    // Apply counting sort to sort elements based on place value.
    for (int place = 1; max / place > 0; place *= 10)
        countingSort(array, size, place);
}

// Print an array
void printArray(int array[], int size){
    for (int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}



// Example code
/*int main(){
    clock_t t;
    t = clock();
    int array[] = {121, 432, 564, 23, 1, 45, 788, 102, 12, 38, 190, 38, 45, 89, 10, 11, 12, 0, 23, 34, 45, 56, 67, 78, 89, 90, 1, 2341, 435, 2345, 123, 657, 234, 768 , 345, 123, 23, 456, 123, 56, 234, 657, 123, 456, 324, 768, 234, 67, 324, 678, 234, 56, 324, 546, 234, 56, 243, 56, 356, 67, 43, 6, 67, 45, 7, 34, 546, 2345, 6, 356, 432, 564, 42, 234, 65, 213, 123, 546, 3, 345, 2134, 567, 1345, 34567, 123, 567, 234, 56, 23, 5463, 1234, 456, 144, 324, 435, 2346, 123, 45, 2345, 7654, 345, 765, 34, 76, 34, 7654, 654, 234, 543};
    int n = sizeof(array) / sizeof(array[0]);
    radixsort(array, n);
    printArray(array, n);
    t = clock() - t;
    long double time = ((double)t) / CLOCKS_PER_SEC;
    printf("\n%.51Lfs\n", time);
}*/
#endif