#pragma once

#include <set>
#include "Person.h"

class PhoneBook {
    public:
        bool empty();
        void insert(const Person& person);
        const Person& operator[](int pos) const;
        const Person& operator[](int pos);
        const Person* first_of_family(std::string_view name);

    private:
        std::set<Person> _book;
};