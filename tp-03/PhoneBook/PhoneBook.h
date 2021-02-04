#pragma once

#include <set>
#include "Person.h"

class PhoneBook {
    public:
        bool empty();
        void insert(const Person& person);
        const Person& operator[](int pos) const;
        Person& operator[](int pos);

    private:
        std::set<Person> _book;
};