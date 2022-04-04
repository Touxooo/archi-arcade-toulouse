/*
** EPITECH PROJECT, 2022
** PacMan
** File description:
** Sound
*/

#ifndef SOUND_HPP_
#define SOUND_HPP_

#include "IComponent.hpp"

namespace arcade
{
    class Sound : public IComponent {
        public:
            typedef enum SoundStatus_e {
                PLAY,
                PAUSE,
                STOP
            } SoundStatus_t;

            Sound(const std::string &path, SoundStatus_t status = SoundStatus_t::PLAY) : _status(status), _filepath(path) {};
            ~Sound() = default;

            // attributes
            SoundStatus_t _status;
            std::string _filepath;

        protected:
        private:
    };
}

#endif /* !SOUND_HPP_ */