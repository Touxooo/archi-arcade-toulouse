/*
** EPITECH PROJECT, 2022
** PacMan
** File description:
** The Sound component contain a filepath for the sound in .wav and a SoundStatus enum to set the status of the Sound being either PLAY, PAUSE OR STOP
*/

#ifndef SOUND_HPP_
#define SOUND_HPP_

#include "IComponent.hpp"
#include <string>

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

            SoundStatus_t _status;
            std::string _filepath;

        protected:
        private:
    };
}

#endif /* !SOUND_HPP_ */