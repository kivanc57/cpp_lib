#include <string>
#include <iostream>

std::string abbrevName(std::string name)
{
    std::string initials = "";
    
    initials += toupper(name[0]);
    initials += ".";
    for(std::size_t i = 1; i < name.size(); i++)
    {
        if(name[i - 1] == ' ')
            initials += toupper(name[i]);
    }
    return initials;
}

int main(int /*argc*/, char** /*argh[v]*/)
{
    std::string name = "Kivanc Gordu";
    std::cout << abbrevName(name) << std::endl;
    return 0;
}

