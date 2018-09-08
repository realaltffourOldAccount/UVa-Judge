#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>
using namespace std;
int main(int argc, char **argv)
{
	int tc, x;
	long long sum = 0;
	char s[20];

	scanf("%d", &tc);
	while (tc--) {
		scanf("%s", s);

		if (strcmp(s, "donate") == 0) {
			scanf("%d", &x);
			sum += x;
		} else {
			printf("%lld\n", sum);
		}
	}

	return 0;
}
