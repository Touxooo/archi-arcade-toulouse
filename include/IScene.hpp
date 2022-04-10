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

    /// this class is used to describe a scene,
    /// a scene is a set of Entities usually created and modified by `IGame` and interpreted by `IGraphical`
    class IScene
    {
    public:
        virtual ~IScene() = default;

        /// it returns a set of entities in the game
        virtual std::vector<std::shared_ptr<IEntity>> &getEntities() = 0;
        
        /// it returns the width of the scene,
        /// 1 unity is equivalent to 1 character in a curse graphical system
        virtual uint32_t getSceneWidth() const = 0;
 
        /// it returns the height of the scene,
        /// 1 unity is equivalent to 1 character in a curse graphical system
        virtual uint32_t getSceneHeight() const = 0;
    protected:
    private:
    };
}

#endif /* !ISCENE_HPP_ */
