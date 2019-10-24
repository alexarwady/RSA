#pragma once
#include<cmath>
#include <string>
#include "bigint-2010.04.30\BigIntegerLibrary.hh" //include the BigInteger Library
#include <fstream>
#include <cstdlib>


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using System::Runtime::InteropServices::Marshal;

static int count=0;
static int count1=0;

// Function to find modulo inverse of a 
BigInteger modInverse(BigInteger a, BigInteger m) 
{ 
    BigInteger m0 = m; 
    BigInteger y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        // q is quotient 
        BigInteger q = a / m; 
        BigInteger t = m; 
  
        // m is remainder now, process same as 
        // Euclid's algo 
        m = a % m, a = t; 
        t = y; 
  
        // Update y and x 
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
       x += m0; 
  
    return x; 
} 

namespace YoutubeCPlusPlus {

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;





	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Button^  button1;






	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox5;



	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(309, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Message";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"p=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"q=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"n=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Totient=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"e=";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 183);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"d=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(385, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(102, 34);
			this->textBox2->MaxLength = 999999999;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(102, 62);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(309, 69);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Ciphertext";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(385, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Encrypt";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(385, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 23);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Decrypt";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(309, 188);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 13);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Message";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(385, 154);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(309, 156);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(58, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Ciphertext";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(102, 150);
			this->textBox5->MaxLength = 32000;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 29;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(210, 150);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 23);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Import e";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(102, 242);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 34;
			this->button4->Text = L"Generate All";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(517, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 50);
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(514, 96);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(92, 52);
			this->label19->TabIndex = 36;
			this->label19->Text = L"Done by:\r\nAlexander Arwadi\r\nKarl Chahine\r\nCesar Bou Merhi";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(102, 93);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 37;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(102, 121);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 38;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(102, 180);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 39;
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(210, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 23);
			this->button5->TabIndex = 40;
			this->button5->Text = L"Import d";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(210, 93);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 23);
			this->button6->TabIndex = 41;
			this->button6->Text = L"Import n";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(385, 62);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 42;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(385, 183);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 43;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(618, 306);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(624, 335);
			this->Name = L"Form1";
			this->Text = L"RSA Algorithm";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 String ^ in=textBox2 ->Text; //Input p
			 String ^ in1=textBox3 ->Text; //Input q
			 String ^ in3;
			 String ^ in4;
			 String ^ in5=textBox1->Text; //Input message
			 String ^ in6=textBox5->Text; //Input e

			 System::IntPtr pointer = Marshal::StringToHGlobalAnsi(in6);
			 char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			 std::string in66(charPointer, in6->Length);
			 Marshal::FreeHGlobal(pointer);
			 //This code converts e from System::string to std::string

			 System::IntPtr pointer1 = Marshal::StringToHGlobalAnsi(in);
			 char* charPointer1 = reinterpret_cast<char*>(pointer1.ToPointer());
			 std::string in67(charPointer1, in->Length);
			 Marshal::FreeHGlobal(pointer1);
			 //This code converts p from System::string to std::string

			 System::IntPtr pointer2 = Marshal::StringToHGlobalAnsi(in1);
			 char* charPointer2 = reinterpret_cast<char*>(pointer2.ToPointer());
			 std::string in68(charPointer2, in1->Length);
			 Marshal::FreeHGlobal(pointer2);
			 //This code converts q from System::string to std::string

			 System::IntPtr pointer3 = Marshal::StringToHGlobalAnsi(in5);
			 char* charPointer3 = reinterpret_cast<char*>(pointer3.ToPointer());
			 std::string in69(charPointer3, in5->Length);
			 Marshal::FreeHGlobal(pointer3);
			 //This code converts msg from System::string to std::string

			 BigInteger e1=stringToBigInteger(in66); //Convert e from string to BigInteger
			 BigInteger p=stringToBigInteger(in67); //Convert p from string to BigInteger
			 BigInteger q=stringToBigInteger(in68); //Convert q from string to BigInteger
			 BigInteger msg=stringToBigInteger(in69); //Convert msg from string to BigInteger

			 BigInteger n;
			 String ^ n12=textBox6 ->Text; //Get value entered
			 System::IntPtr pointer4 = Marshal::StringToHGlobalAnsi(n12);
			 char* charPointer4 = reinterpret_cast<char*>(pointer4.ToPointer());
			 std::string in70(charPointer4, n12->Length);
			 Marshal::FreeHGlobal(pointer4);
			 n=stringToBigInteger(in70);

			 if (p!=0 && q!=0) //if user did not enter n
			 {n=p*q;
			 BigInteger totient= (q-1)*(p-1); //totient(n)=(q-1)*(p-1)

			 BigInteger temp;
			 BigInteger gcd=2;
			 BigInteger temp2=1;
			 BigInteger e2(e1); 
			 BigInteger totient2(totient);
			 BigInteger temp3;

			 
			 while(temp2!=0)
			 {
				 temp=e2%totient2;
				 temp3=temp.toInt();
				 if(temp==0)
				 {
					 gcd=totient2;
				 }
				 temp2=temp3;
				 e2=totient2;
				 totient2=temp3;
			 }
			 //This while loop finds the gcd of totient(n) and e
			 if(gcd==1)
				 count1=1;

			 BigInteger d=modInverse(e1, totient);
 
			 BigInteger k = 2;
			 
			 string n1=bigIntegerToString(n);
			 string totient1=bigIntegerToString(totient);
			 string d1=bigIntegerToString(d);

			 String^ n11 = gcnew String(n1.c_str());  
			 in=System::Convert::ToString(n11);
			 textBox6->Text=in;
			 //Output n
			 
			 n11 = gcnew String(totient1.c_str());
			 in1=System::Convert::ToString(n11);
			 textBox7->Text=in1;
			 //Output totient
			 
			 n11 = gcnew String(d1.c_str());  
			 in3=System::Convert::ToString(n11);
			 textBox8->Text=in3;
			 //Output d

			 count=1;
			 
			 }

			 if (p==0 && q==0)
				 textBox7->Text="0";

			 BigInteger e3(e1);
			 BigInteger res = 1;      
			 msg = msg % n;  
			 while (e3 > 0) 
			 { 
			  
				 if (e3%2==1) 
					 res = (res*msg) % n; 
   
			  e3 = e3/2;
				 msg = (msg*msg) % n;   
			 } 
			 //This while loop does fast exponentiation to calculate the ciphertext

 
			 string res1=bigIntegerToString(res);
			 String^ n13 = gcnew String(res1.c_str()); 
			 in4=System::Convert::ToString(n13);
			 if(count1==1 || count==0)
				textBox9->Text=in4; //Output ciphertext
			 else
				textBox9->Text="GCD(e,totient)!=1";

			 count1=0;
			 count=0;

		 
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		 
			 String ^ in=textBox2 ->Text; //Input p
			 String ^ in1=textBox3 ->Text; //Input q
			 String ^ in3;
			 String ^ in4;
			 String ^ in5=textBox4->Text; //Input message
			 String ^ in6=textBox8->Text; //Input d

			 System::IntPtr pointer = Marshal::StringToHGlobalAnsi(in6);
			 char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			 std::string in66(charPointer, in6->Length);
			 Marshal::FreeHGlobal(pointer);
			 //This code converts d from System::string to std::string

			 System::IntPtr pointer1 = Marshal::StringToHGlobalAnsi(in);
			 char* charPointer1 = reinterpret_cast<char*>(pointer1.ToPointer());
			 std::string in67(charPointer1, in->Length);
			 Marshal::FreeHGlobal(pointer1);
			 //This code converts p from System::string to std::string

			 System::IntPtr pointer2 = Marshal::StringToHGlobalAnsi(in1);
			 char* charPointer2 = reinterpret_cast<char*>(pointer2.ToPointer());
			 std::string in68(charPointer2, in1->Length);
			 Marshal::FreeHGlobal(pointer2);
			 //This code converts q from System::string to std::string

			 System::IntPtr pointer3 = Marshal::StringToHGlobalAnsi(in5);
			 char* charPointer3 = reinterpret_cast<char*>(pointer3.ToPointer());
			 std::string in69(charPointer3, in5->Length);
			 Marshal::FreeHGlobal(pointer3);
			 //This code converts msg from System::string to std::string

			 BigInteger d1=stringToBigInteger(in66); //Convert e from string to BigInteger
			 BigInteger p=stringToBigInteger(in67);
			 BigInteger q=stringToBigInteger(in68);
			 BigInteger msg=stringToBigInteger(in69);

			 BigInteger n;
			 String ^ n12=textBox6 ->Text;
			 System::IntPtr pointer4 = Marshal::StringToHGlobalAnsi(n12);
			 char* charPointer4 = reinterpret_cast<char*>(pointer4.ToPointer());
			 std::string in70(charPointer4, n12->Length);
			 Marshal::FreeHGlobal(pointer4);
			 n=stringToBigInteger(in70);

			 if (p!=0 && q!=0) //if n not entered
			 {n=p*q;
			 BigInteger totient= (q-1)*(p-1); //totient(n)=(q-1)*(p-1)

			 BigInteger temp;
			 BigInteger gcd=2;
			 BigInteger temp2=1;
			 BigInteger d2(d1); 
			 BigInteger totient2(totient);
			 BigInteger temp3;


			 BigInteger e1=modInverse(d1,totient);
 
			 BigInteger k = 2;

			 string n1=bigIntegerToString(n);
			 string totient1=bigIntegerToString(totient);
			 string e2=bigIntegerToString(e1);

			 String^ n11 = gcnew String(n1.c_str());  
			 in=System::Convert::ToString(n11);
			 textBox6->Text=in;
			 //Output n
			 
			 n11 = gcnew String(totient1.c_str());
			 in1=System::Convert::ToString(n11);
			 textBox7->Text=in1;
			 //Output totient
			 
			 n11 = gcnew String(e2.c_str());  
			 in3=System::Convert::ToString(n11);
			 textBox5->Text=in3;
			 //Output e
			 
			 }

			 if (p==0 && q==0)
				 textBox7->Text="0";

			 BigInteger d3(d1);
			 BigInteger res = 1;      
			 msg = msg % n;  
			 while (d3 > 0) 
			 { 
			  
				 if (d3%2==1) 
					 res = (res*msg) % n; 
   
			  d3 = d3/2;
				 msg = (msg*msg) % n;   
			 } 
			 //This while loop does fast exponentiation to calculate the plaintext

 
			 string res1=bigIntegerToString(res);
			 String^ n13 = gcnew String(res1.c_str()); 
			 in4=System::Convert::ToString(n13);
			 textBox10->Text=in4; //Output ciphertext
		 
		 
		 
		 }
