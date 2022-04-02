#pragma once
#include "Bullet.h"
#include "Player.h"
#include "Figure.h"
using namespace System::Drawing;

ref class Bullet : public Figure
{
private:
    bool Active;
public:
    Bullet(); //�����������
    
    Bullet(bool tag, float sizeX, float sizeY); //����������� � �����������(tag, sizeX, sizeY)
    
    Bullet(float x, float y, float sizeX, float sizeY); //����������� � �����������(x, y, sizeX, sizeY)
    
    Bullet(bool tag, float x, float y, float sizeX, float sizeY); //����������� � �����������(tag, x, y, sizeX, sizeY)

    //~Bullet(); //����������

    void SetActive(bool active); //���������� Active

    bool GetActive(); //�������� Active
    
    void AddBulletToTank(Figure^ tank, Bullet^ bullet); ///������������ ������ � ����� ������
    
    void Move(int speedUp) override;
};

