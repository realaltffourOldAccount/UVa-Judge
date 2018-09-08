#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin >> n;
	int counter=1;
	while (n--)
	{
		int a,b,c;
		cin >> a >> b >> c;
		if (a<=20 && b<=20 && c<=20)
			cout << "Case " << counter << ": good" << endl;
		else 
			cout << "Case " << counter << ": bad" << endl;
		counter++;
	}
	return 0;
}
