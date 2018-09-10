#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n, f, a,b,c, sol = 0;
	cin >> n;
	while (n--)
	{
		cin >> f;
		sol=0;
		for (int i = 0; i < f; i++) 
		{
            cin >> a >> b >> c;
            sol += a * c;
		}
		cout << sol << endl;
	}
	return 0;
}
