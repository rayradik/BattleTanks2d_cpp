#pragma once
#include "Figure.h"
using namespace System;
using namespace System::Drawing;
ref class Enemy : public Figure
{
public:
    Enemy(); //�����������
    
    Enemy(float x, float y, float sizeX, float sizeY); //����������� � �����������(x, y, sizeX, sizeY)
    
    Enemy(bool tag, float x, float y, float sizeX, float sizeY); //����������� � �����������(tag, x, y, sizeX, sizeY)

    //~Enemy(); //����������
    
    void SpawnYRandom() override;
    
    void Move(int speedUp) override;
    
};

