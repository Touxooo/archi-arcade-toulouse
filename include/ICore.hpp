/*
** EPITECH PROJECT, 2022
** dev
** File description:
** ICore
*/

#ifndef ICORE_HPP_
#define ICORE_HPP_

#include "IEvent.hpp"


// Interface of the core class needed by graphical librairies to send events to the core
namespace arcade
{

    class ICore
    {
    public:
        virtual ~ICore() = default;
        
        // Use by the graphical librairies to send events to the core
        virtual void manageEvents(IEvent &event) = 0;

    protected:
    private:
    };
}

#endif /* !ICORE_HPP_ */