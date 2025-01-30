#include <Noir.h>

class Sandbox : public Noir::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Noir::Application* Noir::CreateApplication() {
	return new Sandbox();
}