/*
** EPITECH PROJECT, 2022
** dev
** File description:
** Sprite2D
*/

#ifndef SPRITE2D_HPP_
    #define SPRITE2D_HPP_

    #include <string>

    #include "IComponent.hpp"

    namespace arcade {
        /**
         * @brief The Sprite2D component is used by graphical libraries with a graphical interface (such as sfml, sdl2...)
         * to draw the sprite according to the file given by the '_file' properties.
         * 
         * @details TO ENSURE A FUNCTIONNAL USE OF ALL FILE, IMAGE MUST BE IN .bmp FORMAT
         * AN ENTITY MUST HAVE 2D AND TEXT VERSION TO ENSURE THAT ALL LIBRARIES CAN DREW IT
         */
        class Sprite2D : public IComponent {
            public:
                /**
                 * @brief Construct a new Sprite 2D object
                 * 
                 * @param file the image file path (in .bmp)
                 */
                Sprite2D(const std::string& file = "") : _file(file) {}

                /**
                 * @brief the image file path (in .bmp)
                 */
                std::string _file;
            
        };
    }

#endif /* !SPRITE2D_HPP_ */
