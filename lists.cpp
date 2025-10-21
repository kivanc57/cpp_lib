#include <list>
#include <iostream>
#include <string>

template <typename Container>
void print_container(const Container& c)
{
    for(auto it = c.begin(); it != c.end(); ++it)
        std::cout << *it << std::endl;
}

void manage_list()
{   
    int number;
    std::string direction;
    std::string command;
    std::list <int>myList;

    while(true)
    {
        std::cout << "give me a command (print, add OR remove): ";
        std::cin >> command;

        if (command == "print")
        {
            print_container(myList);
            break;
        }
        std::cout << "give me a number (1-9): ";
        std::cin >> number;

        std::cout << "give me a direcion (front OR back): ";
        std::cin >> direction;
       
        if(direction == "front" && command == "add")
            myList.push_front(number);
        else if (direction == "back" && command == "add")
            myList.push_back(number);
        else if (direction == "front" && command == "remove")
            myList.pop_front();
        else if (direction == "back" && command == "remove")
            myList.pop_back();

        std::cout << "------------------------------" << std::endl;
    }
}

int main(int /*argc*/, char** /*argv[]*/)
{
    manage_list();
    return 0;
}

