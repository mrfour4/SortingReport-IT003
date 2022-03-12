#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);

const int N = 1e6;
float a[N];

int partition(float a[], int left, int right)
{
    int pivotIndex = left + (right - left) / 2;
    float pivotValue = a[pivotIndex];

    int i = left, j = right;

    while (i <= j)
    {
        while (a[i] < pivotValue)
            i++;

        while (a[j] > pivotValue)
            j--;

        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    return i;
}

void quickSort(float a[], int left, int right)
{
    if (left < right)
    {
        int pivotIndex = partition(a, left, right);
        quickSort(a, left, pivotIndex - 1);
        quickSort(a, pivotIndex, right);
    }
}

int main()
{
    fastio;

    freopen("test.txt", "r", stdin);
    freopen("outputQuickSort.txt", "w", stdout);
    clock_t start, end;
    double time_use;

    for (int t = 1; t <= 10; t++)
    {
        for (int i = 0; i < N; i++)
            cin >> a[i];

        start = clock();

        quickSort(a, 0, N - 1);

        end = clock();
        time_use = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
        cout << "Test " << t << ": " << time_use << "\n";
    }

    return 0;
}