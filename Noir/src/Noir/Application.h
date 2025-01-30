#pragma once

#include "Core.h"

namespace Noir {
	class NOIR_API Application
	{
		public:
			Application();
			virtual ~Application();

			void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}