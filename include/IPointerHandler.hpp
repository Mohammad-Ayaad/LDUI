class IPointerHandler
{
public:
	virtual void Input() = 0; //in a mouse => onClick
	virtual void InputHold() = 0;//in a mouse => onButtonDown
	virtual void InputRelease() = 0;//in a mouse => onButtonUp

};