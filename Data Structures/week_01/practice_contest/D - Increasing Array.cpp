#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long int> x;
    x.resize(n);

    long long int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        if(i == 0)
            continue;
        if(x[i] < x[i - 1])
        {
            ans = ans + x[i - 1] - x[i];
            x[i] = x[i - 1];
        }
    }
    cout << ans << "\n";

    return 0;
}
