/*
** EPITECH PROJECT, 2022
** dev
** File description:
** IEvent
*/

#ifndef EVENT_HPP_
#define EVENT_HPP_

namespace arcade
{
    /**
     * @brief This Interface is used to encapsulate all events, sent from any
     * graphical library.
     *
     * @details You can consult every possible event type in the event folder
     *  from this repository.
     */
    class IEvent
    {
    public:
        virtual ~IEvent() = default;

        /**
         * @brief Describes the stated of a button. Works both for mouse and keyboard.
         *
         */
        enum ButtonState {
            None = -1,
            Pressed,
            Released
        };
    };

}
#endif /* !EVENT_HPP_ */
