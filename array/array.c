#include <stdio.h>

int main() {
    // Define an array of strings
    const char *array[] = {"Hello", "World", "This", "is", "C", "Programming"};
    
    // Calculate the number of elements in the array
    int arraySize = sizeof(array) / sizeof(array[0]);
    
    // Loop through the array and print each string
    for (int i = 0; i < arraySize; i++) {
        printf("%s\n", array[i]);
    }

    return 0;
}
