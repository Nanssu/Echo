#include <Echo.h>

class Sandbox:public Echo::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
    {

    }


};


Echo::Application* Echo::CreateApplication()
{
	return new Sandbox();
}