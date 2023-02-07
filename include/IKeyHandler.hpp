template<typename KeyT,typename NumaricIntType>
class IKeyHandler
{
public:
	virtual void InputKey(KeyT code) = 0;
	virtual void InputKeyBuffer(KeyT *buf,NumaricIntType size) = 0;
	virtual void InputKeyLoopBuffer(KeyT* buf,NumaricIntType start,NumaricIntType length,NumaricIntType totalBufferSize);
};