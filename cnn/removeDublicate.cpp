#include <iostream>
using namespace std;

string removeDuplicate(char s[])
{
    // base case
    if (s[0] == '\0')
        return "";

    if (s[0] == s[1])
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        removeDuplicate(s);
    }
    else
    {
        removeDuplicate(s+1);
    }
    return s;
}

int main()
{
    char s[100];
    cin >> s;
    string st = removeDuplicate(s);
    cout << st << endl;
}