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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ labelDethLevelTwo;
	private:
	private: System::Windows::Forms::Label^ labelDethNameLevelTwo;
	private: System::Windows::Forms::Panel^ panelLoseLevelTwo;
	private: System::Windows::Forms::Button^ buttonLoseLevelTwo;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panelWinLevelTwo;

	private: System::Windows::Forms::Label^ labelWinShow;
	private: System::Windows::Forms::Button^ buttonWinLevelTwo;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;






	public:
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelDethLevelTwo = (gcnew System::Windows::Forms::Label());
			this->labelDethNameLevelTwo = (gcnew System::Windows::Forms::Label());
			this->panelLoseLevelTwo = (gcnew System::Windows::Forms::Panel());
			this->buttonLoseLevelTwo = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelWinLevelTwo = (gcnew System::Windows::Forms::Panel());
			this->labelWinShow = (gcnew System::Windows::Forms::Label());
			this->buttonWinLevelTwo = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperWall))->BeginInit();
			this->panelLoseLevelTwo->SuspendLayout();
			this->panelWinLevelTwo->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::Transparent;
			this->buttonStart->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonStart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonStart->Location = System::Drawing::Point(99, 406);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(141, 27);
			this->buttonStart->TabIndex = 23;
			this->buttonStart->Text = L"Начать игру";
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &LeveTwo::buttonStart_Click);
			// 
			// RightWall
			// 
			this->RightWall->BackColor = System::Drawing::Color::Gray;
			this->RightWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RightWall.BackgroundImage")));
			this->RightWall->Location = System::Drawing::Point(320, 60);
			this->RightWall->Name = L"RightWall";
			this->RightWall->Size = System::Drawing::Size(20, 340);
			this->RightWall->TabIndex = 21;
			this->RightWall->TabStop = false;
			// 
			// LeftWall
			// 
			this->LeftWall->BackColor = System::Drawing::Color::Gray;
			this->LeftWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LeftWall.BackgroundImage")));
			this->LeftWall->Location = System::Drawing::Point(0, 60);
			this->LeftWall->Name = L"LeftWall";
			this->LeftWall->Size = System::Drawing::Size(20, 340);
			this->LeftWall->TabIndex = 20;
			this->LeftWall->TabStop = false;
			// 
			// LowerWall
			// 
			this->LowerWall->BackColor = System::Drawing::Color::Gray;
			this->LowerWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LowerWall.BackgroundImage")));
			this->LowerWall->Location = System::Drawing::Point(0, 380);
			this->LowerWall->Name = L"LowerWall";
			this->LowerWall->Size = System::Drawing::Size(340, 20);
			this->LowerWall->TabIndex = 19;
			this->LowerWall->TabStop = false;
			// 
			// UpperWall
			// 
			this->UpperWall->BackColor = System::Drawing::Color::Gray;
			this->UpperWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UpperWall.BackgroundImage")));
			this->UpperWall->Location = System::Drawing::Point(0, 60);
			this->UpperWall->Name = L"UpperWall";
			this->UpperWall->Size = System::Drawing::Size(340, 20);
			this->UpperWall->TabIndex = 18;
			this->UpperWall->TabStop = false;
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->BackColor = System::Drawing::Color::Transparent;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelScore->Location = System::Drawing::Point(95, 9);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(19, 20);
			this->labelScore->TabIndex = 17;
			this->labelScore->Text = L"0";
			// 
			// timerLevelTwo
			// 
			this->timerLevelTwo->Tick += gcnew System::EventHandler(this, &LeveTwo::LeveTwo_Update);
			// 
			// labelScoreNeed
			// 
			this->labelScoreNeed->AutoSize = true;
			this->labelScoreNeed->BackColor = System::Drawing::Color::Transparent;
			this->labelScoreNeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScoreNeed->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelScoreNeed->Location = System::Drawing::Point(95, 29);
			this->labelScoreNeed->Name = L"labelScoreNeed";
			this->labelScoreNeed->Size = System::Drawing::Size(19, 20);
			this->labelScoreNeed->TabIndex = 24;
			this->labelScoreNeed->Text = L"0";
			// 
			// buttonBackToMenu
			// 
			this->buttonBackToMenu->BackColor = System::Drawing::Color::Transparent;
			this->buttonBackToMenu->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonBackToMenu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonBackToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBackToMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonBackToMenu->Location = System::Drawing::Point(99, 446);
			this->buttonBackToMenu->Name = L"buttonBackToMenu";
			this->buttonBackToMenu->Size = System::Drawing::Size(141, 27);
			this->buttonBackToMenu->TabIndex = 25;
			this->buttonBackToMenu->Text = L"Назад в меню";
			this->buttonBackToMenu->UseVisualStyleBackColor = false;
			this->buttonBackToMenu->Click += gcnew System::EventHandler(this, &LeveTwo::buttonBackToMenu_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 20);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Очки: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 20);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Цель:";
			// 
			// labelDethLevelTwo
			// 
			this->labelDethLevelTwo->AutoSize = true;
			this->labelDethLevelTwo->BackColor = System::Drawing::Color::Transparent;
			this->labelDethLevelTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDethLevelTwo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelDethLevelTwo->Location = System::Drawing::Point(297, 9);
			this->labelDethLevelTwo->Name = L"labelDethLevelTwo";
			this->labelDethLevelTwo->Size = System::Drawing::Size(25, 25);
			this->labelDethLevelTwo->TabIndex = 39;
			this->labelDethLevelTwo->Text = L"0";
			this->labelDethLevelTwo->Visible = false;
			// 
			// labelDethNameLevelTwo
			// 
			this->labelDethNameLevelTwo->AutoSize = true;
			this->labelDethNameLevelTwo->BackColor = System::Drawing::Color::Transparent;
			this->labelDethNameLevelTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDethNameLevelTwo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelDethNameLevelTwo->Location = System::Drawing::Point(190, 9);
			this->labelDethNameLevelTwo->Name = L"labelDethNameLevelTwo";
			this->labelDethNameLevelTwo->Size = System::Drawing::Size(101, 25);
			this->labelDethNameLevelTwo->TabIndex = 38;
			this->labelDethNameLevelTwo->Text = L"Смерти:";
			this->labelDethNameLevelTwo->Visible = false;
			// 
			// panelLoseLevelTwo
			// 
			this->panelLoseLevelTwo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelLoseLevelTwo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLoseLevelTwo.BackgroundImage")));
			this->panelLoseLevelTwo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelLoseLevelTwo->Controls->Add(this->label5);
			this->panelLoseLevelTwo->Controls->Add(this->label4);
			this->panelLoseLevelTwo->Controls->Add(this->buttonLoseLevelTwo);
			this->panelLoseLevelTwo->Controls->Add(this->label3);
			this->panelLoseLevelTwo->Location = System::Drawing::Point(0, 0);
			this->panelLoseLevelTwo->Name = L"panelLoseLevelTwo";
			this->panelLoseLevelTwo->Size = System::Drawing::Size(340, 486);
			this->panelLoseLevelTwo->TabIndex = 40;
			this->panelLoseLevelTwo->Visible = false;
			// 
			// buttonLoseLevelTwo
			// 
			this->buttonLoseLevelTwo->BackColor = System::Drawing::Color::Transparent;
			this->buttonLoseLevelTwo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonLoseLevelTwo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->buttonLoseLevelTwo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLoseLevelTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonLoseLevelTwo->ForeColor = System::Drawing::Color::Black;
			this->buttonLoseLevelTwo->Location = System::Drawing::Point(78, 416);
			this->buttonLoseLevelTwo->Name = L"buttonLoseLevelTwo";
			this->buttonLoseLevelTwo->Size = System::Drawing::Size(137, 26);
			this->buttonLoseLevelTwo->TabIndex = 18;
			this->buttonLoseLevelTwo->Text = L"Новая игра";
			this->buttonLoseLevelTwo->UseVisualStyleBackColor = false;
			this->buttonLoseLevelTwo->Click += gcnew System::EventHandler(this, &LeveTwo::buttonLoseLevelTwo_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(108, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Вы проиграли! ";
			// 
			// panelWinLevelTwo
			// 
			this->panelWinLevelTwo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelWinLevelTwo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelWinLevelTwo.BackgroundImage")));
			this->panelWinLevelTwo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelWinLevelTwo->Controls->Add(this->labelWinShow);
			this->panelWinLevelTwo->Controls->Add(this->buttonWinLevelTwo);
			this->panelWinLevelTwo->Location = System::Drawing::Point(0, 0);
			this->panelWinLevelTwo->Name = L"panelWinLevelTwo";
			this->panelWinLevelTwo->Size = System::Drawing::Size(340, 486);
			this->panelWinLevelTwo->TabIndex = 41;
			this->panelWinLevelTwo->Visible = false;
			// 
			// labelWinShow
			// 
			this->labelWinShow->AutoSize = true;
			this->labelWinShow->BackColor = System::Drawing::Color::Transparent;
			this->labelWinShow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelWinShow->ForeColor = System::Drawing::Color::Green;
			this->labelWinShow->Location = System::Drawing::Point(33, 187);
			this->labelWinShow->Name = L"labelWinShow";
			this->labelWinShow->Size = System::Drawing::Size(271, 50);
			this->labelWinShow->TabIndex = 17;
			this->labelWinShow->Text = L"Поздравляю вы прошли\r\n     второй уровень!";
			// 
			// buttonWinLevelTwo
			// 
			this->buttonWinLevelTwo->BackColor = System::Drawing::Color::Transparent;
			this->buttonWinLevelTwo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonWinLevelTwo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->buttonWinLevelTwo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWinLevelTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonWinLevelTwo->ForeColor = System::Drawing::Color::Black;
			this->buttonWinLevelTwo->Location = System::Drawing::Point(99, 426);
			this->buttonWinLevelTwo->Name = L"buttonWinLevelTwo";
			this->buttonWinLevelTwo->Size = System::Drawing::Size(137, 26);
			this->buttonWinLevelTwo->TabIndex = 16;
			this->buttonWinLevelTwo->Text = L"Закрыть";
			this->buttonWinLevelTwo->UseVisualStyleBackColor = false;
			this->buttonWinLevelTwo->Click += gcnew System::EventHandler(this, &LeveTwo::buttonWinLevelTwo_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(74, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 20);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Не расстраивайтесь!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(75, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Попробуйте ещё раз!";
			// 
			// LeveTwo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(340, 485);
			this->Controls->Add(this->panelWinLevelTwo);
			this->Controls->Add(this->panelLoseLevelTwo);
			this->Controls->Add(this->labelDethLevelTwo);
			this->Controls->Add(this->labelDethNameLevelTwo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
			this->panelLoseLevelTwo->ResumeLayout(false);
			this->panelLoseLevelTwo->PerformLayout();
			this->panelWinLevelTwo->ResumeLayout(false);
			this->panelWinLevelTwo->PerformLayout();
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
	private: System::Void buttonLoseLevelTwo_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonWinLevelTwo_Click(System::Object^ sender, System::EventArgs^ e);
};
}
