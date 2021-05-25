#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    nums.push_back(6); // doubles the memory of the vector

    // Size of the vector (number of elements)
    cout << nums.size() << endl;

    // Capacity of the vector
    cout << nums.capacity() << endl;

    // Print all elements
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    cout << nums[1] << endl;

    vector<int> filledVector(5, 0);
    for (int x : filledVector)
    {
        cout << x << endl;
    }

    return 0;
}
