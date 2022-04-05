/*
** EPITECH PROJECT, 2022
** dev
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include <cstdint>

#include "IEvent.hpp"
#include "IScene.hpp"
namespace arcade
{

    class IGame
    {
    public:
        virtual ~IGame() = default;

        virtual IScene &init() = 0;
        virtual IScene &update(const std::uint64_t &deltaTime) = 0;
        virtual IScene &pause();
        virtual IScene &resume();
        virtual void manageEvents(IEvent &event) = 0;
        virtual void destroy() = 0;

    protected:
    private:
    };
}

#endif /* !IGAME_HPP_ */
