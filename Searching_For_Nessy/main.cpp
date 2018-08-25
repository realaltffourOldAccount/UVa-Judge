#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n, w, h;
	cin >> n;
	while (n--) 
	{
		scanf("%d %d", &w, &h);
		printf("%d\n", (w/3)*(h/3));
	}
	return 0;
}
