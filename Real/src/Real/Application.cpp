#include "Application.h"

#include "Real/Events/ApplicationEvent.h"
#include "Real/Log.h"

namespace Real
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{

		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			RL_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			RL_TRACE(e);
		}

		while (true);
	}
}