#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string name = "Ajran-Hossain", temp;
    for (int i = 0; name[i] >= '\0'; i++)
    {
        if (name[i] == '-')
        {
            cout << temp << " , ";
            temp = "";
        }
        else
        {
            temp += name[i];
        }
    }
    cout << temp << endl;
    return 0;
}
