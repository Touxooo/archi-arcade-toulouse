/*
** EPITECH PROJECT, 2022
** SPRITE_TEXT
** File description:
** SpriteText
*/

#ifndef SPRITE_TEXT
    #define SPRITE_TEXT

    #include <string>
    #include "IComponent.hpp"

    namespace arcade {
        /**
         * @brief The SpriteText component is used by graphical libraries with a non graphical interface (such as ncurses)
         * to display the character according to the string given by the '_text' properties. 
         * 
         * @details AN ENTITY MUST HAVE 2D AND TEXT VERSION TO ENSURE THAT ALL LIBRARIES CAN DREW IT
         */
        class SpriteText : public IComponent {
            public:
                /**
                 * @brief Construct a new Sprite Text object
                 * 
                 * @param text the character (or string) to display
                 */
                SpriteText(const std::string& text = "") : _text(text) {}

                /**
                 * @brief the character (or string) to display
                 */
                std::string _text;
            
        };
    }

#endif /* !SPRITE_TEXT */
