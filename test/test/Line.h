#include "Coordinate.h"
class Line
{
public:
	Line(int x1,int y1,int x2,int y3);
	~Line();
private:
	Coordinate *m_pCoorA;
	Coordinate *m_pCoorB;
};

