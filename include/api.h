/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** api
*/

#ifndef API_H_
#define API_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif
#include <memory>

#include "ICore.hpp"
#include "IGame.hpp"
#include "IGraphical.hpp"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct metadata {
    enum { GAME,
           GRAPHIC } type;

    const char* name;
    const char* desc;
} metadata_t;

EXPORT std::unique_ptr<arcade::IGraphical> createGraphicalLibrary(arcade::ICore& core);
EXPORT std::unique_ptr<arcade::IGame> createGameLibrary();

EXPORT metadata_t getLibraryMetadata();

#ifdef __cplusplus
}  // extern "C"
#endif

#endif /* !API_H_ */