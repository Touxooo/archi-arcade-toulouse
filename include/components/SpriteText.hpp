/*
** EPITECH PROJECT, 2022
** SPRITE_TEXT
** File description:
** The SpriteText component is used by graphical libraries with a non graphical interface (such as ncurses)
** to display the character according to the string given by the '_text' properties.
*/

#ifndef SPRITE_TEXT
    #define SPRITE_TEXT

    #include <string>
    #include "IComponent.hpp"

    namespace arcade {
        class SpriteText : public IComponent {
            public:
                SpriteText(const std::string& text = "") : _text(text) {}

                std::string _text;
            
            /* AN ENTITY MUST HAVE 2D AND TEXT VERSION TO ENSURE THAT ALL LIBRARIES CAN DREW IT */
        };
    }

#endif /* !SPRITE_TEXT */
