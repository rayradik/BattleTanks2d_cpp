#pragma once
#include "Figure.h"
using namespace System::Drawing;
ref class Wall : public Figure
{
public:
    Wall(); //�����������
    
    Wall(float x, float y, float sizeX, float sizeY);  //����������� � �����������(x, y, sizeX, sizeY)
    
    Wall(bool tag, float x, float y, float sizeX, float sizeY);  //����������� � �����������(tag, x, y, sizeX, sizeY)

    ~Wall(); //����������
};

