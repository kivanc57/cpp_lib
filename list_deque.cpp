#include <list>
#include <iostream>
#include <string>
#include <list>
#include <deque>

template <typename Container>
void print_container(const Container& c)
{
    for(auto it = c.begin(); it != c.end(); ++it)
        std::cout << *it << std::endl;
}

template <typename Container>
void manage_container()
{   
    Container myNumbers;
    int number;
    std::string direction;
    std::string command;

    while(true)
    {
        std::cout << "give me a command (print, add OR remove): ";
        std::cin >> command;

        if (command == "print")
        {
            print_container(myNumbers);
            break;
        }
        std::cout << "give me a number (1-9): ";
        std::cin >> number;

        std::cout << "give me a direcion (front OR back): ";
        std::cin >> direction;
       
        if(direction == "front" && command == "add")
            myNumbers.push_front(number);
        else if (direction == "back" && command == "add")
            myNumbers.push_back(number);
        else if (direction == "front" && command == "remove")
            myNumbers.pop_front();
        else if (direction == "back" && command == "remove")
            myNumbers.pop_back();

        std::cout << "------------------------------" << std::endl;
    }
}

int main(int /*argc*/, char** /*argv[]*/)
{
    std::string data_struct;
    std::cout << "do you want a 'list' or 'deque'?: ";
    std::cin >> data_struct;

    if(data_struct == "list")
        manage_container<std::list<int>>();
    else if(data_struct == "deque")
        manage_container<std::deque<int>>();
    else
        std::cout << "Invalid input\n";

    return 0;
}

