#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	int x, px, y, py;
	cin >> n;
	while (n!=0)
	{
		scanf("%d %d", &px, &py);
	while(n--)
	{
		scanf("%d %d", &x, &y);
		//if (x == 0) break;
		if (x < px && py > 0)
			{  printf("divisia\n"); printf("NO\n");}
		else if (x > px && py > 0)
			{ printf("divisia\n"); printf("NE\n"); }
		else if (x > px && py < 0)
			printf("SE\n");
		else if (x < px && py < 0)
			printf("SO\n");
	}
	scanf("%d", &n);
	}

	return 0;
}
