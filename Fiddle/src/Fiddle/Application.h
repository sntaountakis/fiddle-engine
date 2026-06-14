#pragma once

#include "Core.h"

namespace Fiddle {
	class FIDDLE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	Application* createApplication();
}
