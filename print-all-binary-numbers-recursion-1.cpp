#include <stdlib.h>
#include <limits.h>
#include <iostream>

using namespace std;

int A[] = {1, 2, 3};
bool arr[] = {false, false, false};
int i;

void printSubset(int low, int high)
{
    if(low > high) {
        for (i =0; i <= high; ++i) {
            cout << arr[i];
        }
        cout << endl;
    } else {
        arr[low] = false;
        printSubset(low+1, high);
        arr[low] = true;
        printSubset(low+1, high);
    }
}

int main()
{
    printSubset(0, 2);
    return 0;
}

