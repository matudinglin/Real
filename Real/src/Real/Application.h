#pragma once

#include "Core.h"

#include "Real/Window.h"
#include "Real/Events/Event.h"
#include "Real/Events/ApplicationEvent.h"
#include "Real/Layer.h"
#include "Real/LayerStack.h"



namespace Real
{
	class REAL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running;
		LayerStack m_LayerStack;
	};

	Application* CreateApplication();
}