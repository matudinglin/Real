#pragma once

#include "Core.h"

namespace Real
{
	class REAL_API Application
	{
	public:
		Application();
		virtual ~Application();
	public:

		void Run();
	};

	Application* CreateApplication();
}