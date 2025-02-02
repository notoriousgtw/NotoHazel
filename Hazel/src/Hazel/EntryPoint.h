#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** arc)
{
	Hazel::Log::Init();
	HZ_CORE_TRACE("Initialized Logger!");
	HZ_INFO("Hello!");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
