/*
** EPITECH PROJECT, 2022
** dev
** File description:
** IEntity
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

        virtual std::vector<std::shared_ptr<IComponent>> &getComponents() = 0;
        // TODO: vérifier la faisibilité des tags avec juste cette méthode dans
        // l'interface
        virtual bool hasTag(const std::string &tag) = 0;

    protected:
    private:
    };
}

#endif /* !IENTITY_HPP_ */