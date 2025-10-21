#include <iostream>
#include <stack>
#include <string>

bool check_stack_balance(std::string myString)
{
    std::stack<char> stackCompare;

    for(std::size_t i = 0; i < myString.size(); i++)
    {
        if(myString[i] == '(')
            stackCompare.push(myString[i]);
        else if(myString[i] == ')')
            stackCompare.pop();
    }
    if(stackCompare.empty())
        return true;
    else
        return false;
}

int main(int /*argc*/, char** /*argv[]*/)
{
    std::string myString = "((()))";
    bool is_balanced = check_stack_balance(myString);

    std::cout << "is my string balanced with paranthesis?" << std::endl;
    std::cout << std::boolalpha;
    std::cout << is_balanced << std::endl;

    return 0;
}
