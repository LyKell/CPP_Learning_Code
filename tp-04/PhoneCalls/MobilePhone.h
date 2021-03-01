#pragma once

#include "Phone.h"

class MobilePhone: public Phone {
    public:
        MobilePhone(const Person& owner)
            : Phone::Phone(owner)
        {}

        ~MobilePhone() {}

        void ring() const {
            std::cout << "This is the voicemail of " << _owner.get_name() << ". Please leave a message." << std::endl;
        }
};