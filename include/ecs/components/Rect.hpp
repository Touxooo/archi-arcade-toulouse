/*
** EPITECH PROJECT, 2022
** RECT
** File description:
** RECT
*/

#ifndef RECT
    #define RECT

    #include "ecs/components/IComponent.hpp"

    class Rect : public IComponent {
        public:
            Rect(double left = 0, double top = 0, double w = 0, double h = 0) : _left(left), _top(top), _w(w), _h(h) {}

            double _left;
            double _top;
            double _w;
            double _h;
    };

#endif /* !RECT */