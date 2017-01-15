#ifndef ARRAY2D_H
#define ARRAY2D_H

//template <typename T>
//class Row;

template <typename T>
class Array;

template<typename T>
class Array2D
{
public:
	Array2D();
	Array2D(int row, int col);
	Array2D(const Array2D & copy);
	~Array2D();
	Array2D & operator=(const Array2D & rhs);
	//Row<T> operator[](int index);
	int getRow();
	void setRow(int rows);
	int getColumn();
	void setColumn(int columns);
	T & Select(int row, int column);

private:
	Array<T> m_array;
	int m_row;
	int m_col;
};

template<typename T>
Array2D<T>::Array2D() : m_row(0), m_col(0)
{
}




#endif ARRAY2D_H

