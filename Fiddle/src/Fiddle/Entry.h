#pragma once

#ifdef FDL_PLATFORM_WINDOWS

extern Fiddle::Application* Fiddle::createApplication();

int main(int argc, char** argv) {
	Fiddle::Log::init();
	FDL_CORE_INFO("Initializing application");
	Fiddle::Application* app = Fiddle::createApplication();
	app->run();

	delete app;
}

#endif