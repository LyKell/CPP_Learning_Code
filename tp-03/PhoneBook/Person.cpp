#include <tuple>
#include "Person.h"

Person::Person(const std::string& firstname, const std::string& surname) :
    _firstname { firstname },
    _surname { surname }
{}

Person::Person(const std::string& firstname, const std::string& surname, const PhoneNumber& phone) :
    _firstname { firstname },
    _surname { surname },
    _phone { phone }
{}

std::string Person::get_full_name() const {
    return _firstname + " " + _surname;
}

PhoneNumber Person::get_phone_number() const {
    return _phone;
}

void Person::set_phone_number(const PhoneNumber& phone) {
    _phone = phone;
}

bool Person::operator<(const Person &other) const {
    return std::tie(_surname, _firstname) < std::tie(other._surname, other._firstname);
}