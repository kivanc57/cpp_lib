#include <iostream>
#include <map>
#include <string>

void add_contact(std::map<std::string, std::string>& phoneBook)
{
    std::string name;
    std::string phoneNumber;
    std::map<std::string, std::string> newContact;
    std::string do_stop;

    while (true)
    {
        std::cout << "stop? (yes/no): ";
        std::getline(std::cin, do_stop);
        if(do_stop == "yes") break;
        
        std::cout << "name & surname: ";
        std::getline(std::cin, name);

        std::cout << "phone number: ";
        std::getline(std::cin, phoneNumber);

        phoneBook.insert({name, phoneNumber});
        std::cout << "inserted: " << name << " -> " << phoneNumber << std::endl;
    }
}

void remove_contact(std::map<std::string, std::string>& phoneBook)
{
    std::string name;
    
    std::cout << "who do you want to remove? ";
    std::getline(std::cin, name);
    
    phoneBook.erase(name);
    std::cout << "erased: " << name << std::endl;
}

void search_contact(std::map<std::string, std::string>& phoneBook)
{
    std::string name;
    std::string phoneNumber;

    std::cout << "who you are looking for? ";
    std::getline(std::cin, name);

    phoneNumber = phoneBook.at(name);
    std::cout << "name: " << name << " - phone number: " << phoneNumber << std::endl;
}

void print_contacts(std::map<std::string, std::string>& phoneBook)
{
    std::cout << "printing your map..." << std::endl;
    for (auto it = phoneBook.begin(); it != phoneBook.end(); ++it)
        std::cout << it->first << " -> " << it->second << std::endl;
}

int main(int /*argc*/, char** /*argv[]*/)
{
    std::map<std::string, std::string> phoneBook = {{"John", "323214324"}, {"Adele", "32213124325643"}};
    add_contact(phoneBook);
    remove_contact(phoneBook);
    search_contact(phoneBook);
    print_contacts(phoneBook);

    return 0;
}
