#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin >> n;
	while (n--)
	{
		int num;
		scanf("%d", &num);
		
		printf("%d\n", abs((((((((num*567)/9)+7492)*235)/47)-498)/10)%10));
	}
	return 0;
}
