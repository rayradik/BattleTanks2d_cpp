#include "Block.h"
Block::Block()//�����������
{

}
Block::Block(float x, float y, float sizeX, float sizeY) : Figure(x, y, sizeX, sizeY) //����������� � �����������(x, y, sizeX, sizeY)
{
    FigureImage = Image::FromFile("C:\\block.png");
}

Block::Block(bool tag, float x, float y, float sizeX, float sizeY) : Figure(tag, x, y, sizeX, sizeY) //����������� � �����������(tag, x, y, sizeX, sizeY)
{
    FigureImage = Image::FromFile("C:\\block.png");
}

Block::~Block() //����������
{
    ;
}