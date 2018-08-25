#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	char s[1000000];
	while (gets(s))
		printf("%s\n", s);
	return 0;
}
