#include <iostream>
#include <vector>
using namespace std;
bool isJolly(int a[], int n)
{
    // Boolean vector to diffSet set of differences.
    // The vector is initialized as false.
    vector<bool> diffSet(n, false);
 
    // Traverse all array elements
    for (int i=0; i < n-1 ; i++)
    {
        // Find absolute difference between current two
        int d = abs(a[i]-a[i+1]);
 
        // If difference is out of range or repeated,
        // return false.
        if (d == 0 || d > n-1 || diffSet[d] == true)
            return false;
 
        // Set presence of d in set.
        diffSet[d] = true;
    }
 
    return true;
}
int main()
{
	
	
    int a[];
	
    int n = sizeof(a)/ sizeof(a[0]);
    isJolly(a, n)? cout << "Jolly" : cout << "Not jolly";
	return 0;
}