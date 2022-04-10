/*
** EPITECH PROJECT, 2022
** SCALE
** File description:
** Scale
*/

#ifndef SCALE
    #define SCALE

    #include "IComponent.hpp"

    namespace arcade {
        /**
         * @brief The Scale component set width and height value of scale for updating the image size in graphical library with graphical interface.
         * 
         * @details Like Vector3D component, scale must use units (0, 1, 2...) for an easier handling with the position
         */
        class Scale : public IComponent {
            public:
                /**
                 * @brief Construct a new Scale object
                 * 
                 * @param width scale's width value for the associated sprite
                 * @param height scale's height value for the associated sprite
                 */
                Scale(double width = 0, double height = 0) : _width(width), _height(height) {}

                /**
                 * @brief scale's width value for the associated sprite
                 */
                double _width;
                /**
                 * @brief scale's height value for the associated sprite
                 */
                double _height;
        };
    }

#endif /* !SCALE */
