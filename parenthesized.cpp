#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "(10+20)";
    bool isValid = false;
    bool bypass = false;
    for (int i = 0; i < s.length(); i++)
    {
        //break if first char or has only one )
        if (s[i] == ')' && !bypass)
        {
            isValid = false;
            break;
        }
        // find (
        if (s[i] == '(')
        {
            bypass = true;
            for (int j = i+1; j < s.length(); j++)
            {
                // check for close )
                if (s[j] == ')')
                    isValid = true;
                else
                    isValid = false;
            }
        }
    }
    if (isValid)
        cout << "Valid";
    if (!isValid)
        cout << "Invalid";
    return 0;
}