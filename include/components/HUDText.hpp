/*
** EPITECH PROJECT, 2022
** SPRITE_TEXT
** File description:
** HUDText
*/

#ifndef HUD_TEXT
    #define HUD_TEXT

    #include <string>
    #include "IComponent.hpp"

    namespace arcade {
        /** 
         * @brief The HUDText component is used by all graphical libraries to display the string given by the '_text' properties.
         * This component is used to display text such as hp point, score...
         * 
         * @details AN ENTITY CAN EITHER BE OF THE ORDER OF THE HUD OR NOT BE. AN ENTITY WITH A COMPONENT HUD CAN'T HAVE SPRITETEXT AND/OR SPRITE2D COMPONENT(S)
         */
        class HUDText : public IComponent {
            public:
                /**
                 * @brief rgb structure for text's color handling
                 * 
                 * @param r for red color proportion
                 * @param g for green color proportion
                 * @param b for blue color proportion
                 */
                typedef struct rgb_s {
                    uint16_t r;
                    uint16_t g;
                    uint16_t b;
                } rgb_t;

                /**
                 * @brief Construct a new HUDText object
                 * 
                 * @details the color is set to white by default
                 * 
                 * @param text text to display
                 * @param font filepath for text's font
                 * @param r text color, red proportion, 255 by default
                 * @param g text color, green proportion, 255 by default
                 * @param b text color, blue proportion, 255 by default
                 */
                HUDText(const std::string& text, std::string font, uint16_t r = 255, uint16_t g = 255, uint16_t b = 255) : _text(text), _font(font)
                {
                    _color.r = r;
                    _color.g = g;
                    _color.b = b;
                }

                /**
                 * @brief text to display
                 */
                std::string _text;
                /**
                 * @brief filepath for text's font
                 */
                std::string _font;
                /**
                 * @brief text's color (as rgb color)
                 */
                rgb_t _color;
        };
    }

#endif /* !HUD_TEXT */
