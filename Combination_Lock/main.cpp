#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int start, first, second, third, ans;
	while (scanf("%d %d %d %d", &start, &first, &second, &third), start || first || second || third) {
		ans = 1080;
		ans += (start - first) > 0 ? (start-first) * 9 : (start-first + 40) * 9;
		ans += (second - first) > 0 ? (second-first) * 9 : (second-first + 40) * 9;
		ans += (second - third) > 0 ? (second-third) * 9 : (second-third + 40) * 9;
		printf("%i\n", ans);
	}
	return 0;
}
