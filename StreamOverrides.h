#ifndef WARRIORARMY_STREAMOVERRIDES
#define WARRIORARMY_STREAMOVERRIDES

#include <iostream>
#include <vector>
#include "GameObject.h"


std::ostream& operator<<(std::ostream& stream, const std::vector<Engine::GameObject>& _objects) {
	stream << "--------------------------------------------------------------" << std::endl;
	for (Engine::GameObject object : _objects) {
		stream << "NAME: " << object.GetName() << "   TAG: " << object.GetTag() << std::endl;
	}
	stream << "--------------------------------------------------------------" << std::endl;

	return stream;
}

#endif // !WARRIORARMY_STREAMOVERRIDES