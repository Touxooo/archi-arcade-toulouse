/*
** EPITECH PROJECT, 2022
** ARCADE
** File description:
** Rotation
*/

#ifndef ROTATION_HPP_
#define ROTATION_HPP_

#include "IComponent.hpp"

namespace arcade
{
    /**
     * @brief The Rotation component give the image rotation value in degree for graphical library with graphical interface.
     */
    class Rotation : public IComponent {
        public:
            /**
             * @brief Construct a new Rotation object
             * 
             * @param angle angle rotation value in degree
             */
            Rotation(float angle)
            : _angle(angle) {};
            ~Rotation() = default;

            /**
             * @brief angle rotation value in degree
             */
            float _angle;

        protected:
        private:
    };
}

#endif /* !ROTATION_HPP_ */
