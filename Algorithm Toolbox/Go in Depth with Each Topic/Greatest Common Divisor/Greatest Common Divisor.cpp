
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
int main() {
	int Num_1, Num_2; 
	cin >> Num_1 >> Num_2; 
	cout << GCD(Num_1, Num_2) << endl;
}


//////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
typedef   long long int               ll;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

using namespace std;
double GCD(double a, double b)
{
	if (a < b)
		return GCD(b, a);

	if (fabs(b) < 0.001)
		return a;

	else
		return (GCD(b, a - floor(a / b) * b));
}

int main() {
	double Num_1, Num_2; 
	cin >> Num_1 >> Num_2; 
	cout << GCD(Num_1, Num_2) << endl;
}