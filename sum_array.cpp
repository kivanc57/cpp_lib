#include<vector>
#include<iostream>
using namespace std;

int sum_array(const vector<int> numbers)
{
    if (numbers.size() == 0)
      return 0;

    int sum = 0;
    int highestNum = numbers[0];
    int lowestNum = numbers[0];

    for(std::size_t i = 0; i < numbers.size(); i++){
      if (numbers[i] > highestNum){
          highestNum = numbers[i];
      } else if (numbers[i] < lowestNum){
          lowestNum = numbers[i];
      }
    }
    for(std::size_t i = 0; i < numbers.size(); i++){
        if(numbers[i] != highestNum && numbers[i] != lowestNum){
            sum += numbers[i];
        }
    }
    return sum;
}

int main(int /*argc*/, char** /*argv[]*/) {
    vector<int> nums = {1, 2, 3, 4, 5};
    std::cout << sum_array(nums) << std::endl;
    return 0;
}

