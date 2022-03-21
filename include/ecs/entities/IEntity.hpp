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

#include "ecs/components/IComponent.hpp"

class IEntity
{
public:
    virtual ~IEntity() = default;

    virtual std::vector<std::unique_ptr<IComponent>> &getComponents() = 0;
    // TODO: vérifier la faisibilité des tags avec juste cette méthode dans
    // l'interface
    virtual bool haveTag(const std::string &tag) = 0;

protected:
private:
};

#endif /* !IENTITY_HPP_ */