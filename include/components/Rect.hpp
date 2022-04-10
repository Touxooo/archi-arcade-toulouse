/*
** EPITECH PROJECT, 2022
** RECT
** File description:
** Rect
*/

#ifndef RECT
    #define RECT

    #include "IComponent.hpp"

    namespace arcade {
        /**
         * @brief The Rect component give the position, the width and height of an image part in the image of the Sprite2D component
         * for graphical library with graphical interface. This component is usefull for spritesheet handling/animation.
         * 
         */
        class Rect : public IComponent {
            public:
                /**
                 * @brief Construct a new Rect object
                 * 
                 * @param left rect's left position in the associated sprite
                 * @param top rect's top position in the associated sprite
                 * @param w rect's width in the associated sprite
                 * @param h rect's height in the associated sprite
                 */
                Rect(double left = 0, double top = 0, double w = 0, double h = 0) : _left(left), _top(top), _width(w), _height(h) {}

                /**
                 * @brief rect's left position in the associated sprite
                 */
                double _left;
                /**
                 * @brief rect's top position in the associated sprite
                 */
                double _top;
                /**
                 * @brief rect's width in the associated sprite
                 */
                double _width;
                /**
                 * @brief rect's height in the associated sprite
                 */
                double _height;
        };
    }

#endif /* !RECT */
