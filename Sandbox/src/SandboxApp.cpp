#include <Real.h>


class Sandbox : public Real::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Real::Application* Real::CreateApplication()
{
	return new Sandbox();
}

