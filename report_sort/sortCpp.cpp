#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);

const int N = 1e6;
float a[N];

int main()
{
    fastio;

    freopen("test.txt", "r", stdin);
    freopen("outputSortCpp.txt", "w", stdout);
    clock_t start, end;
    double time_use;

    for (int t = 1; t <= 10; t++)
    {
        for (int i = 0; i < N; i++)
            cin >> a[i];

        start = clock();

        sort(a, a + N);

        end = clock();
        time_use = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
        cout << "Test " << t << ": " << time_use << "\n";
    }

    return 0;
}