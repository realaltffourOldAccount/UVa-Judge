#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Array
{
public:
    string name;
    int base_address;
    int element_size;
    int num_dimensions;
    vector<int> lower_bounds;
    vector<int> upper_bounds;
    vector<int> constants;
};

int UVa394()
{
    int num_arrays, num_references;
    cin >> num_arrays;
    cin >> num_references;
    Array* arrays = new Array[num_arrays];
    for (int i = 0; i < num_arrays; i++)
    {
        cin >> arrays[i].name;
        cin >> arrays[i].base_address;
        cin >> arrays[i].element_size;
        cin >> arrays[i].num_dimensions;
        for (int j = 0; j < arrays[i].num_dimensions; j++)
        {
            int lower_bound;
            int upper_bound;
            cin >> lower_bound;
            cin >> upper_bound;
            arrays[i].lower_bounds.push_back(lower_bound);
            arrays[i].upper_bounds.push_back(upper_bound);
            arrays[i].constants.push_back(0);
        }
        arrays[i].constants.push_back(0);

        arrays[i].constants[arrays[i].num_dimensions] = arrays[i].element_size;
        for (int j = arrays[i].num_dimensions - 1; j > 0; j--)
        {
            arrays[i].constants[j] = arrays[i].constants[j + 1] * (arrays[i].upper_bounds[j] - arrays[i].lower_bounds[j] + 1);
        }
        arrays[i].constants[0] = arrays[i].base_address;
        for (int j = 1; j <= arrays[i].num_dimensions; j++)
        {
            arrays[i].constants[0] -= arrays[i].constants[j] * arrays[i].lower_bounds[j - 1];
        }
    }
    for (int i = 0; i < num_references; i++)
    {
        string array_name;
        cin >> array_name;
        for (int j = 0; j < num_arrays; j++)
        {
            if (arrays[j].name == array_name)
            {
                cout << arrays[j].name;
                cout << "[";
                int result = arrays[j].constants[0];
                for (int k = 0; k < arrays[j].num_dimensions; k++)
                {
                    if (k != 0)
                    {
                        cout << ", ";
                    }
                    int reference_index;
                    cin >> reference_index;
                    cout << reference_index;
                    result += reference_index * arrays[j].constants[k + 1];
                }
                cout << "] = ";
                cout << result << endl;
            }
        }
    }
    delete[] arrays;
    return 0;
}

int main()
{
	UVa394();
	return 0;
}