#include <vector>
#include <iostream>

int square_sum(const std::vector<int>& numbers){
    int squared_sum = 0;

    for(std::size_t i = 0; i < numbers.size(); i++){
        squared_sum += numbers[i] * numbers[i];
    }
    return squared_sum;
}

int main(int /*argc*/, char** /*argv[]*/){
    std::vector<int> numbers = {1, 2, 2};
    std::cout << square_sum(numbers) << std::endl;
    return 0;
}
