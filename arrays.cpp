#include <array>
#include <iostream>

template <std::size_t N>
void init_array(std::array<int, N>& arr)
{
    int input_numb = 0;
    for(std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << "give me a number: ";
        std::cin >> input_numb;
        arr[i] = input_numb;
    }
}

template <std::size_t N>
void print_array_details(std::array<int, N>& arr)
{
    int sum = 0;
    for(std::size_t i = 0; i < arr.size(); i++)
        sum += arr[i];

    std::cout << "array size: " << N << std::endl;
    std::cout << "array average: " << sum / N << std::endl;
}

int main(int /*argc*/, char** /*argv[]*/)
{
    constexpr std::size_t size = 10;
    std::array<int, size> arr;

    init_array(arr);
    print_array_details(arr);

    return 0;
}

