#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[8] = {1, 2, 3};

    int i, j, k =1;

    for(i=0 ; i<16; i++)
    {
        printf("{ ");
        j = i;
        k = 1;
        while(j != 0)
        {
            if(j & 1)
                printf("%d ", k);
            j = j >> 1;
            k = k + 1;
        }
        printf("}\n");
    }

    return 0;
}
