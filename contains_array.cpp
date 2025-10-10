#include <vector>
#include <string>
#include <iostream>

bool contains_array(const std::vector<std::string>& seq, const std::string& elem){

    for(std::size_t i = 0; i < seq.size(); i++){
        if(seq[i] == elem)
            return true;
    }
    return false;
}

int main(int /*arc*/, char** /*argv[]*/){
    std::vector<std::string> words = {"apple", "banana", "kiwi"};
    std::cout << std::boolalpha;

    std::cout << "Check kiwi: "  << contains_array(words, "kiwi") << std::endl;
    return 0;
}
