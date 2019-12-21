// https://www.hackerrank.com/challenges/median/problem

#include <algorithm>
#include <cstdio>
#include <utility>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef pair<int, int> pii;
#define fi first

int ri()
{
  int x;
  scanf("%d", &x);
  return x;
}

int main()
{
  typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> mytree;
  mytree t;
  int id = 0;
  for (int n = ri(); n--; ) {
    char op;
    int x;
    scanf(" %c%d", &op, &x);
    do {
      if (op == 'a')
        t.insert(pii{x, id++});
      else {
        auto it = t.lower_bound(pii{x, 0});
        if (it == t.end() || it->fi != x || (t.erase(it), t.empty())) {
          puts("Wrong!");
          break;
        }
      }
      double ans = (double(t.find_by_order(t.size()/2)->fi) + t.find_by_order(t.size()-1>>1)->fi) * 0.5;
      if (fmod(ans, 1.0) == 0)
        printf("%d\n", int(ans));
      else
        printf("%.1lf\n", ans);
    } while (0);
  }
}
