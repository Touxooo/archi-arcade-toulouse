/*
** EPITECH PROJECT, 2022
** dev
** File description:
** The Vector3D component give the position of the displayed component (Sprite2D/SpriteText/HUDText).
** The component contain '_x' and '_y' properties for the x and y position of the sprite in the window/terminal
** and a property '_z' for the layer position in the window.
*/

#ifndef VECTOR3D_HPP_
    #define VECTOR3D_HPP_

    #include "IComponent.hpp"

    namespace arcade {
        class Vector3D : public IComponent {
            public:
                Vector3D(double x = 0, double y = 0, double z = 0) : _x(x), _y(y), _z(z) {}

                double _x;
                double _y;
                /* In other word the bigger the z is, the higher the element will be displayed and on elements with lower z. */
                double _z;

            /* x and y position in the architecture works as followed:
            - Each entities will be considered as a one-by-one square.
            - The entities position will consider that the scene is composed of cell of one-by-one so the positions will be like 0,0 or 0,1 or 1,0...
            - If an entity need to be displayed between two cells, you can use float value. For example, an entity who need to be displayed between the 0,0 cell and 0,1 could have the position x=0 and y=0.5
            This system is usefull for an easier handle of graphical library with non graphical interface such as ncurses
            */
        };
    }

#endif /* !VECTOR3D_HPP_ */
