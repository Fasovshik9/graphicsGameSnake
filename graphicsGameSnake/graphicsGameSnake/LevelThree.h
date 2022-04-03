#pragma once

namespace graphicsGameSnake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LevelThree
	/// </summary>
	public ref class LevelThree : public System::Windows::Forms::Form
	{
	public:
		LevelThree(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LevelThree()
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
	private: System::Windows::Forms::Timer^ timerLevelThree;

	private: System::Windows::Forms::Label^ labelScoreNeed;
	private: System::Windows::Forms::Button^ buttonBackToMenu;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ labelDethLevelTree;
	private:

	private: System::Windows::Forms::Label^ labelDethNameLevelTree;
	private: System::Windows::Forms::Panel^ panelWinLevelThree;
	private: System::Windows::Forms::Label^ labelWinShow;
	private: System::Windows::Forms::Button^ buttonWinLevelTree;
	private: System::Windows::Forms::Panel^ panelLoseLevelThree;
	private: System::Windows::Forms::Button^ buttonLoseLevelTree;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;



	public:
	private:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelThree::typeid));
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->RightWall = (gcnew System::Windows::Forms::PictureBox());
			this->LeftWall = (gcnew System::Windows::Forms::PictureBox());
			this->LowerWall = (gcnew System::Windows::Forms::PictureBox());
			this->UpperWall = (gcnew System::Windows::Forms::PictureBox());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->timerLevelThree = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelScoreNeed = (gcnew System::Windows::Forms::Label());
			this->buttonBackToMenu = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelDethLevelTree = (gcnew System::Windows::Forms::Label());
			this->labelDethNameLevelTree = (gcnew System::Windows::Forms::Label());
			this->panelWinLevelThree = (gcnew System::Windows::Forms::Panel());
			this->labelWinShow = (gcnew System::Windows::Forms::Label());
			this->buttonWinLevelTree = (gcnew System::Windows::Forms::Button());
			this->panelLoseLevelThree = (gcnew System::Windows::Forms::Panel());
			this->buttonLoseLevelTree = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerWall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperWall))->BeginInit();
			this->panelWinLevelThree->SuspendLayout();
			this->panelLoseLevelThree->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::Transparent;
			this->buttonStart->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->buttonStart->FlatAppearance->CheckedBackColor = System::Drawing::Color::LightGray;
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonStart->Location = System::Drawing::Point(122, 480);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(145, 25);
			this->buttonStart->TabIndex = 31;
			this->buttonStart->Text = L"Новая игра";
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &LevelThree::buttonStart_Click);
			// 
			// RightWall
			// 
			this->RightWall->BackColor = System::Drawing::Color::Gray;
			this->RightWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RightWall.BackgroundImage")));
			this->RightWall->Location = System::Drawing::Point(380, 60);
			this->RightWall->Name = L"RightWall";
			this->RightWall->Size = System::Drawing::Size(20, 400);
			this->RightWall->TabIndex = 29;
			this->RightWall->TabStop = false;
			// 
			// LeftWall
			// 
			this->LeftWall->BackColor = System::Drawing::Color::Gray;
			this->LeftWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LeftWall.BackgroundImage")));
			this->LeftWall->Location = System::Drawing::Point(0, 60);
			this->LeftWall->Name = L"LeftWall";
			this->LeftWall->Size = System::Drawing::Size(20, 400);
			this->LeftWall->TabIndex = 28;
			this->LeftWall->TabStop = false;
			// 
			// LowerWall
			// 
			this->LowerWall->BackColor = System::Drawing::Color::Gray;
			this->LowerWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LowerWall.BackgroundImage")));
			this->LowerWall->Location = System::Drawing::Point(0, 440);
			this->LowerWall->Name = L"LowerWall";
			this->LowerWall->Size = System::Drawing::Size(400, 20);
			this->LowerWall->TabIndex = 27;
			this->LowerWall->TabStop = false;
			// 
			// UpperWall
			// 
			this->UpperWall->BackColor = System::Drawing::Color::Gray;
			this->UpperWall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UpperWall.BackgroundImage")));
			this->UpperWall->Location = System::Drawing::Point(0, 60);
			this->UpperWall->Name = L"UpperWall";
			this->UpperWall->Size = System::Drawing::Size(400, 20);
			this->UpperWall->TabIndex = 26;
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
			this->labelScore->TabIndex = 25;
			this->labelScore->Text = L"0";
			// 
			// timerLevelThree
			// 
			this->timerLevelThree->Tick += gcnew System::EventHandler(this, &LevelThree::LevelThree_Update);
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
			this->labelScoreNeed->TabIndex = 32;
			this->labelScoreNeed->Text = L"0";
			// 
			// buttonBackToMenu
			// 
			this->buttonBackToMenu->BackColor = System::Drawing::Color::Transparent;
			this->buttonBackToMenu->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->buttonBackToMenu->FlatAppearance->CheckedBackColor = System::Drawing::Color::LightGray;
			this->buttonBackToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBackToMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonBackToMenu->Location = System::Drawing::Point(122, 511);
			this->buttonBackToMenu->Name = L"buttonBackToMenu";
			this->buttonBackToMenu->Size = System::Drawing::Size(145, 25);
			this->buttonBackToMenu->TabIndex = 33;
			this->buttonBackToMenu->Text = L"Назад в меню";
			this->buttonBackToMenu->UseVisualStyleBackColor = false;
			this->buttonBackToMenu->Click += gcnew System::EventHandler(this, &LevelThree::buttonBackToMenu_Click);
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
			this->label2->TabIndex = 35;
			this->label2->Text = L"Очки: ";
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
			this->label1->TabIndex = 34;
			this->label1->Text = L"Цель:";
			// 
			// labelDethLevelTree
			// 
			this->labelDethLevelTree->AutoSize = true;
			this->labelDethLevelTree->BackColor = System::Drawing::Color::Transparent;
			this->labelDethLevelTree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDethLevelTree->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelDethLevelTree->Location = System::Drawing::Point(334, 9);
			this->labelDethLevelTree->Name = L"labelDethLevelTree";
			this->labelDethLevelTree->Size = System::Drawing::Size(25, 25);
			this->labelDethLevelTree->TabIndex = 41;
			this->labelDethLevelTree->Text = L"0";
			this->labelDethLevelTree->Visible = false;
			// 
			// labelDethNameLevelTree
			// 
			this->labelDethNameLevelTree->AutoSize = true;
			this->labelDethNameLevelTree->BackColor = System::Drawing::Color::Transparent;
			this->labelDethNameLevelTree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDethNameLevelTree->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelDethNameLevelTree->Location = System::Drawing::Point(227, 9);
			this->labelDethNameLevelTree->Name = L"labelDethNameLevelTree";
			this->labelDethNameLevelTree->Size = System::Drawing::Size(101, 25);
			this->labelDethNameLevelTree->TabIndex = 40;
			this->labelDethNameLevelTree->Text = L"Смерти:";
			this->labelDethNameLevelTree->Visible = false;
			// 
			// panelWinLevelThree
			// 
			this->panelWinLevelThree->BackColor = System::Drawing::Color::White;
			this->panelWinLevelThree->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelWinLevelThree.BackgroundImage")));
			this->panelWinLevelThree->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panelWinLevelThree->Controls->Add(this->labelWinShow);
			this->panelWinLevelThree->Controls->Add(this->buttonWinLevelTree);
			this->panelWinLevelThree->Location = System::Drawing::Point(0, 0);
			this->panelWinLevelThree->Name = L"panelWinLevelThree";
			this->panelWinLevelThree->Size = System::Drawing::Size(400, 536);
			this->panelWinLevelThree->TabIndex = 42;
			this->panelWinLevelThree->Visible = false;
			// 
			// labelWinShow
			// 
			this->labelWinShow->AutoSize = true;
			this->labelWinShow->BackColor = System::Drawing::Color::Transparent;
			this->labelWinShow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelWinShow->ForeColor = System::Drawing::Color::Green;
			this->labelWinShow->Location = System::Drawing::Point(70, 225);
			this->labelWinShow->Name = L"labelWinShow";
			this->labelWinShow->Size = System::Drawing::Size(271, 50);
			this->labelWinShow->TabIndex = 17;
			this->labelWinShow->Text = L"Поздравляю вы прошли\r\n     третий уровень!";
			// 
			// buttonWinLevelTree
			// 
			this->buttonWinLevelTree->BackColor = System::Drawing::Color::Transparent;
			this->buttonWinLevelTree->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonWinLevelTree->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->buttonWinLevelTree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWinLevelTree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonWinLevelTree->ForeColor = System::Drawing::Color::Black;
			this->buttonWinLevelTree->Location = System::Drawing::Point(130, 466);
			this->buttonWinLevelTree->Name = L"buttonWinLevelTree";
			this->buttonWinLevelTree->Size = System::Drawing::Size(137, 26);
			this->buttonWinLevelTree->TabIndex = 16;
			this->buttonWinLevelTree->Text = L"Закрыть";
			this->buttonWinLevelTree->UseVisualStyleBackColor = false;
			this->buttonWinLevelTree->Click += gcnew System::EventHandler(this, &LevelThree::buttonWinLevelTree_Click);
			// 
			// panelLoseLevelThree
			// 
			this->panelLoseLevelThree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelLoseLevelThree->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLoseLevelThree.BackgroundImage")));
			this->panelLoseLevelThree->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelLoseLevelThree->Controls->Add(this->label5);
			this->panelLoseLevelThree->Controls->Add(this->label4);
			this->panelLoseLevelThree->Controls->Add(this->label3);
			this->panelLoseLevelThree->Controls->Add(this->buttonLoseLevelTree);
			this->panelLoseLevelThree->Location = System::Drawing::Point(0, 0);
			this->panelLoseLevelThree->Name = L"panelLoseLevelThree";
			this->panelLoseLevelThree->Size = System::Drawing::Size(400, 546);
			this->panelLoseLevelThree->TabIndex = 43;
			this->panelLoseLevelThree->Visible = false;
			// 
			// buttonLoseLevelTree
			// 
			this->buttonLoseLevelTree->BackColor = System::Drawing::Color::Transparent;
			this->buttonLoseLevelTree->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonLoseLevelTree->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->buttonLoseLevelTree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLoseLevelTree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonLoseLevelTree->ForeColor = System::Drawing::Color::Black;
			this->buttonLoseLevelTree->Location = System::Drawing::Point(130, 501);
			this->buttonLoseLevelTree->Name = L"buttonLoseLevelTree";
			this->buttonLoseLevelTree->Size = System::Drawing::Size(137, 26);
			this->buttonLoseLevelTree->TabIndex = 18;
			this->buttonLoseLevelTree->Text = L"Новая игра";
			this->buttonLoseLevelTree->UseVisualStyleBackColor = false;
			this->buttonLoseLevelTree->Click += gcnew System::EventHandler(this, &LevelThree::buttonLoseLevelTree_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(81, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 25);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Попробуйте ещё раз!";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(85, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(241, 25);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Не расстраивайтесь!";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(117, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 25);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Вы проиграли!";
			// 
			// LevelThree
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(400, 539);
			this->Controls->Add(this->panelLoseLevelThree);
			this->Controls->Add(this->panelWinLevelThree);
			this->Controls->Add(this->labelDethLevelTree);
			this->Controls->Add(this->labelDethNameLevelTree);
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
			this->Name = L"LevelThree";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LevelThree";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LevelThree::LevelThree_FormClosing);
			this->Load += gcnew System::EventHandler(this, &LevelThree::LevelThree_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LevelThree::LevelThree_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightWall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftWall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerWall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperWall))->EndInit();
			this->panelWinLevelThree->ResumeLayout(false);
			this->panelWinLevelThree->PerformLayout();
			this->panelLoseLevelThree->ResumeLayout(false);
			this->panelLoseLevelThree->PerformLayout();
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
	private: int vVictoryGamingScore = 15;	//gaming score for win
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


	private: void LevelThree_Update(Object^ object, EventArgs^ e);
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LevelThree_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LevelThree_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void LevelThree_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void buttonBackToMenu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonWinLevelTree_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonLoseLevelTree_Click(System::Object^ sender, System::EventArgs^ e);
};
}
