#include "vector2.hpp"
#include "Rectangle2D.hpp"

template<typename numericT>
class StructureComponent : public Rectangle2D<numericT>
{
public:
	StructureComponent(StructureComponent* parent);
private:
	StructureComponent* parent;
};