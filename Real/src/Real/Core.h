#pragma once

#ifdef RL_PLATFORM_WINDOWS
	#ifdef RL_BUILD_DLL
		#define REAL_API __declspec(dllexport)
	#else
		#define	REAL_API __declspec(dllimport)	
	#endif // RL_BUILD_DLL
#else
	#error Real only support Windows!
#endif // RL_PLATFORM_WINDOWS


