#pragma once

class MinuteHand {
    public:
        MinuteHand();
        int get_minutes();
        void advance();
    
    private:
        int _minutes = 0;
};