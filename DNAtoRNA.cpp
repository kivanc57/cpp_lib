#include <string>
#include <iostream>

std::string DNAtoRNA(std::string dna){
   for(std::size_t i = 0; i < dna.size(); i++){
       if(dna[i] == 'T'){
           dna[i] = 'U';
       }
   }
   return dna;
}

int main(int /*argc*/, char** /*argv[]*/){
    std::string dna = {"TTTAGKHL"};
    std::cout << DNAtoRNA(dna) << std::endl;
    return 0;
}
