#include "vector2.hpp"

template<typename componentT>
vector2<componentT>::vector2()
{
    this->x = 0;
    this->y = 0;
}
template<typename componentT>
vector2<componentT>::vector2(componentT value)
{
    this->x = value;
    this->y = value;
}
template<typename componentT>
vector2<componentT>::vector2(componentT x,componentT y)
{
    this->x = x;
    this->y = y;
}
template<typename componentT>
vector2<componentT>::vector2(vector2<componentT>& copy)
{
    this->x = copy.x;
    this->y = copy.y;
}
template<typename componentT>
vector2<componentT> vector2<componentT>::add(vector2<componentT>& b)
{
    return vector2(this->x + b.x, this->y + b.y);
}
template<typename componentT>
void vector2<componentT>::add_eq(vector2<componentT>& b)
{
    this->x += b.x;
    this->y += b.y;
}
template<typename componentT>
vector2<componentT> vector2<componentT>::add(vector2<componentT>& a,vector2<componentT>& b)
{
    return vector2(a.x + b.x, a.y + b.y);
}
template<typename componentT>
vector2<componentT> vector2<componentT>::operator+(vector2<componentT>& b)
{
    return vector2(this->x + b.x, this->y + b.y);
}
template<typename componentT>
void vector2<componentT>::operator+=(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::sub(vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::sub_eq(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::sub(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::operator-(vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::operator-=(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::mul(vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::mul_eq(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::mul(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::operator*(vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::operator*=(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::div(vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::div_eq(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::div(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::operator/(vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::operator/=(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::floor_c()
{

}
template<typename componentT>
void vector2<componentT>::floor_c_eq()
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::floor_c(vector2<componentT>& a)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::round_c()
{

}
template<typename componentT>
void vector2<componentT>::round_c_eq()
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::round_c(vector2<componentT>& a)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::ceil_c()
{

}
template<typename componentT>
void vector2<componentT>::ceil_c_eq()
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::ceil_c(vector2<componentT>& a)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::min_c(vector2<componentT>& b)
{

} //returns the min of each component
template<typename componentT>
void vector2<componentT>::min_c_eq(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::min_c(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::min_l(vector2<componentT>& b)
{

} //returns the vector with min length
template<typename componentT>
void vector2<componentT>::min_l_eq(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::min_l(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::max_c(vector2<componentT>& b)
{

} //returns the max of each component
template<typename componentT>
void vector2<componentT>::max_c_eq(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::max_c(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::max_l(vector2<componentT>& b)
{

} //returns the vector with max length
template<typename componentT>
void vector2<componentT>::max_l_eq(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::max_l(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
componentT vector2<componentT>::length(vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::length_c_eq(vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::length_l_eq(vector2<componentT>& b)
{

}
template<typename componentT>
componentT vector2<componentT>::length(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
componentT vector2<componentT>::det()
{

}
template<typename componentT>
componentT vector2<componentT>::det_c_eq()
{

}
template<typename componentT>
componentT vector2<componentT>::det(vector2<componentT>& a)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::normal()
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::normal(vector2<componentT>& a)
{

}
template<typename componentT>
void vector2<componentT>::normalize()
{

}
template<typename componentT>
componentT vector2<componentT>::dot(vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::dot_c_eq(vector2<componentT>& b)
{

}
template<typename componentT>
componentT vector2<componentT>::dot(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::cross(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::cross_eq(vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::cross(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
void vector2<componentT>::operator=(vector2<componentT>& a)
{

}
template<typename componentT>
bool vector2<componentT>::equals(vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::equals(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::any_equals(vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::any_equals(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::equals_l(vector2<componentT>& a)
{

}
template<typename componentT>
bool vector2<componentT>::equals_l(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::add(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::add_eq(componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::add(vector2<componentT>& a,componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::operator+(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::operator+=(componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::sub(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::sub_eq(componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::sub(vector2<componentT>& a,componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::operator-(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::operator-=(componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::mul(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::mul_eq(componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::mul(vector2<componentT>& a,componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::operator*(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::operator*=(componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::div(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::div_eq(componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::div(vector2<componentT>& a,componentT b)
{

}
template<typename componentT>
vector2<componentT> vector2<componentT>::operator/(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::operator/=(componentT b)
{

}
template<typename componentT>
componentT vector2<componentT>::length(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::length_c_eq(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::length_l_eq(componentT b)
{

}
template<typename componentT>
void vector2<componentT>::operator=(componentT& a)
{

}
template<typename componentT>
bool vector2<componentT>::equals(componentT b)
{

}
template<typename componentT>
bool vector2<componentT>::equals(vector2<componentT>& a,componentT b)
{

}
template<typename componentT>
bool vector2<componentT>::any_equals(componentT b)
{

}
template<typename componentT>
bool vector2<componentT>::any_equals(vector2<componentT>& a,componentT b)
{

}
template<typename componentT>
bool vector2<componentT>::isLargerThan_l(vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::operator>(vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::isLargerThan_l(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::isLargerThanOrEqual_l(vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::operator>=(vector2<componentT>& b)
{

}
template<class componentT> 
bool vector2<componentT>::isLargerThanOrEqual_l(vector2<componentT> &a, vector2<componentT> &b)
{

}
template<typename componentT>
bool vector2<componentT>::isSmallerThan_l(vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::operator<(vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::isSmallerThan_l(vector2<componentT>& a,vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::isSmallerThanOrEqual_l(vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::operator<=(vector2<componentT>& b)
{

}
template<typename componentT>
bool vector2<componentT>::isSmallerThanOrEqual_l(vector2<componentT>& a,vector2<componentT>& b)
{

}