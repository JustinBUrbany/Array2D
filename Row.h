#ifndef ROW_H
#define ROW_H

template<typename T>
class Array2D;

template<typename T>
class Row
{
public:
	Row(Array2D & array, int row);
	T & operator [](int column);

};


#endif
