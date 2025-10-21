#include <vector>
#include <iostream>

template <typename Container>
void print_container(const Container& c)
{
    for(auto it = c.rbegin(); it != c.rend(); ++it)
        std::cout << *it << std::endl;
}

void init_vector()
{
    std::vector<int> vect;
    int given_number = 0;

    while(true)
    {
        std::cout << "give me a number (-1 to stop): ";
        std::cin >> given_number;
        if(given_number == -1) break;
        vect.push_back(given_number);
    }
    print_container(vect);
}

int main(int /*argc*/, char** /*argv[]*/)
{
    init_vector();
    return 0;
}

