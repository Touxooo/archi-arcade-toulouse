/*
** EPITECH PROJECT, 2022
** SPRITE_TEXT
** File description:
** The HUDText component is used by all graphical libraries to display the string given by the '_text' properties.
** This component is used to display text such as hp point, score...
*/

#ifndef HUD_TEXT
    #define HUD_TEXT

    #include <string>
    #include "IComponent.hpp"

    namespace arcade {
        class HUDText : public IComponent {
            public:
                typedef struct rgb_s {
                    uint16_t r;
                    uint16_t g;
                    uint16_t b;
                } rgb_t;

                HUDText(const std::string& text, std::string font, uint16_t r = 255, uint16_t g = 255, uint16_t b = 255) : _text(text), _font(font)
                {
                    _color.r = r;
                    _color.g = g;
                    _color.b = b;
                }

                std::string _text;
                /* file path for the font*/
                std::string _font;
                rgb_t _color;
            
            /* AN ENTITY CAN EITHER BE OF THE ORDER OF THE HUD OR NOT BE. AN ENTITY WITH A COMPONENT HUD CAN'T HAVE SPRITETEXT AND/OR SPRITE2D COMPONENT(S) */
        };
    }

#endif /* !HUD_TEXT */
