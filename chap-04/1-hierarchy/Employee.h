#pragma once

#include "Rank.h"

#include <string>
#include <string_view>

class Employee {
    public:
        Employee(std::string_view name, std::string_view surname, unsigned int salary, Rank rank);

        const std::string& get_name() const;
        const std::string& get_surname() const;

        unsigned int get_salary() const;
        void increase_salary(unsigned int raise);

        Rank get_rank() const;

    private:
        const std::string _name;
        const std::string _surname;
        unsigned int _salary;
        const Rank _rank;
};