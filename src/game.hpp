#pragma once
#include <iostream>
#include <cstdio>
#include <sstream>
#include <GLFW/glfw3.h>
#include "easylogging++.h"

class Game {
	public:
		Game();
		~Game();
		int run();
	private:
		void initGLFW();
		void glfwErrorCallback(int, const char*);
		bool glfwInitialized;
};

