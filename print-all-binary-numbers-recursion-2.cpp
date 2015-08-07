#include <stdio.h>
#include <stdlib.h>

#define size 4

int arr[size] = {1,2,3,4};

int generate_powerset(int *temparr, int level, int start)
{
    int i, j;
    for(i=start; i<size; i++)
    {
        temparr[level] = arr[i];
        printf("{ ");
        for (j=0; j<=level; j++)
            printf("%d ",temparr[j]);
        printf("}\n");
        if( i < size-1)
            generate_powerset(temparr, level+1, i+1);
    }
}

int main()
{
    printf("{ }\n");
    int temparr[size] = {0};
    generate_powerset(temparr, 0, 0);
}

