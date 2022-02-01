#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string identifier;
    cout << "Enter an identifier: ";
    cin >> identifier;
    bool isValid = true;

    //check for invalid characters
    if (!(identifier[0] >= 'a' && identifier[0] <= 'z' || identifier[0] >= 'A' && identifier[0] <= 'Z'))
        isValid = false;

    //check for special char between characters
    int i;
    for (i = 1; identifier[i] >= '\0'; i++){
        if (identifier[i] == ' ')
            isValid = false;
        if (identifier[i] == '-')
            isValid = false;
        if (identifier[i] == '$')
            isValid = false;
        if (identifier[i] == '#')
            isValid = false;
        if (identifier[i] == '@')
            isValid = false;
    }
    if (isValid)
        cout << "Valid identifier" << endl;
    else
        cout << "Invalid identifier" << endl;

    return 0;
}
