#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "10+20-30";
    bool isValid = true;
    for (int i = 0; i < s.length(); i++)
    {
        //break if first char is ops
        if (s[0] == '+' ||s[0] == '-' ||s[0] == '*' || s[0] == '/')
            break;

        //look for digits
        if (isdigit(s[i]) && isValid)
        {
            for (int j = i+1; j < s.length(); j++)
            {
                // check for ops
                if (s[j] == '+' ||s[j] == '-' ||s[j] == '*' || s[j] == '/')
                {
                    for (int k = j+1; k < s.length(); k++){
                        //check if has double ops or last one is ops
                        if (s[k] == '+' ||s[k] == '-' ||s[k] == '*' || s[k] == '/'){
                            isValid = false;
                            break;
                        }else{
                            isValid = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    if (isValid)
        cout << "Valid";
    if (!isValid)
        cout << "Invalid";
    return 0;
}