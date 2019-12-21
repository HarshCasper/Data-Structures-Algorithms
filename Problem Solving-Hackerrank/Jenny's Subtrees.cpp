// https://www.hackerrank.com/challenges/jenny-subtrees/problem

#include <bits/stdc++.h>

#include <fstream>
#include <sstream>

#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <deque>
#include <string>

#include <algorithm>
#include <numeric>

#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>

#define pb push_back
#define pbk pop_back
#define mp make_pair
#define fs first
#define sc second
#define all(x) (x).begin(), (x).end()
#define foreach(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define len(a) ((int) (a).size())

#ifdef CUTEBMAING
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
#define eprintf(...) 42
#endif

using namespace std;

typedef long long int64;
typedef long double ld;
typedef unsigned long long lint;

const int inf = (1 << 30) - 1;
const int64 linf = (1ll << 62) - 1;
const int N = 1e5 + 100;

int n, r;
vector<int> g[N];
bool used[N];

void dfsMark(int v, int p = -1, int d = 0) {
    if (d > r) {
        return;
    }
    used[v] = true;
    for (int to : g[v]) {
        if (p != to) {
            dfsMark(to, v, d + 1);
        }
    }
}

int way[N], wayLen = 0;
int dist[N];

void findDist(int v, int p = -1, int d = 0) {
    if (!used[v]) {
        return ;
    }
    dist[v] = d;
    for (int to : g[v]) {
        if (to != p) {
            findDist(to, v, d + 1);
        }
    }
}

bool findWay(int v, int x, int p = -1) {
    if (!used[v]) {
        return false;
    }
    way[wayLen++] = v;
    if (v == x) {
        return true;
    }
    for (int to : g[v]) {
        if (p != to && findWay(to, x, v)) {
            return true;
        }
    }
    wayLen--;
    return false;
}

vector<int> findCenters(int v) {
    fill_n(dist, n, -inf);
    findDist(v);
    v = max_element(dist, dist + n) - dist;
    findDist(v);
    int to = max_element(dist, dist + n) - dist;
    wayLen = 0;
    assert(findWay(v, to));
    if (wayLen % 2 == 0) {
        return { way[wayLen / 2 - 1], way[wayLen / 2] };
    }
    return { way[wayLen / 2] };
}

int64 rnd[N];

inline int64 myrand() {
    int64 res = 0;
    for (int i = 0; i < 4; i++) {
        res <<= 16;
        res += rand();
    }
    return res;
}

inline int64 dfsHash(int v, int p = -1) {
    vector<int64> go;
    for (int to : g[v]) {
        if (to != p && used[to]) {
            go.pb(dfsHash(to, v));
        }
    }
    sort(all(go));
    int64 res = 423929593294391LL;
    for (int i = 0; i < len(go); i++) {
        res ^= go[i] * rnd[i];
    }
    return res;
}

int main() {
#ifdef XCODE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    srand(-1);
    for (int i = 0; i < N; i++) {
        rnd[i] = myrand();
    }
    cin >> n >> r;
    assert(1 <= n && n <= 3000);
    assert(0 <= r && r <= 3000);
    for (int i = 0; i < n - 1; i++) {
        int u, v; scanf("%d%d", &u, &v), u--, v--;
        g[u].pb(v), g[v].pb(u);
    }
    vector<int64> res;
    for (int i = 0; i < n; i++) {
        fill_n(used, n, false);
        dfsMark(i);
        auto centers = findCenters(i);
        if (len(centers) == 1) {
            int64 h = dfsHash(centers.back());
            eprintf("v = %d; center = %d; hash = %lld\n", i, centers.back(), h);
            res.pb(h);
        } else {
            int64 h1 = dfsHash(centers[0], centers[1]), h2 = dfsHash(centers[1], centers[0]);
            if (h1 > h2) {
                swap(h1, h2);
            }
            int64 h = (8418348238341LL * h1) ^ (4847574732881394LL * h2);
            res.pb(h);
            eprintf("v = %d; centers = %d, %d; hash = %lld\n", i, centers[0], centers[1], h);
        }
    }
    sort(all(res));
    for (auto i : res) {
        eprintf("%lld ", i);
    }
    eprintf("\n");
    res.resize(unique(all(res)) - res.begin());
    cout << len(res) << endl;
    return 0;
}
