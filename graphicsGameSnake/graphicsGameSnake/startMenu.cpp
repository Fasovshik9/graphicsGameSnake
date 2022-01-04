#include "startMenu.h"
#include "LevelOne.h"
#include "LeveTwo.h"
#include "LevelThree.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	graphicsGameSnake::startMenu form;
	Application::Run(% form);
}

graphicsGameSnake::startMenu::startMenu(void)
{
	InitializeComponent();
}


System::Void graphicsGameSnake::startMenu::startMenu_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void graphicsGameSnake::startMenu::buttonStartLevelOne_Click(System::Object^ sender, System::EventArgs^ e)
{
	LevelOne^ form = gcnew LevelOne;
	this->Hide();
	form->ShowDialog();
	this->Show();
	return System::Void();
}

System::Void graphicsGameSnake::startMenu::buttonReference_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("\tWelcome to the SNAKE game!\nThe rules are very simple, you need to use the control keys\n\
w - up\ns - dawn\na - left\nd - right\n feed the snake with apples, GOOD LUCK!", "Reference!");
	return System::Void();
}

System::Void graphicsGameSnake::startMenu::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	return System::Void();
}

System::Void graphicsGameSnake::startMenu::buttonStartLevelTwo_Click(System::Object^ sender, System::EventArgs^ e)
{
	LeveTwo^ form = gcnew LeveTwo;
	this->Hide();
	form->ShowDialog();
	this->Show();
	return System::Void();
}

System::Void graphicsGameSnake::startMenu::buttonStartLevelThree_Click(System::Object^ sender, System::EventArgs^ e)
{
	LevelThree^ form = gcnew LevelThree;
	this->Hide();
	form->ShowDialog();
	this->Show();
	return System::Void();
}
