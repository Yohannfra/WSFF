/*
** EPITECH PROJECT, 2020
** DefaultName
** File description:
** utils
*/

#include <Arduino.h>

void blink_led(byte pin)
{
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
}
