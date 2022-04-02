#pragma once
#include <string>
#include <random>
using namespace System::Drawing;
ref class Figure
{
protected:
    float X;
    float Y;
    float SizeX;
    float SizeY;
    int MoveSpeedUp;
    bool Tag;
    Image^ FigureImage;

public:
    Figure(); //�����������

    Figure(bool tag, float sizeX, float sizeY); //����������� � �����������(tag, sizeX, sizeY)

    Figure(float x, float y, float sizeX, float sizeY); //����������� � �����������(x, y, sizeX, sizeY)

    Figure(bool tag, float x, float y, float sizeX, float sizeY); //����������� � �����������(tag, x, y, sizeX, sizeY)

    ~Figure(); //����������

    void SetX(float x); //���������� X

    void SetY(float y); //���������� Y

    void SetSizeX(float sizeX); //���������� SizeX

    void SetSizeY(float sizeY); //���������� SizeY

    void SetMoveSpeedUp(int movespeedUp); //���������� MoveSpeedUp

    void SetFigureImage(Image^ figureImage); //���������� FigureImage

    void SetTag(bool tag); //���������� Tag

    // ������� ��������� ������ �� �����
    float GetX();

    float GetY();

    float GetSizeX();

    float GetSizeY();

    int GetMoveSpeedUp();

    Image^ GetFigureImage();

    bool GetTag();

    virtual void Move(int speedUp);

    virtual void SpawnX();

    virtual void SpawnYRandom();

    bool Collide(Figure^ let);
};

