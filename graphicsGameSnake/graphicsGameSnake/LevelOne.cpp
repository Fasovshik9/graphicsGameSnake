#include "LevelOne.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void LevelOne(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	graphicsGameSnake::LevelOne form;
	Application::Run(% form);
}


static struct vecPosition
{
	int X, Y;
};

static int correctMoveSnake = 4;
static vecPosition vecPathDirection;
static vecPosition positionFruit;
static vecPosition vecGameField;

graphicsGameSnake::LevelOne::LevelOne(void)
{
	InitializeComponent();
	vecGameField.X = RightWall->Location.X;
	vecGameField.Y = LowerWall->Location.Y;
	vFirstGame = true;
	startNewGame();
}

void graphicsGameSnake::LevelOne::fruitGeneration()
{
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(LeftWall->Location.X+20, vecGameField.X);
	positionFruit.Y = rand->Next(UpperWall->Location.Y+20, vecGameField.Y);

	for (int i = 0; i < vGamingScore; i++)
	{
		if (positionFruit.X == aSnake[i]->Location.X ||
			positionFruit.Y == aSnake[i]->Location.Y)
		{
			fruitGeneration();
		}
	}

	int tempX = positionFruit.X % vStep;
	positionFruit.X -= tempX;
	int tempY = positionFruit.Y % vStep;
	positionFruit.Y -= tempY;

	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	this->Controls->Add(fruit);
}

void graphicsGameSnake::LevelOne::feedingSnake()
{
	if (aSnake[0]->Location.X == positionFruit.X && aSnake[0]->Location.Y == positionFruit.Y)
	{
		timerLevelOne->Interval -= vEveryEatingSpead;
		labelScore->Text = "Score: " + ++vGamingScore;
		if (vGamingScore == vVictoryGamingScore)
		{
			vGameVictory = true;
			return System::Void();
		}
		//add new alement
		aSnake[vGamingScore] = gcnew PictureBox();
		aSnake[vGamingScore]->Location = Point(aSnake[vGamingScore - 1]->Location.X + vStep * vecPathDirection.X, aSnake[vGamingScore - 1]->Location.Y + vStep * vecPathDirection.Y);
		aSnake[vGamingScore]->BackColor = Color::Green;
		aSnake[vGamingScore]->Width = vStep;
		aSnake[vGamingScore]->Height = vStep;
		this->Controls->Add(aSnake[vGamingScore]);
		fruitGeneration();
	}
}

void graphicsGameSnake::LevelOne::moveSnake()
{
	for (int i = vGamingScore; i >= 1; i--)
	{
		aSnake[i]->Location = aSnake[i - 1]->Location;
	}
	aSnake[0]->Location = Point(aSnake[0]->Location.X + vecPathDirection.X * vStep, aSnake[0]->Location.Y + vecPathDirection.Y * vStep);
}

void graphicsGameSnake::LevelOne::bumpIntoSnake()
{
	for (int i = 1; i < vGamingScore; i++)
	{
		if (aSnake[0]->Location == aSnake[i]->Location)
		{
			gameOver();
		}
	}
}

void graphicsGameSnake::LevelOne::gameOver()
{
	vPlayGame = true;
	vSnakeDie = true;
}

void graphicsGameSnake::LevelOne::startNewGame()
{
	if (!vFirstGame)
	{
		this->Controls->Remove(fruit);

		for (int i = 0; i <= vGamingScore; i++)
		{
			this->Controls->Remove(aSnake[i]);
		}
		vGamingScore = 0;
	}
	else
	{
		vFirstGame = false;
	}

	//init snake
	aSnake = gcnew array <PictureBox^, 1>(400);
	aSnake[0] = gcnew PictureBox();
	aSnake[0]->Location = Point(100, 200);
	aSnake[0]->BackColor = Color::DarkGreen;	//collor of head
	aSnake[0]->Width = vStep;
	aSnake[0]->Height = vStep;

	vGamingScore = 0;
	this->Controls->Add(aSnake[0]);

	//init fruit
	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Red;
	fruit->Width = vStep;
	fruit->Height = vStep;
	fruitGeneration();

	//init timer
	timerLevelOne->Interval = vGemingSpead;
	timerLevelOne->Start();

	//starting direction
	vecPathDirection.X = 1;
	vecPathDirection.Y = 0;

	vPlayGame = true;
	vSnakeDie = false;

	labelScore->Text = "Score: 0";

}

