#pragma once



namespace graphicsGameSnake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for startMenu
	/// </summary>
	public ref class startMenu : public System::Windows::Forms::Form
	{
	public:
		startMenu(void);
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~startMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonStartLevelOne;

	private: System::Windows::Forms::Button^ buttonStartLevelTwo;
	private: System::Windows::Forms::Button^ buttonStartLevelThree;
	private: System::Windows::Forms::Button^ buttonReference;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Panel^ panelRef;

	private: System::Windows::Forms::RichTextBox^ commentField;
	private: System::Windows::Forms::Button^ buttonCloseRef;
	private: System::Windows::Forms::Label^ labelMenu;
	public:
		static int GLDeth = 0;
		static  System::Windows::Forms::Label^ labelWinLevelOne;
		static  System::Windows::Forms::Label^ labelWinLevelTwo;
		static  System::Windows::Forms::Label^ labelWinLevelThree;
		static  System::Windows::Forms::Label^ labelDeth;








	private: System::Windows::Forms::Label^ labelDethName;
	public:















	private:


	private:
	public:






	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(startMenu::typeid));
			this->buttonStartLevelOne = (gcnew System::Windows::Forms::Button());
			this->buttonStartLevelTwo = (gcnew System::Windows::Forms::Button());
			this->buttonStartLevelThree = (gcnew System::Windows::Forms::Button());
			this->buttonReference = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->panelRef = (gcnew System::Windows::Forms::Panel());
			this->buttonCloseRef = (gcnew System::Windows::Forms::Button());
			this->commentField = (gcnew System::Windows::Forms::RichTextBox());
			this->labelMenu = (gcnew System::Windows::Forms::Label());
			this->labelDethName = (gcnew System::Windows::Forms::Label());
			this->labelDeth = (gcnew System::Windows::Forms::Label());
			this->labelWinLevelOne = (gcnew System::Windows::Forms::Label());
			this->labelWinLevelTwo = (gcnew System::Windows::Forms::Label());
			this->labelWinLevelThree = (gcnew System::Windows::Forms::Label());
			this->panelRef->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonStartLevelOne
			// 
			this->buttonStartLevelOne->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->buttonStartLevelOne->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStartLevelOne->Location = System::Drawing::Point(158, 84);
			this->buttonStartLevelOne->Name = L"buttonStartLevelOne";
			this->buttonStartLevelOne->Size = System::Drawing::Size(107, 23);
			this->buttonStartLevelOne->TabIndex = 7;
			this->buttonStartLevelOne->Text = L"Первый уровень";
			this->buttonStartLevelOne->UseVisualStyleBackColor = false;
			this->buttonStartLevelOne->Click += gcnew System::EventHandler(this, &startMenu::buttonStartLevelOne_Click);
			// 
			// buttonStartLevelTwo
			// 
			this->buttonStartLevelTwo->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->buttonStartLevelTwo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStartLevelTwo->Location = System::Drawing::Point(158, 125);
			this->buttonStartLevelTwo->Name = L"buttonStartLevelTwo";
			this->buttonStartLevelTwo->Size = System::Drawing::Size(107, 23);
			this->buttonStartLevelTwo->TabIndex = 9;
			this->buttonStartLevelTwo->Text = L"Второй уровень";
			this->buttonStartLevelTwo->UseVisualStyleBackColor = false;
			this->buttonStartLevelTwo->Click += gcnew System::EventHandler(this, &startMenu::buttonStartLevelTwo_Click);
			// 
			// buttonStartLevelThree
			// 
			this->buttonStartLevelThree->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->buttonStartLevelThree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStartLevelThree->Location = System::Drawing::Point(158, 168);
			this->buttonStartLevelThree->Name = L"buttonStartLevelThree";
			this->buttonStartLevelThree->Size = System::Drawing::Size(107, 23);
			this->buttonStartLevelThree->TabIndex = 10;
			this->buttonStartLevelThree->Text = L"Третий уровень";
			this->buttonStartLevelThree->UseVisualStyleBackColor = false;
			this->buttonStartLevelThree->Click += gcnew System::EventHandler(this, &startMenu::buttonStartLevelThree_Click);
			// 
			// buttonReference
			// 
			this->buttonReference->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonReference->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->buttonReference->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonReference->Location = System::Drawing::Point(158, 210);
			this->buttonReference->Name = L"buttonReference";
			this->buttonReference->Size = System::Drawing::Size(107, 23);
			this->buttonReference->TabIndex = 11;
			this->buttonReference->Text = L"О программе";
			this->buttonReference->UseVisualStyleBackColor = false;
			this->buttonReference->Click += gcnew System::EventHandler(this, &startMenu::buttonReference_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonExit->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExit->Location = System::Drawing::Point(158, 296);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(107, 23);
			this->buttonExit->TabIndex = 12;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &startMenu::buttonExit_Click);
			// 
			// panelRef
			// 
			this->panelRef->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelRef->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panelRef->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelRef.BackgroundImage")));
			this->panelRef->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelRef->Controls->Add(this->buttonCloseRef);
			this->panelRef->Controls->Add(this->commentField);
			this->panelRef->Location = System::Drawing::Point(0, 0);
			this->panelRef->Name = L"panelRef";
			this->panelRef->Size = System::Drawing::Size(435, 361);
			this->panelRef->TabIndex = 13;
			this->panelRef->Visible = false;
			// 
			// buttonCloseRef
			// 
			this->buttonCloseRef->Location = System::Drawing::Point(181, 267);
			this->buttonCloseRef->Name = L"buttonCloseRef";
			this->buttonCloseRef->Size = System::Drawing::Size(75, 23);
			this->buttonCloseRef->TabIndex = 23;
			this->buttonCloseRef->Text = L"Назад";
			this->buttonCloseRef->UseVisualStyleBackColor = true;
			this->buttonCloseRef->Click += gcnew System::EventHandler(this, &startMenu::buttonCloseRef_Click);
			// 
			// commentField
			// 
			this->commentField->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->commentField->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->commentField->Location = System::Drawing::Point(110, 30);
			this->commentField->Name = L"commentField";
			this->commentField->Size = System::Drawing::Size(226, 174);
			this->commentField->TabIndex = 22;
			this->commentField->Text = resources->GetString(L"commentField.Text");
			// 
			// labelMenu
			// 
			this->labelMenu->AutoSize = true;
			this->labelMenu->BackColor = System::Drawing::Color::Transparent;
			this->labelMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMenu->ForeColor = System::Drawing::Color::LightSteelBlue;
			this->labelMenu->Location = System::Drawing::Point(174, 39);
			this->labelMenu->Name = L"labelMenu";
			this->labelMenu->Size = System::Drawing::Size(74, 25);
			this->labelMenu->TabIndex = 14;
			this->labelMenu->Text = L"Меню";
			// 
			// labelDethName
			// 
			this->labelDethName->AutoSize = true;
			this->labelDethName->BackColor = System::Drawing::Color::Transparent;
			this->labelDethName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDethName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelDethName->Location = System::Drawing::Point(12, 9);
			this->labelDethName->Name = L"labelDethName";
			this->labelDethName->Size = System::Drawing::Size(101, 25);
			this->labelDethName->TabIndex = 15;
			this->labelDethName->Text = L"Смерти:";
			this->labelDethName->Visible = false;
			// 
			// labelDeth
			// 
			this->labelDeth->AutoSize = true;
			this->labelDeth->BackColor = System::Drawing::Color::Transparent;
			this->labelDeth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDeth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelDeth->Location = System::Drawing::Point(119, 9);
			this->labelDeth->Name = L"labelDeth";
			this->labelDeth->Size = System::Drawing::Size(25, 25);
			this->labelDeth->TabIndex = 16;
			this->labelDeth->Text = L"0";
			this->labelDeth->Visible = false;
			// 
			// labelWinLevelOne
			// 
			this->labelWinLevelOne->AutoSize = true;
			this->labelWinLevelOne->BackColor = System::Drawing::Color::Transparent;
			this->labelWinLevelOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWinLevelOne->ForeColor = System::Drawing::Color::Red;
			this->labelWinLevelOne->Location = System::Drawing::Point(271, 76);
			this->labelWinLevelOne->Name = L"labelWinLevelOne";
			this->labelWinLevelOne->Size = System::Drawing::Size(24, 31);
			this->labelWinLevelOne->TabIndex = 17;
			this->labelWinLevelOne->Text = L"-";
			this->labelWinLevelOne->Visible = false;
			// 
			// labelWinLevelTwo
			// 
			this->labelWinLevelTwo->AutoSize = true;
			this->labelWinLevelTwo->BackColor = System::Drawing::Color::Transparent;
			this->labelWinLevelTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWinLevelTwo->ForeColor = System::Drawing::Color::Red;
			this->labelWinLevelTwo->Location = System::Drawing::Point(271, 117);
			this->labelWinLevelTwo->Name = L"labelWinLevelTwo";
			this->labelWinLevelTwo->Size = System::Drawing::Size(24, 31);
			this->labelWinLevelTwo->TabIndex = 18;
			this->labelWinLevelTwo->Text = L"-";
			this->labelWinLevelTwo->Visible = false;
			// 
			// labelWinLevelThree
			// 
			this->labelWinLevelThree->AutoSize = true;
			this->labelWinLevelThree->BackColor = System::Drawing::Color::Transparent;
			this->labelWinLevelThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelWinLevelThree->ForeColor = System::Drawing::Color::Red;
			this->labelWinLevelThree->Location = System::Drawing::Point(271, 160);
			this->labelWinLevelThree->Name = L"labelWinLevelThree";
			this->labelWinLevelThree->Size = System::Drawing::Size(24, 31);
			this->labelWinLevelThree->TabIndex = 19;
			this->labelWinLevelThree->Text = L"-";
			this->labelWinLevelThree->Visible = false;
			// 
			// startMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(434, 361);
			this->Controls->Add(this->labelWinLevelThree);
			this->Controls->Add(this->labelWinLevelTwo);
			this->Controls->Add(this->labelWinLevelOne);
			this->Controls->Add(this->labelDeth);
			this->Controls->Add(this->labelDethName);
			this->Controls->Add(this->labelMenu);
			this->Controls->Add(this->panelRef);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonReference);
			this->Controls->Add(this->buttonStartLevelThree);
			this->Controls->Add(this->buttonStartLevelTwo);
			this->Controls->Add(this->buttonStartLevelOne);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"startMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"startMenu";
			this->Load += gcnew System::EventHandler(this, &startMenu::startMenu_Load);
			this->panelRef->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void startMenu_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonStartLevelOne_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonReference_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonStartLevelTwo_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonStartLevelThree_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonCloseRef_Click(System::Object^ sender, System::EventArgs^ e);
};
}



