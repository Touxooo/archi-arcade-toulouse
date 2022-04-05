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
                HUDText(const std::string& text = "") : _text(text) {}

                std::string _text;
            
            /* AN ENTITY CAN EITHER BE OF THE ORDER OF THE HUD OR NOT BE. AN ENTITY WITH A COMPONENT HUD CAN'T HAVE SPRITETEXT AND/OR SPRITE2D COMPONENT(S) */
        };
    }

#endif /* !HUD_TEXT */
