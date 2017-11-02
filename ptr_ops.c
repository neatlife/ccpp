#include <stdio.h>

int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;
    ptr1 = urn;
    ptr2 = &urn[2];
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));

    ptr1 ++;
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    ptr2 --;
    printf("\nvalues after ptr2--:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

    -- ptr1;
    ++ ptr2;

    printf("\nPointer reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    printf("\nsubstring on pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);

    printf("\nsubstring an int from another:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);
    return 0;
}
