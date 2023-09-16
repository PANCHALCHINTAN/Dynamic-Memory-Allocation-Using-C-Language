//Compiled By Chintan Panchal
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *Ptr, *Ptr2;
    int n, i;

    printf("\nmalloc():\n");
    //Number Of Array Elements
    printf("Enter Array Element\n");
    scanf("%d", &n);

    //malloc() dynamic Memory allocation
    Ptr = (int* )malloc(n * sizeof(int)); 

    //Varification Malloc
    if (Ptr != NULL)
    {
        printf("Memory allocation Successfull Using malloc():\n");
        //to gate elements of array
        for (int i = 0; i < n; ++i)
        {
            Ptr[i] = i + 1;
        }
        //To print All Elements of array
        printf("All Elements Of Array.\n");
        for (int i = 0; i < n; ++i)
        {
            printf("%d, ", Ptr[i]);
        }
    }

    // calloc() Memory Allocation
    printf("\n\n\ncalloc() method:-\n");
    Ptr2 = (int* ) calloc(5, sizeof(int));

    //Varification of Memory is allocated or not
    if (Ptr2 != NULL){
        printf("Memory Allocation Successfull Using calloc():-\n");
        // To fatch Elements
        for (int i = 0; i < 5; ++i)
        {
            Ptr2[i] = i + 1;
        }
        //To Print All Elements of array
        printf("All Elements Of Array.\n");
        for (int i = 0; i < 5; ++i)
        {
            printf("%d, ", Ptr2[i]);
        }
    }

    //Free Memory
    printf("\n\nMemory freeing....\n\n");
    free(Ptr);

    //Re-Memory Allocation Using realloc();
    printf("realloc():-\n");
    Ptr = (int* )realloc(Ptr, 3 * sizeof(int));
    if (Ptr != NULL){
        printf("Memory Re-Allocated Successfully,\n");
        //fetch ot get elements
        for (int i = 0; i < 3; ++i)
        {
            Ptr[i] = i + 1;
        }
        //Print Elemnts
        printf("All Elements Of Array.\n");
        for (int i = 0; i < 3; ++i)
        {
            printf("%d, ", Ptr[i]);
        }    
    }
    else{
        printf("Error");
    }
     return 0;
}