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

    /// This interface is used to describe a Game managed by arcade::ICore
    class IGame
    {
    public:
        virtual ~IGame() = default;
        
        /// This method is called one time when the game starts.
        /// it inits the game assets properly
        /// It returns a reference to `IScene` describing what the graphical part should display.
        virtual IScene &init() = 0;
        
        /// update` method is called in loop by ICore when the game is running.
        /// it update the scenes in real time during the game
        /// `deltaTime` parameter describes the time elapsed between the last call of `update`, it is used to update the game regardless of the FPS.
        /// It returns a reference to `IScene` describing what the graphical part should display.
        virtual IScene &update(const std::uint64_t &deltaTime) = 0;

        /// this method is called when an event was detected by IGraphical
        /// `event` parameter describes the event, (refer to `IEvent`)
        virtual void manageEvents(IEvent &event) = 0;
        
        
        /// `destroy` is called by ICore when the game needs to be stopped (when switching game, stopping arcade problem)
        /// it allows to correctly reset the Game's elements
        virtual void destroy() = 0;

    protected:
    private:
    };
}

#endif /* !IGAME_HPP_ */
