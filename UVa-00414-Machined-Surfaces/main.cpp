#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool myfunction (string i,string j) { 
	return ((i.size()==j.size()&& !(i==j=="XXXXXXXXXXXXXXXXXXXXXXXXX"); 
	}
int main(int argc, char **argv)
{
	int n;
	while (cin >> n, n!=0)
	{
		vector<string> v(n);
		for (int i = 0; i < n; i++)	cin >> v[i];
		for (int i = 0; i < n; i++) 
			v[i].replace(v[i].begin(), v[i].end(), "X", "");
		sort(v.begin(), v.end(), myfunction);
		cout << v.size() << endl;
	}
	return 0;
}
