#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define NOIR_API __declspec(dllexport)
	#else
		#define NOIR_API __declspec(dllimport)
	#endif
#else
	#error Noir only supports Windows
#endif