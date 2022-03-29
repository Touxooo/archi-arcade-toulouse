/*
** EPITECH PROJECT, 2022
** PacMan
** File description:
** Sound
*/

#ifndef SOUND_HPP_
#define SOUND_HPP_

#include "IComponent.hpp"

class Sound : public IComponent {
    public:
        Sound(const std::string &path) :
            _start(false), _stop(false), _filepath(path) {};
        ~Sound() = default;

        // attributes
        bool _start;
        bool _stop;
        std::string _filepath;

    protected:
    private:
};

#endif /* !SOUND_HPP_ */
