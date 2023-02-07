#include "StructureComponent.hpp"
#include "Bitmap.hpp"
template<typename numericT>
class VisualComponent : public StructureComponent<numericT>
{
public:
    Bitmap bitmap;
	VisualComponent(VisualComponent* parent);
private:
};