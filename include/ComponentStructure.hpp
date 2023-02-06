#include "vector2.hpp"
#include "Rectangle2D.hpp"

class ComponentStructure : public Rectangle2D
{
public:
	ComponentStructure(ComponentStructure* parent);
private:
	ComponentStructure* parent;
};