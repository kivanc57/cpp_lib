#include <string>
#include <iostream>
#include <utility>
#include <vector>

std::string solution(int number)
{
    std::vector<std::pair<std::string, int>> roman =
    {
        {"M", 1000},
        {"CM", 900},
        {"D",  500},
        {"CD", 400},
        {"C",  100},
        {"XC",  90},
        {"L",   50},
        {"XL",  40},
        {"X",   10},
        {"IX",   9},
        {"V",    5},
        {"IV",   4},
        {"I",    1}
    };

    std::string result = "";
    int remainder = number;

    for(size_t i = 0; i < roman.size(); i++)
    {
        while(remainder >= roman[i].second)
        {
            result += roman[i].first;
            remainder -= roman[i].second;
        }
    }
return result;
}

int main(int /*argc*/, char** /*argv[]*/)
{
    int numb = 1666;

    std::cout << solution(numb) << std::endl;
    
    return 0;
}

