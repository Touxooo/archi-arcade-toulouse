/*
** EPITECH PROJECT, 2022
** PacMan
** File description:
** Sound
*/

#ifndef SOUND_HPP_
#define SOUND_HPP_

#include <string>

#include "IComponent.hpp"

namespace arcade
{
    /**
     * @brief The Sound component contain a filepath for the sound in .wav and a SoundStatus enum to set the status of the Sound being either PLAY, PAUSE OR STOP
     */
    class Sound : public IComponent
    {
    public:
        /**
         * @brief enum used to describe the status of the sound
         *
         * @param PLAY if the sound should be played
         * @param PAUSE if the sound should be paused
         * @param STOP if the sound should be stopped
         */
        typedef enum SoundStatus_e {
            PLAY,
            PAUSE,
            STOP,
        } SoundStatus_t;

        /**
         * @brief Construct a new Sound object
         *
         * @param path the sound's file path (in .wav)
         * @param status the sound's status
         */
        Sound(const std::string &path, SoundStatus_t status = SoundStatus_t::PLAY) : _status(status), _filepath(path){};
        ~Sound() = default;

        /**
         * @brief the sound's file path (in .wav)
         */
        SoundStatus_t _status;
        /**
         * @brief the sound's status
         */
        std::string _filepath;

    protected:
    private:
    };
}

#endif /* !SOUND_HPP_ */