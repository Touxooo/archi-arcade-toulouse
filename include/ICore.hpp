/*
** EPITECH PROJECT, 2022
** dev
** File description:
** ICore
*/

#ifndef ICORE_HPP_
#define ICORE_HPP_

#include "IEvent.hpp"

namespace arcade
{

    /**
     *  @brief Interface of the core class needed by graphical librairies to send events to the core.
     *
     * @details You are expected to provide an implementation of this interface,
     * in the form of a Core class, used to contain your libraries, both
     * graphical and non-graphical.
     *
     * The core is also responsible for the main game loop,
     * and measuring time between frames, aswell as loading, switching
     * and unloading libraries.
     *
     * This interface exists to allow an evenmential event handling.
     * When an event is received from a graphical library, it is sent to the core,
     * who first checks if the event is an exit event or a library switch,
     * and if not sends the event to the graphical library.
     */
    class ICore
    {
    public:
        virtual ~ICore() = default;

        /** @brief Used by the graphical librairies to send events to the core.
         * This method needs to be passed as a pointer to a method along with a
         * reference to ICore.
         * @param event The event sent to the core
         */
        virtual void manageEvents(IEvent &event) = 0;

    protected:
    private:
    };
}

#endif /* !ICORE_HPP_ */