/*
** EPITECH PROJECT, 2022
** RECT
** File description:
** The Rect component give the position, the width and height of an image part in the image of the Sprite2D component
** for graphical library with graphical interface. This component is usefull for spritesheet handling/animation.
*/

#ifndef RECT
    #define RECT

    #include "IComponent.hpp"

    namespace arcade {
        class Rect : public IComponent {
            public:
                Rect(double left = 0, double top = 0, double w = 0, double h = 0) : _left(left), _top(top), _width(w), _height(h) {}

                double _left;
                double _top;
                double _width;
                double _height;
        };
    }

#endif /* !RECT */
