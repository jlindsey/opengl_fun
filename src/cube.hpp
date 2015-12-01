#pragma once

class Cube {
	public:
		Cube(float height, float width, float depth) :
			_height(height), _width(width), _depth(depth) {};
		~Cube();

		void render();
	private:
		float _height, _width, _depth;
};

