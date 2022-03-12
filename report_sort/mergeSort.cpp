#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);

const int N = 1e6;
float a[N], L[N], M[N];

void merge(float arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i = 0, j = 0, k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(float arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    fastio;

    freopen("test.txt", "r", stdin);
    freopen("outputMergeSort.txt", "w", stdout);
    clock_t start, end;
    double time_use;

    for (int t = 1; t <= 10; t++)
    {

        for (int i = 0; i < N; i++)
            cin >> a[i];

        start = clock();

        mergeSort(a, 0, N - 1);

        end = clock();
        time_use = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
        cout << "Test " << t << ": " << time_use << "\n";
    }

    return 0;
}