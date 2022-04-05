/*
** EPITECH PROJECT, 2022
** SCALE
** File description:
** The Scale component set width and height value of scale for updating the image size in graphical library with graphical interface.
*/

#ifndef SCALE
    #define SCALE

    #include "IComponent.hpp"

    namespace arcade {
        class Scale : public IComponent {
            public:
                Scale(double width = 0, double height = 0) : _width(width), _height(height) {}

                double _width;
                double _height;
        };
    }

#endif /* !SCALE */
