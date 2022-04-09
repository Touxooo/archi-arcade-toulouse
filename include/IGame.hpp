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
    /**
     * @brief System responsible for the game logic of a game.
     *
     *
     */
    class IGame
    {
    public:
        virtual ~IGame() = default;

        /**
         * @brief Initializes the game, populating the scenes and returns the
         * first scene to be rendered.
         *
         * @return The current scene of the game, to be
         *
         */
        virtual IScene &init() = 0;
        /**
         * @brief Updates the current scene.
         *
         * @param deltaTime time elapsed since the last update, in miliseconds
         * @return the current scene of the game to be updated
         */
        virtual IScene &update(const std::uint64_t &deltaTime) = 0;
        /**
         * @brief Manages the events sent by the graphical library, through
         * the core.
         *
         * @param event the event to be managed
         */
        virtual void manageEvents(IEvent &event) = 0;
        /**
         * @brief This is a method for you to do cleanup when the game is destroyed.
         */
        virtual void destroy() = 0;

    protected:
    private:
    };
}

#endif /* !IGAME_HPP_ */
