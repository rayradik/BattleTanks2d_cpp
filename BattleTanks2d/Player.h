#pragma once
#include <time.h>
#include "Bullet.h"
#include "Player.h"
#include "Figure.h"
#include <Windows.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Player : public Figure
{
protected:
	bool Alive; //��� �� �����?
	int Score; //����
public:
    
    Player(); //�����������
    
    Player(float x, float y, float sizeX, float sizeY); //����������� � �����������(x, y, sizeX, sizeY)
    
    void MoveUpDown(bool up, bool down, int speed);
    
    bool Pop(Timer^% timer1);

    bool GetAlive(); //�������� Alive

    int GetScore(); //�������� Score

    void SetAlive(bool alive); //������� �������� Alive

    void SetScore(int score); //������� �������� Score
    
};

