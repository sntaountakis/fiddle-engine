#include "Fiddle.h"

class Sandbox : public Fiddle::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }
};

Fiddle::Application* Fiddle::createApplication()
{
    return new Sandbox();
}