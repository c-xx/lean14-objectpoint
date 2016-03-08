#include <iostream>
#include "Line.h"
using namespace std;


Line::Line(int x1,int y1,int x2,int y2)
{
	m_pCoorA = new Coordinate(x1,y1);
	m_pCoorB = new Coordinate(x2,y2);
}


Line::~Line()
{
	delete m_pCoorA;
	m_pCoorA = NULL;
	delete m_pCoorB;
	m_pCoorB = NULL;
}
