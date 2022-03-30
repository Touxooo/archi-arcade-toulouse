/*
** EPITECH PROJECT, 2022
** dev
** File description:
** Vector3D
*/

#ifndef SPRITE_HPP_
#define SPRITE_HPP_

#include <string>
#include "IComponent.hpp"

namespace arcade
{

    class Sprite2D : public arcade::IComponent
    {
    public:
        Sprite2D(const std::string &texture);
        std::string _texture;
    };

}
#endif /* !SPRITE_HPP_ */
