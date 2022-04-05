/*
** EPITECH PROJECT, 2022
** dev
** File description:
** The interface IEntity is used to create and manipulate all Game entities
*/

#ifndef IENTITY_HPP_
#define IENTITY_HPP_

#include <memory>
#include <string>
#include <vector>

#include "IComponent.hpp"

namespace arcade
{

    class IEntity
    {
    public:
        virtual ~IEntity() = default;

        virtual std::vector<std::unique_ptr<IComponent>> &getComponents() = 0; /* > returning the entity all components as a vector of IComponents */
        virtual bool hasTag(const std::string &tag) = 0; /* > checking if the entity has the given tag */

    protected:
    private:
    };
    /* In order to use the IEntity class, a class (not virtual) must be created an inherit from IEntity.
    This class must possess 2 proprieties to contain the entity's components and the entity's tags. */
}

#endif /* !IENTITY_HPP_ */