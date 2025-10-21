#include <list>
#include <iostream>

template <typename Continer>
void print_container(const Container& c)
{
    for(auto it = c.begin(); it != c.end(); ++it)
        std::cout << *it << std::endl;
}

template <typename T>
void manage_list(std::list<T>)
