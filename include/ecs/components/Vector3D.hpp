/*
** EPITECH PROJECT, 2022
** dev
** File description:
** Vector3D
*/

#ifndef VECTOR3D_HPP_
#define VECTOR3D_HPP_

#include "ecs/components/IComponent.hpp"

class Vector3D : public IComponent
{
public:
    double _x;
    double _y;
    double _z;
};

#endif /* !VECTOR3D_HPP_ */
