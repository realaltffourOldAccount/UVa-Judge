#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	string str;
	int counter = 1;
	while (cin >> str && str != "*")
	{
		if (str == 	"Hajj")
			cout << "Case " << counter << ": Hajj-e-Akbar" << endl;
		else 
			cout << "Case " << counter << ": Hajj-e-Asghar" << endl;
		counter++;
	}
	return 0;
}
