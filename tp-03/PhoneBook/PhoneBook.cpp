#include "PhoneBook.h"

bool PhoneBook::empty() {
    return _book.empty();
}

void PhoneBook::insert(const Person& person) {
    _book.insert(person);
}

const Person& PhoneBook::operator[](int pos) const {
    std::set<Person>::iterator it = _book.begin();
    std::advance(it, pos);
    return *it;
}

const Person* PhoneBook::first_of_family(std::string_view name) {
    
}