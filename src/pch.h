// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for
// future builds. This also affects IntelliSense performance, including code
// completion and many code browsing features. However, files listed here are
// ALL re-compiled if any one of them is updated between builds. Do not add
// files that you will frequently be updating here (this negates the performance
// advantage).

#ifndef PCH_H
#define PCH_H

#ifdef __linux__
#define CLEAR_SCREEN "clear"
#endif
#ifdef __unix__
#define CLEAR_SCREEN "clear"
#endif
#ifdef _WIN64
#define CLEAR_SCREEN "cls"
#endif
#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#endif

constexpr auto ROW = 15;
constexpr auto COL = 15;

#define NOTSET 0 // 0 for not set
#define BLACK 1  // 黑棋为1
#define WHITE 2  // 白棋为2
#define DRAWN 3  // 平局

#endif // PCH_H
