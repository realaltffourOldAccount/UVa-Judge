#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin >> n;
	while(n--)
	{
		string str;
		int len;
		cin >> str;
		len = str.length();
		if (str == "1" || str == "4" || str == "78")
			printf("+\n");
		else if (str[len-1] == '5' && str[len-2] == '3')
			printf("-\n");
		else if (str[0] == '9' && str[len-1] == '4')
			printf("*\n");
		else if (str[0] == '1' && str[1] == '9' && str[2] == '0')
			printf("?\n");
	}
	return 0;
}
