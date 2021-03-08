#ifndef EPEEBUTTON_HPP
#define EPEEBUTTON_HPP

#include <Arduino.h>

/**
 * @brief A wrapper for a button
 */
class EpeeButton
{
    private:
        /**
         * @brief button's pin
         */
        uint8_t _pin;

    public:
        /**
         * @brief Construct a new Epee Button object
         *
         * @param pin button bin
         */
        EpeeButton(uint8_t pin);

        /**
         * @brief get if button is pressed
         *
         * @return boolean with the state of the button
         */
        bool isPressed() const;
};

#endif /* EPEEBUTTON_HPP */