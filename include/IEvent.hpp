/*
** EPITECH PROJECT, 2022
** dev
** File description:
** IEvent
*/

#ifndef EVENT_HPP_
#define EVENT_HPP_

class IEvent
{
public:
    virtual ~IEvent() = default;

    enum ButtonState {
        None = -1,
        Pressed,
        Released
    };
};

#endif /* !EVENT_HPP_ */
