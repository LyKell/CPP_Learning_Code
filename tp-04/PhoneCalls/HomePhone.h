#pragma once

#include "Person.h"
#include "Phone.h"

class HomePhone : public Phone {
    public:
        HomePhone(const Person& owner, const int position)
            : Phone::Phone(owner)
            , _position { position }
        {}

        ~HomePhone() override {}

        void ring() const override {
            if (_owner.get_position() != _position) {
                std::cout << "This is the voicemail of " << _owner.get_name() << ". Please leave a message." << std::endl;
            } else {
                Phone::_owner.answer_phone();
            }
        }

    private:
        int _position = 0;
};