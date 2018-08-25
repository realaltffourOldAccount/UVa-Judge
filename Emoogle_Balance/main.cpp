#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	int n, cnt=1;
	
	while (scanf("%d", &n), n)
	{
		cin >> n;
		int sum = 0;
		int x;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			
			if (x>0) sum++;
			else sum--;
		}
		printf("Case %d: %d\n", cnt, sum);
		cnt++;
	}
	
	return 0;
}
