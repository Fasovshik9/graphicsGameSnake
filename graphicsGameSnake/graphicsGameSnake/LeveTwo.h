#pragma once

namespace graphicsGameSnake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LeveTwo
	/// </summary>
	public ref class LeveTwo : public System::Windows::Forms::Form
	{
	public:
		LeveTwo(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LeveTwo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonStart;
	protected:

	private: System::Windows::Forms::PictureBox^ RightWall;
	private: System::Windows::Forms::PictureBox^ LeftWall;
	private: System::Windows::Forms::PictureBox^ LowerWall;



	private: System::Windows::Forms::PictureBox^ UpperWall;

	private: System::Windows::Forms::Label^ labelScore;
	private: System::Windows::Forms::Timer^ timerLevelTwo;

	private: System::Windows::Forms::Label^ labelScoreNeed;
	private: System::Windows::Forms::Button^ buttonBackToMenu;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LeveTwo::typeid));
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->RightWall = (gcnew System::Windows::Forms::PictureBox());
			this->LeftWall = (gcnew System::Windows::Forms::PictureBox());
			this->LowerWall = (gcnew System::Windows::Forms::PictureBox());
			this->UpperWall = (gcnew System::Windows::Forms::PictureBox());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->timerLevelTwo = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelScoreNeed = (gcnew System::Windows::Forms::Label());
			this->buttonBackToMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperWall))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(192, 425);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(101, 23);
			this->buttonStart->TabIndex = 23;
			this->buttonStart->Text = L"Start new game";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &LeveTwo::buttonStart_Click);
			// 
			// RightWall
			// 
			this->RightWall->BackColor = System::Drawing::Color::Gray;
			this->RightWall->Location = System::Drawing::Point(320, 60);
			this->RightWall->Name = L"RightWall";
			this->RightWall->Size = System::Drawing::Size(20, 340);
			this->RightWall->TabIndex = 21;
			this->RightWall->TabStop = false;
			// 
			// LeftWall
			// 
			this->LeftWall->BackColor = System::Drawing::Color::Gray;
			this->LeftWall->Location = System::Drawing::Point(0, 60);
			this->LeftWall->Name = L"LeftWall";
			this->LeftWall->Size = System::Drawing::Size(20, 340);
			this->LeftWall->TabIndex = 20;
			this->LeftWall->TabStop = false;
			// 
			// LowerWall
			// 
			this->LowerWall->BackColor = System::Drawing::Color::Gray;
			this->LowerWall->Location = System::Drawing::Point(0, 380);
			this->LowerWall->Name = L"LowerWall";
			this->LowerWall->Size = System::Drawing::Size(340, 20);
			this->LowerWall->TabIndex = 19;
			this->LowerWall->TabStop = false;
			// 
			// UpperWall
			// 
			this->UpperWall->BackColor = System::Drawing::Color::Gray;
			this->UpperWall->Location = System::Drawing::Point(0, 60);
			this->UpperWall->Name = L"UpperWall";
			this->UpperWall->Size = System::Drawing::Size(340, 20);
			this->UpperWall->TabIndex = 18;
			this->UpperWall->TabStop = false;
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore->Location = System::Drawing::Point(12, 9);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(57, 20);
			this->labelScore->TabIndex = 17;
			this->labelScore->Text = L"label1";
			// 
			// timerLevelTwo
			// 
			this->timerLevelTwo->Tick += gcnew System::EventHandler(this, &LeveTwo::LeveTwo_Update);
			// 
			// labelScoreNeed
			// 
			this->labelScoreNeed->AutoSize = true;
			this->labelScoreNeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScoreNeed->Location = System::Drawing::Point(12, 29);
			this->labelScoreNeed->Name = L"labelScoreNeed";
			this->labelScoreNeed->Size = System::Drawing::Size(57, 20);
			this->labelScoreNeed->TabIndex = 24;
			this->labelScoreNeed->Text = L"label1";
			// 
			// buttonBackToMenu
			// 
			this->buttonBackToMenu->Location = System::Drawing::Point(114, 468);
			this->buttonBackToMenu->Name = L"buttonBackToMenu";
			this->buttonBackToMenu->Size = System::Drawing::Size(101, 23);
			this->buttonBackToMenu->TabIndex = 25;
			this->buttonBackToMenu->Text = L"Back to the menu";
			this->buttonBackToMenu->UseVisualStyleBackColor = true;
			this->buttonBackToMenu->Click += gcnew System::EventHandler(this, &LeveTwo::buttonBackToMenu_Click);
			// 
			// LeveTwo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 514);
			this->Controls->Add(this->buttonBackToMenu);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->RightWall);
			this->Controls->Add(this->LeftWall);
			this->Controls->Add(this->LowerWall);
			this->Controls->Add(this->UpperWall);
			this->Controls->Add(this->labelScore);
			this->Controls->Add(this->labelScoreNeed);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"LeveTwo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LeveTwo";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LeveTwo::LeveTwo_FormClosing);
			this->Load += gcnew System::EventHandler(this, &LeveTwo::LeveTwo_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LeveTwo::LeveTwo_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightWall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftWall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerWall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperWall))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//variables
	private: PictureBox^ fruit;
	private: array<PictureBox^>^ aSnake;	//
	private: bool vPlayGame;				//Game is start			
	private: bool vSnakeDie;				//checking whether the snake is dead
	private: bool vFirstGame;				//check is it a first game
	private: int vStep = 20;				//step for one pixel game field	
	private: float vGemingSpead = 200;		//geming spead		
	private: int vGamingScore = 0;			//gaming score
	private: int vVictoryGamingScore = 10;	//gaming score for win
	private: int vEveryEatingSpead = 10;	//When the snake it he move fastly
	private: bool vGameVictory = false;	//gaming score for win


	//methods
	private: void fruitGeneration();		//fruit generation
	private: void feedingSnake();			//snake eat fruit			
	private: void moveSnake();				//moving snake
	private: void bumpIntoSnake();			//snak bump into yourself
	private: void gameOver();				//loose game
	private: void startNewGame();			//start new game
	private: void bumpIntoWall();			//check bump into wall


	private: void LeveTwo_Update(Object^ object, EventArgs^ e);
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LeveTwo_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LeveTwo_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void LeveTwo_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void buttonBackToMenu_Click(System::Object^ sender, System::EventArgs^ e);
};
}
