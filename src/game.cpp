#include "game.hpp"

Game::Game() {
	LOG(INFO) << "Initialize Game";
	this->initGLFW();
};

Game::~Game() {
	if (glfwInitialized) {
		glfwTerminate();
		LOG(DEBUG) << "Terminated GLFW";
	}
};

int Game::run() {
	return 0;
};

void Game::initGLFW() {
	LOG(DEBUG) << "Using GLFW: " << glfwGetVersionString();

	glfwInitialized = glfwInit();
	if (!glfwInitialized) {
		throw std::runtime_error("Unable to initialize GLFW");
	}

	LOG(DEBUG) << "Initialized GLFW";
};


void Game::glfwErrorCallback(int error, const char* description) {
	std::ostringstream err;
	err << "GLFW Error: (" <<  error << ") " << description;
	throw std::runtime_error(err.str());
};

