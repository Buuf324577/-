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
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ button2;
    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(10, 58);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(521, 355);
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(152, 32);
            this->textBox2->Margin = System::Windows::Forms::Padding(2);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(84, 20);
            this->textBox2->TabIndex = 11;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged_1);
            this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(32, 32);
            this->textBox1->Margin = System::Windows::Forms::Padding(2);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(84, 20);
            this->textBox1->TabIndex = 10;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
            this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(371, 31);
            this->button1->Margin = System::Windows::Forms::Padding(2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(74, 23);
            this->button1->TabIndex = 9;
            this->button1->Text = L"Построить";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(133, 33);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(15, 13);
            this->label3->TabIndex = 8;
            this->label3->Text = L"у:";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(14, 33);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(15, 13);
            this->label2->TabIndex = 7;
            this->label2->Text = L"х:";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(11, 7);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(77, 13);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Введите х и у:";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(268, 33);
            this->textBox3->Margin = System::Windows::Forms::Padding(2);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(84, 20);
            this->textBox3->TabIndex = 13;
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
            this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(249, 34);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(15, 13);
            this->label4->TabIndex = 12;
            this->label4->Text = L"z:";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(451, 31);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 23);
            this->button2->TabIndex = 14;
            this->button2->Text = L"Стереть";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(543, 440);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"MyForm";
            this->Text = L"Поверхность z=f(x,y)";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        static double x0 = 4, Y0 = -0.5, z0 = 3, alf = 4.31, bet = 4.92, A = -6.5, a = -6.5;
        static double Xmin = -1.5, Xmax = 1.5, Ymin = -1.5, Ymax = 1.5;
        static int Width = 200, Height = 200;
        static double h = 0.075, h0 = 0;
        static array<Point>^ ob = gcnew array<Point>(4);

        //------------------------------------------------------------------------------
        //*********** void IJ(double x, double y, double z, array<int>^ ar) **********
    private: void IJ(double x, double y, double z, array<int>^ ar)
    {
        double Xn, Yn, Zn;

        //Осуществляем перенос системы координат в т.(x0,Y0,z0)
        Xn = (x - x0) * Math::Cos(alf) - (y - Y0) * Math::Sin(alf);
        Yn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Cos(bet) - (z - z0) * Math::Sin(bet);
        Zn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Sin(bet) + (z - z0) * Math::Cos(bet);

        //Делаем проекцию на плоскость
        Xn /= Zn / A + 1;
        Yn /= Zn / a + 1;

        //Масштабируем оси x и y
        ar[0] = Width * (Xn - Xmin) / (Xmax - Xmin)/1.25;
        ar[1] = Height * (Yn - Ymax) / (Ymin - Ymax) / 1.25;
    }
           //******* void IJ(double x, double y, double z, array<int>^ ar) **********
           //------------------------------------------------------------------------------

           //------------------------------------------------------------------------------
           //****** double F1(double x1,double y1) *****************************
    private: double F1(double x1, double y1)
    {
        return x1 * x1 + Math::Sin(x1 + y1 * y1);
    }
           //***** double F1(double x1,double y1) *****************************
           //------------------------------------------------------------------------------



           //Рисование поверхности
    private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

        int i3, j3;
        int i1, j1, i2, j2;
        array<int>^ a1;
        array<int>^ a2;
        a1 = gcnew array<int>(2);
        a2 = gcnew array<int>(2);
        IJ(0, 0, 0, a1);

        //Рисуем и подписываем ось x
        IJ(4, 0, 0, a2);
        e->Graphics->DrawLine(Pens::Red, a1[0], a1[1], a2[0], a2[1]);
        e->Graphics->DrawString("X", this->Font, Brushes::Red, a2[0] + 3, a2[1]);

        //Рисуем и подписываем ось y
        IJ(0, 4, 0, a2);
        e->Graphics->DrawLine(Pens::Red, a1[0], a1[1], a2[0], a2[1]);
        e->Graphics->DrawString("Y", this->Font, Brushes::Red, a2[0] + 3, a2[1]);

        //Рисуем и подписываем ось z
        IJ(0, 0, 4.3, a2);
        e->Graphics->DrawLine(Pens::Red, a1[0], a1[1], a2[0], a2[1]);
        e->Graphics->DrawString("Z", this->Font, Brushes::Red, a2[0] + 3, a2[1] - 3);

        /*double y = 1.5;
        for (j3 = -ym * y; j3 < ym * y; j3++)
        {
            for (i3 = -xm * y; i3 < xm * y; i3++)
            {
                IJ(h0 + h * i3, h0 + h * j3, F1(h0 + h * i3, h0 + h * j3), a1);
                ob[0].X = a1[0];
                ob[0].Y = a1[1];
                IJ(h0 + h * i3, h0 + h * (j3 + 1), F1(h0 + h * i3, h0 + h * (j3 + 1)), a1);
                ob[1].X = a1[0];
                ob[1].Y = a1[1];
                IJ(h0 + h * (i3 + 1), h0 + h * (j3 + 1), F1(h0 + h * (i3 + 1), h0 + h * (j3 + 1)), a1);
                ob[2].X = a1[0];
                ob[2].Y = a1[1];
                IJ(h0 + h * (i3 + 1), h0 + h * j3, F1(h0 + h * (i3 + 1), h0 + h * j3), a1);
                ob[3].X = a1[0];
                ob[3].Y = a1[1];
                e->Graphics->DrawPolygon(Pens::Tan, ob);


            }
        }*/


    }
 private:
     static int size = 1;
     static array<int>^ Arr = gcnew array<int>(50);
     static int xm;
     static int ym;
     static int zm;
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
        mas = textBox3->Text->Split(ch);
        Arr[2] = Convert::ToInt32(mas[0]);
        xm = Arr[0];
        ym = Arr[1];
        zm = Arr[2];
        double y = 1;
        int i3, j3;
        array<int>^ a1;
        a1 = gcnew array<int>(2);
        if (xm > 110) {
            int xm1=xm;
            while (xm1 > 110)
            {
                xm1 = xm1 - 10;
            }
            for (j3 = -ym; j3 < ym ; j3++)
            {
                for (i3 = -xm; i3 < xm1; i3++)
                {
                    IJ(h0 + h * i3, h0 + h * j3, F1(h0 + h * i3, h0 + h * j3), a1);
                    ob[0].X = a1[0];
                    ob[0].Y = a1[1];
                    IJ(h0 + h * i3, h0 + h * (j3 + 1), F1(h0 + h * i3, h0 + h * (j3 + 1)), a1);
                    ob[1].X = a1[0];
                    ob[1].Y = a1[1];
                    IJ(h0 + h * (i3 + 1), h0 + h * (j3 + 1), F1(h0 + h * (i3 + 1), h0 + h * (j3 + 1)), a1);
                    ob[2].X = a1[0];
                    ob[2].Y = a1[1];
                    IJ(h0 + h * (i3 + 1), h0 + h * j3, F1(h0 + h * (i3 + 1), h0 + h * j3), a1);
                    ob[3].X = a1[0];
                    ob[3].Y = a1[1];
                        if (F1(h0 + h * (i3 + 1), h0 + h * j3)*4 <= zm && F1(h0 + h * (i3 + 1), h0 + h * j3) * 4 >= -zm){
                        g->DrawPolygon(Pens::Tan, ob);
                    }

                }
            }
        }
        else {
            for (j3 = -ym; j3 < ym ; j3++)
            {
                for (i3 = -xm; i3 < xm ; i3++)
                {
                    IJ(h0 + h * i3, h0 + h * j3, F1(h0 + h * i3, h0 + h * j3), a1);
                    ob[0].X = a1[0];
                    ob[0].Y = a1[1];
                    IJ(h0 + h * i3, h0 + h * (j3 + 1), F1(h0 + h * i3, h0 + h * (j3 + 1)), a1);
                    ob[1].X = a1[0];
                    ob[1].Y = a1[1];
                    IJ(h0 + h * (i3 + 1), h0 + h * (j3 + 1), F1(h0 + h * (i3 + 1), h0 + h * (j3 + 1)), a1);
                    ob[2].X = a1[0];
                    ob[2].Y = a1[1];
                    IJ(h0 + h * (i3 + 1), h0 + h * j3, F1(h0 + h * (i3 + 1), h0 + h * j3), a1);
                    ob[3].X = a1[0];
                    ob[3].Y = a1[1];
                     if (F1(h0 + h * (i3 + 1), h0 + h * j3)*5 <= zm && F1(h0 + h * (i3 + 1), h0 + h * j3)*5  >= -zm){
                        g->DrawPolygon(Pens::Tan, ob);
                    }


                }
            }
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


    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    pictureBox1->Invalidate();
}
};
}
