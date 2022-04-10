/*
** EPITECH PROJECT, 2022
** dev
** File description:
** Vector3D
*/

#ifndef VECTOR3D_HPP_
    #define VECTOR3D_HPP_

    #include "IComponent.hpp"

    namespace arcade {
        /**
         * @brief The Vector3D component give the position of the displayed component (Sprite2D/SpriteText/HUDText).
         * The component contain '_x' and '_y' properties for the x and y position of the sprite in the window/terminal
         * and a property '_z' for the layer position in the window.
         * 
         * @details x and y position in the architecture works as followed:
         * - Each entities will be considered as a one-by-one square.
         * - The entities position will consider that the scene is composed of cell of one-by-one so the positions will be like 0,0 or 0,1 or 1,0...
         * - If an entity need to be displayed between two cells, you can use float value. For example, an entity who need to be displayed between the 0,0 cell and 0,1 could have the position x=0 and y=0.5
         * This system is usefull for an easier handle of graphical library with non graphical interface such as ncurses
         */
        class Vector3D : public IComponent {
            public:
                /**
                 * @brief Construct a new Vector 3 D object
                 * 
                 * @param x the x position of the sprite/hudtext in the scene
                 * @param y the y position of the sprite/hudtext in the scene
                 * @param z the z (layer) position of the sprite/hudtext in the scene
                 * (In other word the bigger the z is, the higher the element will be displayed and on elements with lower z.)
                 */
                Vector3D(double x = 0, double y = 0, double z = 0) : _x(x), _y(y), _z(z) {}

                /**
                 * @brief the x position of the sprite/hudtext in the scene
                 */
                double _x;
                /**
                 * @brief the y position of the sprite/hudtext in the scene
                 */
                double _y;
                /**
                 * @brief the z (layer) position of the sprite/hudtext in the scene
                 * (In other word the bigger the z is, the higher the element will be displayed and on elements with lower z.)
                 */
                double _z;
        };
    }

#endif /* !VECTOR3D_HPP_ */
