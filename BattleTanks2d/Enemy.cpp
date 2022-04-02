#include "Enemy.h"

Enemy::Enemy()//�����������
{

}
Enemy::Enemy(float x, float y, float sizeX, float sizeY) : Figure(x, y, sizeX, sizeY) //����������� � �����������(x, y, sizeX, sizeY)
{
    FigureImage = Image::FromFile("C:\\Enemy.png");
}

Enemy::Enemy(bool tag, float x, float y, float sizeX, float sizeY) : Figure(tag, x, y, sizeX, sizeY) //����������� � �����������(tag, x, y, sizeX, sizeY)
{
    FigureImage = Image::FromFile("C:\\Enemy.png");
}

//Enemy::~Enemy() //����������
//{
//    ;
//}

void Enemy::SpawnYRandom()
{
    Random^ rnd = gcnew Random();
    Y = rnd->Next(50, 330);
}
void Enemy::Move(int speedUp)
{
    MoveSpeedUp = speedUp;
    X -= 5 + MoveSpeedUp;
}