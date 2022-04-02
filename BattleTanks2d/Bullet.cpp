#include "Bullet.h"
#include "Player.h"
#include "Figure.h"
#include "Form1.h"

Bullet::Bullet() //�����������
{

}
Bullet::Bullet(bool tag, float sizeX, float sizeY) : Figure(tag, sizeX, sizeY) //����������� � �����������(tag, sizeX, sizeY)
{
	FigureImage = Image::FromFile("C:\\bullet.png");
}
Bullet::Bullet(float x, float y, float sizeX, float sizeY) : Figure(x, y, sizeX, sizeY)//����������� � �����������(x, y, sizeX, sizeY)
{
	FigureImage = Image::FromFile("C:\\bullet.png");
}
Bullet::Bullet(bool tag, float x, float y, float sizeX, float sizeY) : Figure(tag, x, y, sizeX, sizeY)//����������� � �����������(tag, x, y, sizeX, sizeY)
{
	FigureImage = Image::FromFile("C:\\bullet.png");
}
//Bullet::~Bullet() //����������
//{
//	;
//}
void Bullet::SetActive(bool active) //���������� Active
{
	Active = active;
}
bool Bullet::GetActive() //�������� Active
{
	return this->Active;
}
void Bullet::AddBulletToTank(Figure^ tank, Bullet^ bullet) //������������ ������ � ����� ������
{
	float x, y;
	x = tank->GetX();
	y = tank->GetY();
	bullet->SetX(x + 65);
	bullet->SetY(y + 21);
}
void Bullet::Move(int speedUp) 
{
	MoveSpeedUp = speedUp;
	X += 8 + MoveSpeedUp;
}