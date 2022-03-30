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

    class ICore
    {
    public:
        virtual ~ICore() = default;
        // TODO: Replace raw pointer with reference / smart pointers
        virtual void manageEvent(arcade::IEvent &event) = 0;

    protected:
    private:
    };
}

#endif /* !ICORE_HPP_ */