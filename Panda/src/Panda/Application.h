#pragma once
#include "Core.h"
namespace Panda {

	class PANDA_API Application
	{
	public:
		Application();
		virtual ~Application();
		void run();
	};

	//to be defined in client
	Application* CreateApplication();
}