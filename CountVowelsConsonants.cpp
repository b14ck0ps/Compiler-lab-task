#include <iostream>
#include <fstream>
#include <string>
using  namespace std;
int main(int argc, const char **argv)
{
    ifstream in("text.txt"); // read
    string line;
    while (getline(in, line))
    {
        cout << line << endl;
    }
    int vowels = 0;
    int consonant = 0;
    for (int i = 0; line[i] != '\0'; ++i)
    {
        line[i] = tolower(line[i]);

        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u')
        {

            ++vowels;
        }

        else if ((line[i] >= 'a' && line[i] <= 'z'))
        {
            ++consonant;
        }
        else
        {
           continue;
        }
    }
    in.close();
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonant << endl;
    return 0;
}