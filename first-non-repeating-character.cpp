#include <stdlib.h>
#include <limits.h>
#include <iostream>

using namespace std;

#define CHAR_COUNT 256

struct charInfo {
    int count;
    int index;
};

struct charInfo* getCharPosAndCount(const string& str)
{
    struct charInfo* cInfo = (struct charInfo *) malloc (sizeof (struct charInfo) * CHAR_COUNT);

    for (int i = 0; i < str.length(); ++i) {
        cInfo[str[i]].count ++;

        if (cInfo[str[i]].count == 1)
            cInfo[str[i]].index = i;
    }
    return cInfo;
}


int firstNonRepeatingChar(const string& str)
{
    struct charInfo *cInfo = getCharPosAndCount(str);
    int result = INT_MAX, i;

    for (i = 0; i < CHAR_COUNT;  i++) {
        if (cInfo[i].count == 1 && result > cInfo[i].index)
           result = cInfo[i].index;
    }

    free(cInfo);
    return result;
}

int main()
{
    const string str("geeksforgeeks");
    int result = firstNonRepeatingChar(str);

    cout << str[result] << endl;

    return 0;
}

