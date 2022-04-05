/*
** EPITECH PROJECT, 2022
** dev
** File description:
** The Sprite2D component is used by graphical libraries with a graphical interface (such as sfml, sdl2...)
** to draw the sprite according to the file given by the '_file' properties.
*/

#ifndef SPRITE2D_HPP_
    #define SPRITE2D_HPP_

    #include <string>

    #include "IComponent.hpp"

    namespace arcade {
        class Sprite2D : public IComponent {
            public:
                Sprite2D(const std::string& file = "") : _file(file) {}

                std::string _file; /* TO ENSURE A FUNCTIONNAL USE OF ALL FILE, IMAGE MUST BE IN .bmp FORMAT */
            
            /* AN ENTITY MUST HAVE 2D AND TEXT VERSION TO ENSURE THAT ALL LIBRARIES CAN DREW IT */
        };
    }

#endif /* !SPRITE2D_HPP_ */
