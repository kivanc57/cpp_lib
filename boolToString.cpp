#include <string>
#include <iostream>

std::string boolean_to_string(bool b)
{
    if(b == true)
        return "true";
    return "false";
}

int main(int /*argc*/, char** /*argv[]*/)
{
    bool trueBool = true;
    bool falseBool = false;

    std::cout << boolean_to_string(trueBool) << std::endl;
    std::cout << boolean_to_string(falseBool) << std::endl;
}
