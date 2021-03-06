#ifndef TRIMESH_H
#define TRIMESH_H

#include <vector>
#include "vec.h"

using std::vector;

class TriMesh
{
public:
	vector<vec4> positions;
	vector<vec2> texCoords;

	void addPoint(vec4 position, vec2 texCoord = vec2(0,0))
	{
		positions.push_back(position);
		texCoords.push_back(texCoord);
	}

	int size()
	{
		return positions.size();
	}
};

#endif