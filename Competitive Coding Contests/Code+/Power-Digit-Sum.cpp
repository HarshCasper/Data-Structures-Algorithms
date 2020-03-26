// https://www.hackerrank.com/contests/code-plus/challenges/euler016/problem

#include <bits/stdc++.h>
using namespace std;


int main() {
    int sum[10001];
    int a[10001], c;
    for (int i = 0; i < 10001; ++i) {
        a[i] = -1;
        sum[i] = 0;
    }
    a[10000] = 2;
    sum[0] = 2;
    for (int q = 1; q <= 10000; ++q) {
        int j = 10000;
        c = 0;
        for (; j >= 0; --j) {
            if (a[j] == -1) {
                break;
            }
            a[j] *= 2;
            a[j] += c;
            c = a[j] / 10;
            a[j] = a[j] % 10;
            sum[q] += a[j];
        }
        if (c > 0) {
            sum[q] += c;
            a[j] = c;
        }
    }
    int t, n;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        cin >> n;
        cout << sum[n - 1] << "\n";
    }   
    return 0;
}
