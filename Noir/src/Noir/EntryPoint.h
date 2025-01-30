#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Noir::Application* Noir::CreateApplication();

int main(int argc, char** argv) {
	auto app = Noir::CreateApplication();
	app->Run();
	delete app;
}

#endif