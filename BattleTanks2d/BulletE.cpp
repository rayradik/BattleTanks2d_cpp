#include "BulletE.h"
#include "Form1.h"
#include "Player.h"
#include "Figure.h"
BulletE::BulletE() //�����������
{

}
BulletE::BulletE(bool tag, float sizeX, float sizeY) : Bullet(tag, sizeX, sizeY) //����������� � �����������(tag, sizeX, sizeY)
{
	FigureImage = Image::FromFile("C:\\bullet.png");
}
BulletE::BulletE(float x, float y, float sizeX, float sizeY) : Bullet(x, y, sizeX, sizeY)//����������� � �����������(x, y, sizeX, sizeY)
{
	FigureImage = Image::FromFile("C:\\bullet.png");
}
BulletE::BulletE(bool tag, float x, float y, float sizeX, float sizeY) : Bullet(tag, x, y, sizeX, sizeY)//����������� � �����������(tag, x, y, sizeX, sizeY)
{
	FigureImage = Image::FromFile("C:\\bullet.png");
}
//BulletE::~BulletE() //����������
//{
//	;
//}

void BulletE::AddBulletToTank(Enemy^% tank, BulletE^% bullet) //������������ ������ � ����� ������
{
	float x, y;
	x = tank->GetX();
	y = tank->GetY();
	bullet->SetX(x - 15);
	bullet->SetY(y + 16);
}

void BulletE::Move(int speedUp)
{
	MoveSpeedUp = speedUp;
	X -= 6 + MoveSpeedUp;
}