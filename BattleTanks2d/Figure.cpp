#include "Figure.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

Figure::Figure() //�����������
{

}
Figure::Figure(bool tag, float sizeX, float sizeY) //����������� � �����������(tag, sizeX, sizeY)
{
    Tag = tag;
    SizeX = sizeX;
    SizeY = sizeY;
}
Figure::Figure(float x, float y, float sizeX, float sizeY) //����������� � �����������(x, y, sizeX, sizeY)
{
    X = x;
    Y = y;
    SizeX = sizeX;
    SizeY = sizeY;
}
Figure::Figure(bool tag, float x, float y, float sizeX, float sizeY) //����������� � �����������(tag, x, y, sizeX, sizeY)
{
    Tag = tag;
    X = x;
    Y = y;
    SizeX = sizeX;
    SizeY = sizeY;
}
Figure::~Figure() //����������
{
    ;
}
void Figure::SetX(float x) //���������� X
{
    X = x;
}
void Figure::SetY(float y) //���������� Y
{
    Y = y;
}
void Figure::SetSizeX(float sizeX) //���������� SizeX
{
    SizeX = sizeX;
}
void Figure::SetSizeY(float sizeY) //���������� SizeY
{
    SizeY = sizeY;
}
void Figure::SetMoveSpeedUp(int movespeedUp) //���������� MoveSpeedUp
{
    MoveSpeedUp = movespeedUp;
}
void Figure::SetFigureImage(Image^ figureImage) //���������� FigureImage
{
    FigureImage = figureImage;
}
void Figure::SetTag(bool tag) //���������� Tag
{
    Tag = tag;
}
// ������� ��������� ������ �� �����
float Figure::GetX()
{
    return this->X;
}
float Figure::GetY()
{
    return this->Y;
}
float Figure::GetSizeX()
{
    return this->SizeX;
}
float Figure::GetSizeY()
{
    return this->SizeY;
}
int Figure::GetMoveSpeedUp()
{
    return this->MoveSpeedUp;
}
Image^ Figure::GetFigureImage()
{
    return this->FigureImage;
}
bool Figure::GetTag()
{
    return this->Tag;
}
void Figure::Move(int speedUp)
{
    MoveSpeedUp = speedUp;
    X -= 4 + MoveSpeedUp;
}
void Figure::SpawnX()
{
    X += 865;
}
void Figure::SpawnYRandom()
{
    Random^ rnd = gcnew Random();
    Y = rnd->Next(100, 295);
}
bool Figure::Collide(Figure^ let)
{
    if (X < let->X + let->SizeX && X + SizeX > let->X && Y < let->Y + let->SizeY && SizeY + Y > let->Y)
    {
        return true;
    }
    return false;
}