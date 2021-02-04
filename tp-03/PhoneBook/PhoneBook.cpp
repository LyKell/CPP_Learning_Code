#include "PhoneBook.h"

bool PhoneBook::empty() {
    return _book.empty();
}

void PhoneBook::insert(const Person& person) {
    _book.insert(person);
}

const Person& PhoneBook::operator[](int pos) const {
    return _book.
}