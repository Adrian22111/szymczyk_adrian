#include <iostream>
#include "sequence.h"
#include <cmath>
using namespace std;

Sequence::Sequence(int w, int h, string c)
{
    width w;
    height = h;
    color = c;
}

Sequence::~Sequence()
{

}

Sequence::Sequence(const Sequence & fSequence)
{
    width = new int;
    height = new int;
    color = new string;
    *width = *fSequence.width;
    *height = *fSequence.height;
    *color = *fSequence.color;
}

Sequence::getWidth()
{
    return width;
}
Sequence::setWidth(int w)
{
    width = w;
}
Sequence::getHeight()
{
    return height;
}
Sequence::setHeight(int h)
{
    height = h;
}
Sequence::getColor()
{
    return color;
}
Sequence::setColor(string c)
{
    color = c;
}
Sequence::calcSimpleIntegral()
{

}
Sequence::calcComplexIntegral()
{

}
Sequence::heightOfEquTriangle(int a)
{
    float h = (a*sqrt(3))/2;
    return h;
}
Sequence::sin(double x) {


}
Sequence::cos(double x)
{

}
