#pragma once

#include <string>
#include "PhoneNumber.h"

class Person {
    public:
        Person(const std::string &firstname, const std::string &surname);
        Person(const std::string &firstname, const std::string &surname, const PhoneNumber &phone);
        std::string get_full_name() const;
        PhoneNumber get_phone_number() const;
        void set_phone_number(const PhoneNumber& phone);
        bool operator<(const Person& other) const;

    private:
        const std::string _firstname;
        const std::string _surname;
        PhoneNumber _phone;
};