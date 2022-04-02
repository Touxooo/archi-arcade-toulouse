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

        MouseEvent(double x, double y, ButtonState state = ButtonState::None, Button button = None)
            : _btn(button), _x(x), _y(y), _state(state) {};

        Button _btn;
        double _x;
        double _y;
        ButtonState _state;
    };
}