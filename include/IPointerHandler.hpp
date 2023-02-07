template<typename PointT,typename KeyT>
class IPointerHandler
{
public:
	virtual void InputClick(PointT location,KeyT code) = 0; //in a mouse => onClick
	virtual void InputPressed(PointT location,KeyT code) = 0;//in a mouse => onButtonDown
	virtual void InputReleased(PointT location,KeyT code) = 0;//in a mouse => onButtonUp
};