/*
** EPITECH PROJECT, 2022
** dev
** File description:
** IScene
*/

#ifndef ISCENE_HPP_
#define ISCENE_HPP_

#include <memory>
#include <vector>

#include "IEntity.hpp"

namespace arcade
{
    /**
     * @brief This interface represents a scene from a game, which contains
     * a vector of entities that describe a particular moment from a game.
     *
     * @details A scene can describe a menu, a game scene, a pause menu or any
     * other state of a game that you might want to isolate. You could also
     * handle all your game logic from a single scene, but that is not advised.
     *
     *
     */
    class IScene
    {
    public:
        virtual ~IScene() = default;
        /**
         * @brief Gets the entities from the scene
         *
         * @return std::vector<std::shared_ptr<IEntity>> & :
         * A reference to the vector of entities contained in the scene
         */
        virtual std::vector<std::shared_ptr<IEntity>> &getEntities() = 0;
        /**
         * @brief Gets the Scene Width
         *
         * @return uint32_t : the scene width in length units
         */
        virtual uint32_t getSceneWidth() const = 0;
        /**
         * @brief Gets the Scene Height in length units
         *
         * @return uint32_t : the scene heigth in length units
         *
         */
        virtual uint32_t getSceneHeight() const = 0;

    protected:
    private:
    };
}

#endif /* !ISCENE_HPP_ */
