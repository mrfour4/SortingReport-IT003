#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);

const int N = 1e6;
float a[N];

void heapify(float a[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(float a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main()
{
    fastio;

    freopen("test.txt", "r", stdin);
    freopen("outputHeapSort.txt", "w", stdout);
    clock_t start, end;
    double time_use;

    for (int t = 1; t <= 10; t++)
    {
        for (int i = 0; i < N; i++)
            cin >> a[i];

        start = clock();
        heapSort(a, N);

        end = clock();
        time_use = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
        cout << "Test " << t << ": " << time_use << "\n";
    }

    return 0;
}