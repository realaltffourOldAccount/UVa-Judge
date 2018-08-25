#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int a,b;
		char c;
		scanf("%d %d", &a, &b);
		if (a > b) c = '>';
		else if (a < b) c = '<';
		else if (a == b) c = '=';
		cout << c << endl;
	}
	return 0;
}
