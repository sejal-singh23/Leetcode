#include <iostream>
using namespace std;

int main()
{
    int A[4] = {1, 7, 9, 11};
    int B[4] = {2, 4, 5, 6};

    int i = 0;
    int j = 0;
    int k = 0;

    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    int C[8];

    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }
        else
        {
            C[k] = B[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        C[k] = A[i];
        k++;
        i++;
    }
    while (j < n)
    {
        C[k] = B[j];
        k++;
        j++;
    }

    for (int i : C)
    {
        cout << i << " ";
    }
}
