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

    class IScene
    {
    public:
        virtual ~IScene() = default;

        virtual const std::vector<std::unique_ptr<IEntity>> &getEntities() = 0;
        virtual void pause() = 0;
        virtual void unpause() = 0;

    protected:
    private:
    };
}

#endif /* !ISCENE_HPP_ */
