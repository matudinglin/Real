#pragma once


#ifdef RL_PLATFORM_WINDOWS

extern Real::Application* Real::CreateApplication();

int main(int args, char** argv)
{
	auto app = Real::CreateApplication();
	app->Run();
	delete app;
}

#endif // RL_PLATFORM_WINDOWS
