/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** MouseEvent.hpp
*/

#pragma once

#include "IEvent.hpp"

namespace arcade {

    class MouseEvent : public IEvent
    {
    public:
        enum Button {
            None = -1,
            Left,
            Middle,
            Right
        };

        MouseEvent(double x, double y, bool pressed = false, const Button &button = None)
            : _btn(button), _x(x), _y(y), _isPressed(pressed){};

        Button _btn;
        double _x;
        double _y;
        bool _isPressed;
    };
}