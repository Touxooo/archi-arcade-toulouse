/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** api
*/

#ifndef API_H_
#define API_H_

#include "ICore.hpp"
#include "IGame.hpp"
#include "IGraphical.hpp"

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif



// Structure containing the metadata of the library (type, name, description)
typedef struct metadata {
    enum { UNKNOWN = -1,
           GAME,
           GRAPHIC } type;

    const char* name;
    const char* desc;
} metadata_t;


// Following 3 functions must be declared as extern "C" to be used by the dynamic loader


// Entry point of the game library, create an instance of the game and return it on a unique pointer
EXPORT std::unique_ptr<arcade::IGame> createGameLibrary();

// Entry point of the graphical library, create an instance of the graphical and return it on a unique pointer
EXPORT std::unique_ptr<arcade::IGraphical> createGraphicalLibrary(arcade::ICore& core);

// Return the metadata of the library
EXPORT metadata_t getLibraryMetadata();

#ifdef __cplusplus
}  // extern "C"
#endif

#endif /* !API_H_ */
