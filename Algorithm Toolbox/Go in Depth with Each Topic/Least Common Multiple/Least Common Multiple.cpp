// Least Common Multiple

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
typedef   long long int               ll;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

using namespace std;
int GCD(int a, int b) {
	if (b == 0)
		return a;
	return GCD(b, a%b);
}

ll LCM(ll a, ll b) {
	return (ll(a)*b) / GCD(b, a%b);
}

int main() {
	ll Num1 , Num2; 
	cin >> Num1 >> Num2;
	cout << LCM(Num1,Num2) << endl;
}

// ____________________________________________________________________

// Least Common Mutiple Without Using GCD



#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
typedef   long long int               ll;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

using namespace std;

ll LCM(ll a, ll b) {
	int large = max(a, b);
	int small = min(a, b);
	for (size_t i = large; ; i += large)
		if (i%small == 0)
			return i;
}
int main() {
	ll Num1 , Num2; 
	cin >> Num1 >> Num2;
	cout << LCM(Num1,Num2) << endl;
}
