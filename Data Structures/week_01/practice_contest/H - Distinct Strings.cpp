#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int ans = 3;
    if(s[0] == s[1] && s[1] == s[2])
        ans = 1;
    else if(s[0] != s[1] && s[1] != s[2] && s[2] != s[0])
        ans = 6;

    cout << ans << "\n";

    return 0;
}

/*
Example: aabb
Answer: 4! / (2! * 2!) = 6

ans = factorial(s.size()) /
        (multiplication of the factorials of the counts of each unique element)
*/
