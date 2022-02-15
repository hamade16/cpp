#include <iostream>
#include <fstream>

std::string replace(std::string read, std::string s1, std::string s2)
{
    int         i;
    std::string res;
    std::string tmp;

    std::size_t found = read.find(s1);
    tmp = "";
    while (found != std::string::npos)
    {
        res = "";
        tmp = tmp + read.substr(0, found);
        tmp = tmp + s2;
        res = read.substr(found + s1.size(), read.size() - found - s1.size());
        read = res;
        found = read.find(s1);
    }
    tmp = tmp + read;

    return tmp;
}

int main(int ac, char **av)
{
    if (ac  != 4)
    {
        std::cout << "number of arguments is not valid" << std::endl;
        return (1);
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string read;

    std::ifstream file (filename);

    if ( !file.is_open() )
    {
        std::cout << "DOESNT EXIST" << std::endl;
        return (1);
    }

    std::ofstream file1;

    file1.open(filename + ".replace");
    while (getline(file, read))
    {
        read = replace(read, s1, s2);
    
        file1 << read << std::endl;
    }
    file1.close();
}