void graphicsGameSnake::LevelOne::bumpIntoWall()
{
	if (aSnake[0]->Location.X >= RightWall->Location.X || aSnake[0]->Location.X <= LeftWall->Location.X)
	{
		gameOver();
	}
	if (aSnake[0]->Location.Y <= UpperWall->Location.Y || aSnake[0]->Location.Y >= LowerWall->Location.Y)
	{
		gameOver();
	}
}

void graphicsGameSnake::LevelOne::LevelOne_Update(Object^ object, EventArgs^ e)
{
	if (vGameVictory)
	{
		timerLevelOne->Stop();
		MessageBox::Show("You are VICTORY!", "Attention!");
	}
	else if (!vSnakeDie && vPlayGame)
	{
		moveSnake();
		feedingSnake();
		bumpIntoSnake();
		bumpIntoWall();
	}
	else if (vSnakeDie && vPlayGame)
	{
		timerLevelOne->Stop();
		MessageBox::Show("Game over!", "Attention!");
	}

}

System::Void graphicsGameSnake::LevelOne::LevelOne_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	String^ move = e->KeyCode.ToString();
	if (move == "W")	//UP
	{
		if (correctMoveSnake != 1)
		{
			correctMoveSnake = 2;
			vecPathDirection.X = 0;
			vecPathDirection.Y = -1;
		}
		else
		{
			vecPathDirection.X = 0;
			vecPathDirection.Y = 1;
		}
	}
	else if (move == "S")	//DOWN
	{
		if (correctMoveSnake != 2)
		{
			correctMoveSnake = 1;
			vecPathDirection.X = 0;
			vecPathDirection.Y = 1;
		}
		else
		{
			vecPathDirection.X = 0;
			vecPathDirection.Y = -1;
		}
	}
	else if (move == "A")	//LEFT
	{
		if (correctMoveSnake != 4)
		{
			correctMoveSnake = 3;
			vecPathDirection.X = -1;
			vecPathDirection.Y = 0;
		}
		else
		{
			vecPathDirection.X = 1;
			vecPathDirection.Y = 0;
		}
	}
	else if (move == "D")	//RIGHT
	{
		if (correctMoveSnake != 3)
		{
			correctMoveSnake = 4;
			vecPathDirection.X = 1;
			vecPathDirection.Y = 0;
		}
		else
		{
			vecPathDirection.X = -1;
			vecPathDirection.Y = 0;
		}
	}
	else
	{
		if (correctMoveSnake == 1)
		{
			vecPathDirection.X = 0;
			vecPathDirection.Y = 1;
		}
		if (correctMoveSnake == 2)
		{
			vecPathDirection.X = 0;
			vecPathDirection.Y = -1;
		}
		if (correctMoveSnake == 3)
		{
			vecPathDirection.X = -1;
			vecPathDirection.Y = 0;
		}
		if (correctMoveSnake == 4)
		{
			vecPathDirection.X = 1;
			vecPathDirection.Y = 0;
		}
	}
	return System::Void();
}

System::Void graphicsGameSnake::LevelOne::LevelOne_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	timerLevelOne->Stop();
	return System::Void();
}


System::Void graphicsGameSnake::LevelOne::LevelOne_Load(System::Object^ sender, System::EventArgs^ e)
{
	labelScoreNeed->Text = "Need score: " + vVictoryGamingScore;
	return System::Void();
}

System::Void graphicsGameSnake::LevelOne::buttonStart_Click(System::Object^ sender, System::EventArgs^ e)
{
	vGameVictory = false;
	timerLevelOne->Start();
	vPlayGame = true;
	startNewGame();
	return System::Void();
}
