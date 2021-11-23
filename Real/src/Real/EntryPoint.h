#pragma once

#ifdef RL_PLATFORM_WINDOWS

extern Real::Application* Real::CreateApplication();

int main(int args, char** argv)
{
	Real::Log::Init();
	RL_CORE_ERROR("Init");
	int a = 3;
	RL_INFO("Hello var={0}", a);

	auto app = Real::CreateApplication();
	app->Run();
	delete app;
}

#endif // RL_PLATFORM_WINDOWS
