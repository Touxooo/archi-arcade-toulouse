/*
** EPITECH PROJECT, 2022
** dev
** File description:
** Vector3D
*/

#ifndef RECT_HPP_
#define RECT_HPP_

#include "IComponent.hpp"

namespace arcade
{

    class Rect : public arcade::IComponent
    {
    public:
        Rect(double x, double y, double width, double height);
        double _x;
        double _y;
        double _width;
        double _height;
    };

}

#endif /* !RECT_HPP_ */
