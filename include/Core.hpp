/*
** EPITECH PROJECT, 2022
** dev
** File description:
** Core
*/

#ifndef CORE_HPP_
#define CORE_HPP_

#include "ICore.hpp"
#include "LibLoader.hpp"
#include "ecs/systems/IGame.hpp"
#include "ecs/systems/IGraphical.hpp"

class Core : public ICore
{
public:
    Core();
    ~Core();

    void mainLoop();
    // TODO: Replace raw pointer with reference / smart pointers
    void manageEvent(IEvent *event) final;
    void loadGameLibrary(const std::string &libName);
    void loadGraphicLibrary(const std::string &libName);

protected:
private:
    LibLoader _libloader;
    IGame *_loadedGame;
    IGraphical *_loadedGraphical;
};

#endif /* !CORE_HPP_ */
