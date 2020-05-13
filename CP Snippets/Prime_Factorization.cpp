#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

const int MAX = (int)(1e5 + 5);
const ll INF = (ll)(1e10 + 5);

map<ll, ll> prime_factorization(ll n) {
  map<ll, ll> res;
  for (ll i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      res[i] += 1;
      n /= i;
    }
  }
  if (n != 1) res[n] = 1;
  return res;
}

// Driver Code
int main(void) {
  ll n = 1145141919810;

  for (auto &e : prime_factorization(n)) {
    printf("%lld:%lld\n", e.first, e.second);
  }

  return 0;
}
