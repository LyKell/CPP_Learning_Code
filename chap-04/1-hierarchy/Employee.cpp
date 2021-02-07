#include "Employee.h"

Employee::Employee(std::string_view name, std::string_view surname, unsigned int salary, Rank rank)
    : _name { name }
    , _surname { surname }
    , _salary { salary }
    , _rank { rank }
{}

const std::string& Employee::get_name() const {
    return _name;
}

const std::string& Employee::get_surname() const {
    return _surname;
}

unsigned int Employee::get_salary() const {
    return _salary;
}

void Employee::increase_salary(unsigned int raise) {
    _salary += raise;
}

Rank Employee::get_rank() const {
    return _rank;
};