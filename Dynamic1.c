#include<stdio.h>
#include<stdlib.h>  // for malloc, calloc, realloc & free

int main()
{
    int Arr[5];     // Static memory allocation

    int Size = 0;
    
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&Size);

    ptr = (int *)malloc(Size * sizeof(int));  // Syntax - void* malloc(int size)

    // Using the memory

    free(ptr); //releasing memery

    return 0;
}
