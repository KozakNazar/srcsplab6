#ifndef _DLLTEST_H_
#define _DLLTEST_H_

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NON_CONFORMING_SWPRINTFS
#define WIN32_LEAN_AND_MEAN             // компоненти з заголовків Windows, що рідко застосовуються

#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

extern "C" __declspec(dllexport) void NumberList();
extern "C" __declspec(dllexport) void LetterList();
#endif







