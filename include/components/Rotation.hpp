/*
** EPITECH PROJECT, 2022
** ARCADE
** File description:
** The Rotation component give the image rotation value in degree for graphical library with graphical interface.
*/

#ifndef ROTATION_HPP_
#define ROTATION_HPP_

#include "IComponent.hpp"

namespace arcade
{
    class Rotation : public IComponent {
        public:
            Rotation(float angle)
            : _angle(angle) {};
            ~Rotation() = default;

            float _angle;

        protected:
        private:
    };
}

#endif /* !ROTATION_HPP_ */
