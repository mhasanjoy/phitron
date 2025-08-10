// string
#include<iostream>
#include<string>
using namespace std;

string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();
    return s;
}

string insert_first_last(string s)
{
    s.insert(s.begin(), 'a');
    s.push_back('a');
    return s;
}

// reference
void erase_string_element_using_reference(string &s)
{
    s.erase(s.begin() + 1);
}

// pointer
void erase_string_element_using_pointer(string *s)
{
    (*s).erase((*s).begin() + 1);
}

int main()
{
    string s = "Hello World!";
    for(int i = 0; i < s.size(); i++)
        cout << s[i];
    cout << endl;

    cout << erase_first_last(s) << endl;
    cout << insert_first_last(s) << endl;

    // erase_string_element_using_reference(s);
    erase_string_element_using_pointer(&s);
    cout << s << endl;

    return 0;
}
