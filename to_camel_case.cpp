#include <string>
#include <iostream>

std::string to_camel_case(std::string text)
{
    std::string camelCaseText = "";

    for(std::size_t i = 0; i < text.size(); i++)
    {
        if((text[i] == '-' || text[i] == '_') && (i + 1 < text.size()))
        {
            camelCaseText += (char)toupper(text[i+1]);
            i++;
        }
        else 
            camelCaseText += text[i];
    }
    return camelCaseText;
}

int main(int /*argc*/, char** /*argv[]*/)
{
    std::string myString = "-today_is_good";
    std::cout << to_camel_case(myString) << std::endl;
    return 0;
}

