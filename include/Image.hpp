#include "Bitmap.hpp"

class Image
{
public:
    Bitmap* bitmap;
    Image* fromBitmap();
    Image* fromFile();

};