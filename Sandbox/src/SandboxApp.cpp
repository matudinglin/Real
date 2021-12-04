#include <Real.h>

class ExampleLayer : public Real::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		RL_INFO("ExampleLayer::Update");
	}

	void OnEvent(Real::Event& event) override
	{
		RL_TRACE("{0}", event);
	}

};


class Sandbox : public Real::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};

Real::Application* Real::CreateApplication()
{
	return new Sandbox();
}

