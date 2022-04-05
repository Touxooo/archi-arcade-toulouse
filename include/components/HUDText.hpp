/*
** EPITECH PROJECT, 2022
** HUD_TEXT
** File description:
** HUD_TEXT
*/

#ifndef HUD_TEXT
    #define HUD_TEXT

    #include <string>
    #include "IComponent.hpp"

    namespace arcade {
        class HUDText {
            public:
                HUDText(const std::string &text = "") : _text(text) {}

                std::string _text;
        };
    }

#endif /* !HUD_TEXT */