//WAP to Printing addresses of all elements in the array in c.

#include <stdio.h>

int main()

{
    int arr[5] = {10, 20, 30, 40, 50};

   
    // Printing addresses of all elements in the array

    printf("Addresses of elements in the array:\n");

    for (int i = 0; i < 5; ++i) 

    {

        printf("Address of arr[%d]: %u\n", i, &arr[i]);

    }

    

    return 0;

}
