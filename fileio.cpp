#include <iostream>
#include <fstream>
#include <string>
int main(int argc, char const *argv[])
{
    // write
    std::ofstream out("test.txt", std::ios::out);
    if (out.is_open())
    {
        out << "hello world" << std::endl;
        out.close();
    }
    //append
    std::ofstream out2("test.txt", std::ios::app);
    if (out2.is_open())
    {
        out2 << "hello world again" << std::endl;
        out2.close();
    }
    std::ifstream in("test.txt");// read
    std::string line;
    while(std::getline(in, line))
    {
        std::cout << line << std::endl;
    }
    in.close();
    return 0;
}
