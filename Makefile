all: build CMakeLists.txt
	cd build && \
	cmake -DGLFW_BUILD_EXAMPLES:BOOL=OFF -DGLFW_BUILD_TESTS:BOOL=OFF -DGLFW_BUILD_DOCS:BOOL=OFF .. && \
	make

build:
	mkdir -p build

clean:
	rm -rf build

run: all
	./build/gl

.PHONY: all clean run

