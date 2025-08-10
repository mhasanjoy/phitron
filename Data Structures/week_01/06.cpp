// built in functions
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 4, b = 5, c = 2;
    swap(a, b);
    cout << a << " " << b << endl;

    cout << min(a, b) << endl;
    cout << max(a, b) << endl;
    cout << min({a, b, c}) << endl;

    vector<int> s = {3, 2, 1, 5, 4};
    sort(s.begin(), s.end());
    reverse(s.begin(), s.begin() + 2);
    for(int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    cout << endl;

    return 0;
}
