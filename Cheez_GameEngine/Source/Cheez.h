#pragma once

#ifdef WIN32
#include <Windows.h>

#endif

#ifdef BUILD_DLL
	#define CHEEZ_API _declspec(dllexport)
#else
	#define CHEEZ_API _declspec(dllimport)
#endif