private: System::Void label11_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 ifstream infile;
			 infile.open("C:\\e.txt");

			 string ee;
			 infile>>ee; //read number in file

			 String^ str2 = gcnew String(ee.c_str());  
			 Console::WriteLine(str2); //converts from std::string to System::string

			 textBox5->Text=str2; //Outputs the key

		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 String ^ in="187";
			 String ^ in1="160";
			 String ^ in3="11";
			 String ^ in2="17";
			 String ^ in4="7";
			 String ^ in5="23";

			 textBox6->Text=in; //Output n
			 textBox7->Text=in1; //Output totient
			 textBox2->Text=in3; //Output p
			 textBox3->Text=in2; //Output q
			 textBox5->Text=in4; //Output e
			 textBox8->Text=in5; //Output d

		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 ifstream infile;
			 infile.open("C:\\n.txt");

			 string n;
			 infile>>n; //read number in file

			 String^ str2 = gcnew String(n.c_str());  
			 Console::WriteLine(str2); //converts from std::string to System::string

			 textBox6->Text=str2; //Outputs n

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {


			 ifstream infile;
			 infile.open("C:\\d.txt");

			 string d;
			 infile>>d; //read number in file

			 String^ str2 = gcnew String(d.c_str());  
			 Console::WriteLine(str2); //converts from std::string to System::string

			 textBox8->Text=str2; //Outputs d
		 }
};
}
