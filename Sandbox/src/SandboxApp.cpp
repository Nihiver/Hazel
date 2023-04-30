#include <Hazel.h>

namespace Hazel {

}

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
	
	}

	~Sandbox()
	{
	
	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}