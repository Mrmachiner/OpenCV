
namespace CLRImg {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnInput;
	protected:
	private: System::Windows::Forms::PictureBox^  ImgInput;
	private: System::Windows::Forms::PictureBox^  ImgOut;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnInput = (gcnew System::Windows::Forms::Button());
			this->ImgInput = (gcnew System::Windows::Forms::PictureBox());
			this->ImgOut = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgOut))->BeginInit();
			this->SuspendLayout();
			// 
			// btnInput
			// 
			this->btnInput->Location = System::Drawing::Point(91, 470);
			this->btnInput->Name = L"btnInput";
			this->btnInput->Size = System::Drawing::Size(88, 34);
			this->btnInput->TabIndex = 0;
			this->btnInput->Text = L"Input";
			this->btnInput->UseVisualStyleBackColor = true;
			this->btnInput->Click += gcnew System::EventHandler(this, &MyForm::btnInput_Click);
			// 
			// ImgInput
			// 
			this->ImgInput->Location = System::Drawing::Point(12, 77);
			this->ImgInput->Name = L"ImgInput";
			this->ImgInput->Size = System::Drawing::Size(266, 387);
			this->ImgInput->TabIndex = 1;
			this->ImgInput->TabStop = false;
			// 
			// ImgOut
			// 
			this->ImgOut->Location = System::Drawing::Point(633, 77);
			this->ImgOut->Name = L"ImgOut";
			this->ImgOut->Size = System::Drawing::Size(266, 387);
			this->ImgOut->TabIndex = 3;
			this->ImgOut->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(712, 470);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 519);
			this->Controls->Add(this->ImgOut);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->ImgInput);
			this->Controls->Add(this->btnInput);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgOut))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnInput_Click(System::Object^  sender, System::EventArgs^  e) {
	/*	Mat src;
		src = imread("D:\\OpenCV\\Python\\document-scanner\\document-scanner\\images\\don.jpg", 1);
		imshow("ajs", src);*/
	}
	};
}
