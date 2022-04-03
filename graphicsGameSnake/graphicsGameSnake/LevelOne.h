#pragma once

namespace graphicsGameSnake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LevelOne
	/// </summary>
	public ref class LevelOne : public System::Windows::Forms::Form
	{
	public:
		LevelOne(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LevelOne()
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
	private: System::Windows::Forms::Timer^ timerLevelOne;

	private: System::Windows::Forms::Label^ labelScoreNeed;
	private: System::Windows::Forms::Button^ buttonBackToMenu;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ labelDethLevelOne;
	private:
	private: System::Windows::Forms::Label^ labelDethNameLevelOne;
	private: System::Windows::Forms::Panel^ panelWinLevelOne;
	private: System::Windows::Forms::Button^ buttonWinLevelOne;
	private: System::Windows::Forms::Label^ labelWinShow;
	private: System::Windows::Forms::Panel^ panelLoseLevelOne;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ buttonLoseLevelOne;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelOne::typeid));
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->RightWall = (gcnew System::Windows::Forms::PictureBox());
			this->LeftWall = (gcnew System::Windows::Forms::PictureBox());
			this->LowerWall = (gcnew System::Windows::Forms::PictureBox());
			this->UpperWall = (gcnew System::Windows::Forms::PictureBox());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->timerLevelOne = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelScoreNeed = (gcnew System::Windows::Forms::Label());
			this->buttonBackToMenu = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelDethLevelOne = (gcnew System::Windows::Forms::Label());
			this->labelDethNameLevelOne = (gcnew System::Windows::Forms::Label());
			this->panelWinLevelOne = (gcnew System::Windows::Forms::Panel());
			this->labelWinShow = (gcnew System::Windows::Forms::Label());
			this->buttonWinLevelOne = (gcnew System::Windows::Forms::Button());
			this->panelLoseLevelOne = (gcnew System::Windows::Forms::Panel());
			this->buttonLoseLevelOne = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperWall))->BeginInit();
			this->panelWinLevelOne->SuspendLayout();
			this->panelLoseLevelOne->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::Transparent;
			this->buttonStart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonStart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonStart->ForeColor = System::Drawing::Color::Transparent;
			this->buttonStart->Location = System::Drawing::Point(75, 363);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(137, 26);
			this->buttonStart->TabIndex = 15;
			this->buttonStart->Text = L"Новая игра";
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &LevelOne::buttonStart_Click);
			// 
			// RightWall
			// 
			this->RightWall->BackColor = System::Drawing::Color::Gray;
			this->RightWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RightWall.BackgroundImage")));
			this->RightWall->Location = System::Drawing::Point(280, 60);
			this->RightWall->Name = L"RightWall";
			this->RightWall->Size = System::Drawing::Size(20, 280);
			this->RightWall->TabIndex = 13;
			this->RightWall->TabStop = false;
			// 
			// LeftWall
			// 
			this->LeftWall->BackColor = System::Drawing::Color::Gray;
			this->LeftWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LeftWall.BackgroundImage")));
			this->LeftWall->Location = System::Drawing::Point(0, 60);
			this->LeftWall->Name = L"LeftWall";
			this->LeftWall->Size = System::Drawing::Size(20, 280);
			this->LeftWall->TabIndex = 12;
			this->LeftWall->TabStop = false;
			// 
			// LowerWall
			// 
			this->LowerWall->BackColor = System::Drawing::Color::Gray;
			this->LowerWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LowerWall.BackgroundImage")));
			this->LowerWall->Location = System::Drawing::Point(0, 320);
			this->LowerWall->Name = L"LowerWall";
			this->LowerWall->Size = System::Drawing::Size(300, 20);
			this->LowerWall->TabIndex = 11;
			this->LowerWall->TabStop = false;
			// 
			// UpperWall
			// 
			this->UpperWall->BackColor = System::Drawing::Color::Gray;
			this->UpperWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UpperWall.BackgroundImage")));
			this->UpperWall->Location = System::Drawing::Point(0, 60);
			this->UpperWall->Name = L"UpperWall";
			this->UpperWall->Size = System::Drawing::Size(300, 20);
			this->UpperWall->TabIndex = 10;
			this->UpperWall->TabStop = false;
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->BackColor = System::Drawing::Color::Transparent;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore->Location = System::Drawing::Point(103, 9);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(19, 20);
			this->labelScore->TabIndex = 8;
			this->labelScore->Text = L"0";
			// 
			// timerLevelOne
			// 
			this->timerLevelOne->Tick += gcnew System::EventHandler(this, &LevelOne::LevelOne_Update);
			// 
			// labelScoreNeed
			// 
			this->labelScoreNeed->AutoSize = true;
			this->labelScoreNeed->BackColor = System::Drawing::Color::Transparent;
			this->labelScoreNeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScoreNeed->Location = System::Drawing::Point(103, 29);
			this->labelScoreNeed->Name = L"labelScoreNeed";
			this->labelScoreNeed->Size = System::Drawing::Size(19, 20);
			this->labelScoreNeed->TabIndex = 16;
			this->labelScoreNeed->Text = L"0";
			// 
			// buttonBackToMenu
			// 
			this->buttonBackToMenu->BackColor = System::Drawing::Color::Transparent;
			this->buttonBackToMenu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonBackToMenu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->buttonBackToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBackToMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonBackToMenu->ForeColor = System::Drawing::Color::Transparent;
			this->buttonBackToMenu->Location = System::Drawing::Point(75, 395);
			this->buttonBackToMenu->Name = L"buttonBackToMenu";
			this->buttonBackToMenu->Size = System::Drawing::Size(137, 23);
			this->buttonBackToMenu->TabIndex = 17;
			this->buttonBackToMenu->Text = L"Назад в меню";
			this->buttonBackToMenu->UseVisualStyleBackColor = false;
			this->buttonBackToMenu->Click += gcnew System::EventHandler(this, &LevelOne::buttonBackToMenu_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Цель:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 20);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Очки: ";
			// 
			// labelDethLevelOne
			// 
			this->labelDethLevelOne->AutoSize = true;
			this->labelDethLevelOne->BackColor = System::Drawing::Color::Transparent;
			this->labelDethLevelOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDethLevelOne->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelDethLevelOne->Location = System::Drawing::Point(250, 9);
			this->labelDethLevelOne->Name = L"labelDethLevelOne";
			this->labelDethLevelOne->Size = System::Drawing::Size(25, 25);
			this->labelDethLevelOne->TabIndex = 21;
			this->labelDethLevelOne->Text = L"0";
			this->labelDethLevelOne->Visible = false;
			// 
			// labelDethNameLevelOne
			// 
			this->labelDethNameLevelOne->AutoSize = true;
			this->labelDethNameLevelOne->BackColor = System::Drawing::Color::Transparent;
			this->labelDethNameLevelOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDethNameLevelOne->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelDethNameLevelOne->Location = System::Drawing::Point(143, 9);
			this->labelDethNameLevelOne->Name = L"labelDethNameLevelOne";
			this->labelDethNameLevelOne->Size = System::Drawing::Size(101, 25);
			this->labelDethNameLevelOne->TabIndex = 20;
			this->labelDethNameLevelOne->Text = L"Смерти:";
			this->labelDethNameLevelOne->Visible = false;
			// 
			// panelWinLevelOne
			// 
			this->panelWinLevelOne->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelWinLevelOne->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelWinLevelOne.BackgroundImage")));
			this->panelWinLevelOne->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelWinLevelOne->Controls->Add(this->labelWinShow);
			this->panelWinLevelOne->Controls->Add(this->buttonWinLevelOne);
			this->panelWinLevelOne->Location = System::Drawing::Point(0, 0);
			this->panelWinLevelOne->Name = L"panelWinLevelOne";
			this->panelWinLevelOne->Size = System::Drawing::Size(300, 430);
			this->panelWinLevelOne->TabIndex = 22;
			this->panelWinLevelOne->Visible = false;
			// 
			// labelWinShow
			// 
			this->labelWinShow->AutoSize = true;
			this->labelWinShow->BackColor = System::Drawing::Color::Transparent;
			this->labelWinShow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelWinShow->ForeColor = System::Drawing::Color::Green;
			this->labelWinShow->Location = System::Drawing::Point(18, 163);
			this->labelWinShow->Name = L"labelWinShow";
			this->labelWinShow->Size = System::Drawing::Size(271, 50);
			this->labelWinShow->TabIndex = 17;
			this->labelWinShow->Text = L"Поздравляю вы прошли\r\n     первый уровень!";
			// 
			// buttonWinLevelOne
			// 
			this->buttonWinLevelOne->BackColor = System::Drawing::Color::Transparent;
			this->buttonWinLevelOne->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonWinLevelOne->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->buttonWinLevelOne->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWinLevelOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonWinLevelOne->ForeColor = System::Drawing::Color::Black;
			this->buttonWinLevelOne->Location = System::Drawing::Point(75, 373);
			this->buttonWinLevelOne->Name = L"buttonWinLevelOne";
			this->buttonWinLevelOne->Size = System::Drawing::Size(137, 26);
			this->buttonWinLevelOne->TabIndex = 16;
			this->buttonWinLevelOne->Text = L"Закрыть";
			this->buttonWinLevelOne->UseVisualStyleBackColor = false;
			this->buttonWinLevelOne->Click += gcnew System::EventHandler(this, &LevelOne::buttonWinLevelOne_Click);
			// 
			// panelLoseLevelOne
			// 
			this->panelLoseLevelOne->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelLoseLevelOne->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLoseLevelOne.BackgroundImage")));
			this->panelLoseLevelOne->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelLoseLevelOne->Controls->Add(this->label5);
			this->panelLoseLevelOne->Controls->Add(this->label4);
			this->panelLoseLevelOne->Controls->Add(this->buttonLoseLevelOne);
			this->panelLoseLevelOne->Controls->Add(this->label3);
			this->panelLoseLevelOne->Location = System::Drawing::Point(0, 0);
			this->panelLoseLevelOne->Name = L"panelLoseLevelOne";
			this->panelLoseLevelOne->Size = System::Drawing::Size(300, 430);
			this->panelLoseLevelOne->TabIndex = 23;
			this->panelLoseLevelOne->Visible = false;
			// 
			// buttonLoseLevelOne
			// 
			this->buttonLoseLevelOne->BackColor = System::Drawing::Color::Transparent;
			this->buttonLoseLevelOne->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonLoseLevelOne->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->buttonLoseLevelOne->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLoseLevelOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonLoseLevelOne->ForeColor = System::Drawing::Color::Black;
			this->buttonLoseLevelOne->Location = System::Drawing::Point(75, 373);
			this->buttonLoseLevelOne->Name = L"buttonLoseLevelOne";
			this->buttonLoseLevelOne->Size = System::Drawing::Size(137, 26);
			this->buttonLoseLevelOne->TabIndex = 18;
			this->buttonLoseLevelOne->Text = L"Новая игра";
			this->buttonLoseLevelOne->UseVisualStyleBackColor = false;
			this->buttonLoseLevelOne->Click += gcnew System::EventHandler(this, &LevelOne::buttonLoseLevelOne_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(70, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 25);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Вы проиграли!";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(38, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(241, 25);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Не расстраивайтесь!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(30, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 25);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Попробуйте ещё раз!";
			// 
			// LevelOne
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(300, 430);
			this->Controls->Add(this->panelLoseLevelOne);
			this->Controls->Add(this->panelWinLevelOne);
			this->Controls->Add(this->labelDethLevelOne);
			this->Controls->Add(this->labelDethNameLevelOne);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonBackToMenu);
			this->Controls->Add(this->labelScoreNeed);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->RightWall);
			this->Controls->Add(this->LeftWall);
			this->Controls->Add(this->LowerWall);
			this->Controls->Add(this->UpperWall);
			this->Controls->Add(this->labelScore);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"LevelOne";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LevelOne";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LevelOne::LevelOne_FormClosing);
			this->Load += gcnew System::EventHandler(this, &LevelOne::LevelOne_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LevelOne::LevelOne_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightWall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftWall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerWall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperWall))->EndInit();
			this->panelWinLevelOne->ResumeLayout(false);
			this->panelWinLevelOne->PerformLayout();
			this->panelLoseLevelOne->ResumeLayout(false);
			this->panelLoseLevelOne->PerformLayout();
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
	private: float vGemingSpead = 300;		//geming spead		
	private: int vGamingScore = 0;			//gaming score
	private: int vVictoryGamingScore = 5;	//gaming score for win
	private: int vEveryEatingSpead = 20;	//When the snake it he move fastly
	private: bool vGameVictory = false;		//gaming score for win


	//methods
	private: void fruitGeneration();		//fruit generation
	private: void feedingSnake();			//snake eat fruit			
	private: void moveSnake();				//moving snake
	private: void bumpIntoSnake();			//snak bump into yourself
	private: void gameOver();				//loose game
	private: void startNewGame();			//start new game
	private: void bumpIntoWall();			//check bump into wall

	private: void LevelOne_Update(Object^ object, EventArgs^ e);
	private: System::Void LevelOne_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LevelOne_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void LevelOne_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void buttonBackToMenu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonWinLevelOne_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonLoseLevelOne_Click(System::Object^ sender, System::EventArgs^ e);
};
}
