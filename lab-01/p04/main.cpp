#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool isPalindrome(const string &s)
{
    //s += "!!!";

    string b;
    for (auto c : s) //taking all characters
    {
        if (isalpha(c)) //if it is a letter*
        {
            b += tolower(c);
        }
    }
    string t = b;
    reverse(t.begin(), t.end());

    return b == t;
}

int main()
{
    for (string line; getline(cin, line);)
    {
        cout << (isPalindrome(line) ? "palindrome\n" : "not a polindrome\n");
    }
}