#include "hzpch.h"
#include "Application.h"

namespace Hazel
{
	Application::Application() 
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {}

	void Application::Run() {
		while (m_Running)
		{
			m_Window->OnUpdate();
		}
	}
}
