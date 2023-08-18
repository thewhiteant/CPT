/*
Todo
2. Build Sparse Table
3. Range Query answer
4. Input - output checking
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int maxSize = 16;
    int arrSize;
    int arr[100];
    scanf("%d", &arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    int st[7][maxSize];

    for (int j = 0; j < maxSize; j++)
    {
        if (j < arrSize)
        {
            st[0][j] = arr[j];
        }
        else
        {
            st[0][j] = 0;
        }
    }

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 0; j + pow(2, i) <= maxSize; j++)
        {
            st[i][j] = st[i - 1][j] + st[i - 1][j + (int)pow(2, i - 1)];
        }
    }

    cout << endl
         << endl;

    for (int i = 0; i <= 7; i++)
    {
        printf("i-> %d row ---> ", i);
        for (int j = 0; j + pow(2, i) <= maxSize; j++)
        {
            printf("%3d", st[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
9
1 5 3 -4 20 5 3 10 6

*/
