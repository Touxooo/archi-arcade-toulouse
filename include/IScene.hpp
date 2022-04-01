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

        virtual std::vector<std::unique_ptr<arcade::IEntity>> &getEntities() = 0;
        virtual const uint32_t getSceneWidth() const = 0;
        virtual const uint32_t getSceneHeight() const = 0;

    protected:
    private:
    };
}

#endif /* !ISCENE_HPP_ */
