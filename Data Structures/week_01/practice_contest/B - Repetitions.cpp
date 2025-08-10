#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int repetition = 1, longest = 1;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1])
        {
            repetition++;
            if(repetition > longest)
                longest = repetition;
        }
        else
            repetition = 1;
    }
    cout << longest << "\n";

    return 0;
}
