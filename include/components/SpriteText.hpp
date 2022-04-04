/*
** EPITECH PROJECT, 2022
** SPRITE_TEXT
** File description:
** SPRITE_TEXT
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
        };
    }

#endif /* !SPRITE_TEXT */
