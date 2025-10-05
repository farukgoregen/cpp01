#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "error parameters" << std::endl;
        return 1;
    }

    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "error empty" << std::endl;
        return 1;
    }

    std::ifstream infile(av[1]);

    if(!infile.is_open())
    {
        std::cout << "error file" << std::endl;
        return 1;
    }

    std::ofstream outfile((std::string(av[1]) + ".replace").c_str());
    if (!outfile.is_open())
    {
        std::cout << "error creating file" << std::endl;
        return 1;
    }
    std::string line;
    while(getline(infile, line))
    {
        size_t i = 0;

        while((i = line.find(s1, i)) != std::string::npos)
        {
            line.erase(i, s1.length());
            line.insert(i, s2);
            i += s2.length();
        }
        outfile << line;
        if (!infile.eof())
            outfile << '\n';
    }
}