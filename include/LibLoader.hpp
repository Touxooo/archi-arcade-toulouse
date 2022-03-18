/*
** EPITECH PROJECT, 2022
** dev
** File description:
** LibLoader
*/

#ifndef LIBLOADER_HPP_
#define LIBLOADER_HPP_

#include <string>

#include "ecs/systems/IGame.hpp"
#include "ecs/systems/IGraphical.hpp"

class LibLoader
{
public:
    LibLoader();
    ~LibLoader();

    void unLoadGraphicLib();
    void unLoadGameLib();
    IGame *loadGameLibrary(const std::string &gameLib);
    IGraphical *loadGraphicLibrary(const std::string &graphicLib, ICore &core);

protected:
private:
};

#endif /* !LIBLOADER_HPP_ */