#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> x;
    x.resize(n);

    int num;
    for(int i = 0; i < n - 1; i++)
    {
        cin >> num;
        x[num - 1]++;
    }

    for(int i = 0; i < n; i++)
        if(!x[i])
        {
            cout << i + 1 << "\n";
            break;
        }

    return 0;
}
