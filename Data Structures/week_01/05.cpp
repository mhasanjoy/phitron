// vector
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    for(int i = 0; i < 20; i++)
    {
        arr.push_back(i + 1);
        cout << "Size: " << arr.size() << ", Capacity: " << arr.capacity()
             << ", Memory Allocated: " << arr.capacity() * sizeof(int) << " bytes\n";
    }

    arr.insert(arr.begin(), 13);
    arr.erase(arr.begin() + 1);
    arr.pop_back();

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    vector<int> s = {1, 2, 3};
    s.resize(5);
    for(int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    cout << endl;

    return 0;
}
