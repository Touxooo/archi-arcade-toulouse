/*
** EPITECH PROJECT, 2022
** dev
** File description:
** IGraphical
*/

#ifndef IGRAPHICAL_HPP_
#define IGRAPHICAL_HPP_

#include <cstdint>
#include <functional>

#include "IScene.hpp"
namespace arcade
{
    /** @brief System responsible for handling inputs, sound and
     *  rendering for a scene from a IGame.
     *
     *  You are expected to create your own implementation of IGraphical
     *  for instance SFML or NCurses class, inheriting from IGraphical and
     *  implementing all of its methods.
     */
    class IGraphical
    {
    public:
        virtual ~IGraphical() = default;

        /**   This init method is called in order to initialize everything the
         *    graphical library needs to render a scene.
         *
         *    That can be a window, a texture / sprite cache, fonts, etc.
         *
         *    This method is called once at the beginning of the game,
         *    and subsequently if the game has been destroyed and needs to be
         *    restarted.
         *
         *    @param scene this is the scene that contains
         *    all the entities from a game Scene. It is up to the implementation
         *    to find which entities are graphical entities and which are not,
         *    using the entity's components.
         *
         *    @return void
         */
        virtual void init(IScene &scene) = 0;

        /**   The update method is called when the game needs to be rendered.
         *    That doesn't necessarily mean every frame, it could be later.
         *
         *    This is where you should update the position of your sprites,
         *    unload or load textures, update sound, etc.
         *
         *    @param scene this is the scene that contains
         *    all the entities from a game Scene. It is up to the implementation
         *    to find which entities are graphical entities and which are not,
         *    using the entity's components.
         *
         *    @return void
         */
        virtual void update(IScene &scene) = 0;
        /** This method is called to do cleanup before quitting your graphical
         *  library.
         *
         *  Typically you will destroy your window, or other library
         *  specific resources.
         *
         *  @param scene this is the scene that contains
         *  all the entities from a game Scene. It is up to the implementation
         *  to find which entities are graphical entities and which are not,
         *  using the entity's components.
         *
         *  @return void
         */
        virtual void destroy(IScene &scene) = 0;

    protected:
    private:
    };
}

#endif /* !IGRAPHICAL_HPP_ */
