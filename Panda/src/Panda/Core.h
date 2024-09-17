#pragma once

#ifdef PD_PLATEFORM_WINDOWS
	#ifdef PD_BUILD_DLL
		#define PANDA_API __declspec(dllexport)
	#else 
		#define PANDA_API __declspec(dllimport)
	#endif
#else
	#error Panda only support windows!
#endif