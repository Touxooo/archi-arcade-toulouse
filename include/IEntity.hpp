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

    /**
     * @brief This interface is used co create a game entity described by a
     * vector of components, and a vector of tags.
     *
     * You are expected to implement a class inheriting from IEntity, and
     * implementing all of its virtual methods.
     */
    class IEntity
    {
    public:
        virtual ~IEntity() = default;

        /** @brief Getter for the components of an entity
         *
         * @details we are using smart pointers to wrap our IComponents to avoid
         * manual memory management
         * @return std::vector<std::unique_ptr<IComponent>> & : a reference to
         * the vector of IComponents
         */
        virtual std::vector<std::unique_ptr<IComponent>> &getComponents() = 0;

        /**
         * @brief Check if the entity has the given tag
         *
         * @details tags are used to identify different types of entities in the
         * game, without having to check their components, saving time.
         *
         * Since we have not defined any common tags, you are to use tags only
         * internally in your game, and not between a game and a graphical
         * library.
         * @param const std::string & : the tag to check
         *
         * @returns true if the tag is found, false otherwise
         *
         */
        virtual bool hasTag(const std::string &tag) = 0;

    protected:
    private:
    };
}

#endif /* !IENTITY_HPP_ */