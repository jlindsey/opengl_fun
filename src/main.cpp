#define GLFW_INCLUDE_GLCOREARB
#include "easylogging++.h"
#include "game.hpp"

INITIALIZE_EASYLOGGINGPP

int main(int argc, char* argv[]) {
	START_EASYLOGGINGPP(argc, argv);

	LOG(INFO) << "Enter main()";

	try {
		Game game;
		return game.run();
	} catch(const std::exception& ex) {
		LOG(ERROR) << ex.what();
		return EXIT_FAILURE;
	}
}

