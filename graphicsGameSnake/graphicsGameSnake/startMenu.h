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

	protected:




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
			this->buttonStartLevelOne->Text = L"Start level one";
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
			this->buttonStartLevelTwo->Text = L"Start level two";
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
			this->buttonStartLevelThree->Text = L"Start level three";
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
			this->buttonReference->Text = L"Reference";
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
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &startMenu::buttonExit_Click);
			// 
			// startMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(434, 361);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonReference);
			this->Controls->Add(this->buttonStartLevelThree);
			this->Controls->Add(this->buttonStartLevelTwo);
			this->Controls->Add(this->buttonStartLevelOne);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"startMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"startMenu";
			this->Load += gcnew System::EventHandler(this, &startMenu::startMenu_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void startMenu_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonStartLevelOne_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonReference_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonStartLevelTwo_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonStartLevelThree_Click(System::Object^ sender, System::EventArgs^ e);
};
}



