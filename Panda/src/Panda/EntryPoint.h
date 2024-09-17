#pragma once
#include "Application.h"
#include <stdio.h>
#ifdef PD_PLATEFORM_WINDOWS

extern Panda::Application* Panda::CreateApplication();
int main(int argc, char** argv)
{
	printf("fuck");
	auto app = Panda::CreateApplication();
	app->run();
	delete app;
}
#endif