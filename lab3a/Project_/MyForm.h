#pragma once
#include <string>
#include <iostream>
namespace Project_ {

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
    private: System::Windows::Forms::PictureBox^ pictureBox1;

    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

    private: System::Windows::Forms::Label^ label1;


    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::ComponentModel::IContainer^ components;
    protected:

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
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(13, 68);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(642, 400);
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(15, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(100, 17);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Введите х и у:";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(18, 41);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(18, 17);
            this->label2->TabIndex = 7;
            this->label2->Text = L"х:";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(177, 41);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(19, 17);
            this->label3->TabIndex = 8;
            this->label3->Text = L"у:";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(395, 39);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(99, 23);
            this->button1->TabIndex = 9;
            this->button1->Text = L"Построить";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(42, 39);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(110, 22);
            this->textBox1->TabIndex = 10;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
            this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(202, 40);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(110, 22);
            this->textBox2->TabIndex = 11;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged_1);
            this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(696, 481);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Margin = System::Windows::Forms::Padding(4);
            this->MaximizeBox = false;
            this->Name = L"MyForm";
            this->Text = L"Графики y=f(x)";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        int l, b, h, w;
    private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        //this->textBox1->Text = "ew";
        h = pictureBox1->Height;            // Ширина
        w = pictureBox1->Width;             // Высота

        // Osi
        e->Graphics->DrawLine(Pens::Black, 0, h / 2, w, h / 2);
        e->Graphics->DrawLine(Pens::Black, w / 2, 0, w / 2, h);

        // Strelki

        e->Graphics->DrawLine(Pens::Black, w - 25, h / 2 + 8, w, h / 2);
        e->Graphics->DrawLine(Pens::Black, w - 25, h / 2 - 8, w, h / 2);
        e->Graphics->DrawLine(Pens::Black, w / 2 - 8, 25, w / 2, 0);
        e->Graphics->DrawLine(Pens::Black, w / 2 + 8, 25, w / 2, 0);


        // Podpisi
        e->Graphics->DrawString("X", this->Font, Brushes::Black, w - 15, h / 2 - 25);
        e->Graphics->DrawString("Y", this->Font, Brushes::Black, w / 2 - 25, 5);

        //double x1, x2, y1, y2, x, y, mx, my, x0, y0, dx, dt;


        //x1 = -xm;    // from
        //x2 = xm;     // to

        //dx = 0.001;     // step

        //y1 = -ym;
        //y2 = ym ;

        //x = x1;
        //while (x <= x2)
        //{
        //    y = x + Math::Cos(Math::Abs(x));
        //    if (y < y1) y1 = y;
        //    if (y > y2) y2 = y;
        //    x += dx;
        //}

        //my = h / (y2 - y1);           // mashtab po osi y
        //mx = w / (x2 - x1);                 // mashtab po osi x

        //x = x1;
        //y1 =  x1 + Math::Cos(Math::Abs(x1));
        //x += dx;
        //// График

        //while (x <= x2)
        //{
        //    y = x + Math::Cos(Math::Abs(x));
        //    e->Graphics->DrawLine(Pens::BlueViolet, (int)(x1 * mx + w / 2), (int)(h / 2 - y1 * my), (int)(x * mx + w / 2), (int)(h / 2 - y * my));
        //    x1 = x;
        //    y1 = y;
        //    x += dx;
        //}
        //double a = 1, b = 0.15;

        //x1 = -20;    // from
        //x2 = 20;     // to

        //dt = 0.001;     // step

        //y1 = -20;
        //y2 = 20;

        //my = h / (y2 - y1);           // mashtab po osi y
        //mx = w / (x2 - x1);                 // mashtab po osi x

        //double t = 0;
        //// График

        //x1 = a * Math::Exp(b * t) * Math::Cos(t);
        //y1 = a * Math::Exp(b * t) * Math::Sin(t);
        //t += dt;
        //while (t <= 100)
        //{
        //    x = a * Math::Exp(b * t) * Math::Cos(t);
        //    y = a * Math::Exp(b * t) * Math::Sin(t);
        //    e->Graphics->DrawLine(Pens::LightSeaGreen, (int)(x1 * mx + w / 2), (int)(h / 2 - y1 * my), (int)(x * mx + w / 2), (int)(h / 2 - y * my));
        //    t += dt;
        //    x1 = x;
        //    y1 = y;
        //}
    }
           private:
               static int size = 1;
               static array<int>^ Arr = gcnew array<int>(50);
               static int xm;
               static int ym;
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    array<String^>^ mas;
    array<Char>^ ch;
    std::string s = "";
    ch = gcnew array<Char>(1);
    ch[0] = ' ';
    Graphics^ g = pictureBox1->CreateGraphics();
    if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0))
    {
        //size = Convert::ToInt32(textBox2->Text);
        mas = textBox1->Text->Split(ch);
        Arr[0] = Convert::ToInt32(mas[0]);
        mas = textBox2->Text->Split(ch);
        Arr[1] = Convert::ToInt32(mas[0]);
        xm = Arr[0];
        ym = Arr[1]; 

        double x1, x2, y1, y2, x, y, mx, my, x0, y0, dx, dt;

        double const pi = 3.14;

        x1 = -xm;    // from
        x2 = xm;     // to

        dx = 0.001;     // step

        y1 = -ym;
        y2 = ym;


        my = h/100;           // mashtab po osi y
        mx = w/100;                 // mashtab po osi x

        x = x1;
        //y1 = x1 + Math::Cos(Math::Abs(x1));
        y1 = x1 * x1 - Math::Sin(pi * x1 * x1);
        x += dx;
        // График

        while (x <= x2)
        {
            //y = x + Math::Cos(Math::Abs(x));
            y = x * x - Math::Sin(pi * x * x);
            if ((y <= ym) && (y >= -ym) && (x <= xm) && (x >= -xm)) {
                g->DrawLine(Pens::BlueViolet, (int)(x1 * mx + w / 2), (int)(h / 2 - y1 * my), (int)(x * mx + w / 2), (int)(h / 2 - y * my));
            }
            x1 = x;
            y1 = y;
            x += dx;
        }
        double a = 1, b = 0.15;

        x1 = -xm;    // from
        x2 = xm;     // to

        dt = 0.001;     // step

        y1 = -ym;
        y2 = ym;

        my = h/100;           // mashtab po osi y
        mx = w/100;                 // mashtab po osi x

        double t = -2 * pi;
        // График

        //x1 = a * Math::Exp(b * t) * Math::Cos(t);
        //y1 = a * Math::Exp(b * t) * Math::Sin(t);
        x1 = (1.3 * t * t) / (1 + t * t);
        y1 = (1.3 * t * t * t) / (1 + t * t);
        t += dt;
        while (t <= 2 * pi)
        {
            //x = a * Math::Exp(b * t) * Math::Cos(t);
            //y = a * Math::Exp(b * t) * Math::Sin(t);
            x = (1.3 * t * t) / (1 + t * t); // a > 0
            y = (1.3 * t * t * t) / (1 + t * t);
            if ((y <= ym) && (y>=-ym) && (x <= xm) && (x >= -xm)) {
            g->DrawLine(Pens::LightSeaGreen, (int)(x1 * mx + w / 2), (int)(h / 2 - y1 * my), (int)(x * mx + w / 2), (int)(h / 2 - y * my));
                }
            t += dt;
            x1 = x;
            y1 = y;
        }

    }
   
   // pictureBox1_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e);
   // pictureBox1_Paint(sender, e1);
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
    private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8)) return;
        //Остальные символы запрещены
        e->Handled = true;
    }
};
}
