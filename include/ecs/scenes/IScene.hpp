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

#include "entities/IEntity.hpp"

class IScene
{
public:
    virtual ~IScene() = default;

    virtual std::vector<std::unique_ptr<IEntity>> &getEntities() = 0;
    virtual void pause() = 0;
    virtual void unpause() = 0;

protected:
private:
};

#endif /* !ISCENE_HPP_ */
