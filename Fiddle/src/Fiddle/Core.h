#pragma once

#ifdef FDL_PLATFORM_WINDOWS
	#ifdef FDL_BUILD_DLL
		#define FIDDLE_API __declspec(dllexport)
	#else
		#define FIDDLE_API __declspec(dllimport)
	#endif
#else
	#error "Platform not currently supported."
#endif