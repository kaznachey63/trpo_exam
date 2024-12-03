//без подытога.

namespace proekt {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();

            String^ ingridienti = "produkti.txt";
            if (!File::Exists(ingridienti)) {
                FileStream^ fs = File::Create(ingridienti);
                fs->Close();
                MessageBox::Show("Создан файл для ингридиентов");
            }

        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::ComboBox^ comboBoxViborBludo;
    protected:
    private: System::Windows::Forms::TextBox^ textBoxNameBludo;
    private: System::Windows::Forms::Label^ labelNameBludo;
    private: System::Windows::Forms::ListBox^ listBoxVibrannieIngr;
    private: System::Windows::Forms::Label^ labelViborIngr;
    private: System::Windows::Forms::Label^ labelVibrannieIngr;
    private: System::Windows::Forms::Button^ buttonResult;
    private: System::Windows::Forms::ListView^ listViewResult;
    private: System::Windows::Forms::Label^ labelVivod;
    private: System::Windows::Forms::ColumnHeader^ columnHeaderGramm;
    private: System::Windows::Forms::ColumnHeader^ columnHeaderBelki;
    private: System::Windows::Forms::ColumnHeader^ columnHeaderZiri;
    private: System::Windows::Forms::ColumnHeader^ columnHeaderYglevodi;
    private: System::Windows::Forms::ColumnHeader^ columnHeaderKal;
    private: System::Windows::Forms::ColumnHeader^ columnHeaderName;
    private: System::Windows::Forms::Button^ buttonDobavlenie;
    private: System::Windows::Forms::Button^ buttonClear;



    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->comboBoxViborBludo = (gcnew System::Windows::Forms::ComboBox());
            this->textBoxNameBludo = (gcnew System::Windows::Forms::TextBox());
            this->labelNameBludo = (gcnew System::Windows::Forms::Label());
            this->listBoxVibrannieIngr = (gcnew System::Windows::Forms::ListBox());
            this->labelViborIngr = (gcnew System::Windows::Forms::Label());
            this->labelVibrannieIngr = (gcnew System::Windows::Forms::Label());
            this->buttonResult = (gcnew System::Windows::Forms::Button());
            this->listViewResult = (gcnew System::Windows::Forms::ListView());
            this->columnHeaderName = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderGramm = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderBelki = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderZiri = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderYglevodi = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderKal = (gcnew System::Windows::Forms::ColumnHeader());
            this->labelVivod = (gcnew System::Windows::Forms::Label());
            this->buttonDobavlenie = (gcnew System::Windows::Forms::Button());
            this->buttonClear = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // comboBoxViborBludo
            // 
            this->comboBoxViborBludo->FormattingEnabled = true;
            this->comboBoxViborBludo->Location = System::Drawing::Point(314, 68);
            this->comboBoxViborBludo->Name = L"comboBoxViborBludo";
            this->comboBoxViborBludo->Size = System::Drawing::Size(194, 28);
            this->comboBoxViborBludo->TabIndex = 0;
            this->comboBoxViborBludo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxViborBludo_SelectedIndexChanged);
            // 
            // textBoxNameBludo
            // 
            this->textBoxNameBludo->Location = System::Drawing::Point(26, 68);
            this->textBoxNameBludo->Name = L"textBoxNameBludo";
            this->textBoxNameBludo->Size = System::Drawing::Size(202, 26);
            this->textBoxNameBludo->TabIndex = 1;
            this->textBoxNameBludo->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxNameBludo_TextChanged);
            this->textBoxNameBludo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxNameBludo_KeyPress);
            // 
            // labelNameBludo
            // 
            this->labelNameBludo->AutoSize = true;
            this->labelNameBludo->Location = System::Drawing::Point(22, 18);
            this->labelNameBludo->Name = L"labelNameBludo";
            this->labelNameBludo->Size = System::Drawing::Size(210, 20);
            this->labelNameBludo->TabIndex = 2;
            this->labelNameBludo->Text = L"Введите название блюда:";
            // 
            // listBoxVibrannieIngr
            // 
            this->listBoxVibrannieIngr->FormattingEnabled = true;
            this->listBoxVibrannieIngr->ItemHeight = 20;
            this->listBoxVibrannieIngr->Location = System::Drawing::Point(576, 68);
            this->listBoxVibrannieIngr->Name = L"listBoxVibrannieIngr";
            this->listBoxVibrannieIngr->Size = System::Drawing::Size(514, 184);
            this->listBoxVibrannieIngr->TabIndex = 3;
            this->listBoxVibrannieIngr->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBoxVibrannieIngr_SelectedIndexChanged);
            // 
            // labelViborIngr
            // 
            this->labelViborIngr->AutoSize = true;
            this->labelViborIngr->Location = System::Drawing::Point(314, 18);
            this->labelViborIngr->Name = L"labelViborIngr";
            this->labelViborIngr->Size = System::Drawing::Size(194, 20);
            this->labelViborIngr->TabIndex = 4;
            this->labelViborIngr->Text = L"Выберите ингридиенты:";
            // 
            // labelVibrannieIngr
            // 
            this->labelVibrannieIngr->AutoSize = true;
            this->labelVibrannieIngr->Location = System::Drawing::Point(572, 18);
            this->labelVibrannieIngr->Name = L"labelVibrannieIngr";
            this->labelVibrannieIngr->Size = System::Drawing::Size(205, 20);
            this->labelVibrannieIngr->TabIndex = 5;
            this->labelVibrannieIngr->Text = L"Выбранные ингридиенты:";
            // 
            // buttonResult
            // 
            this->buttonResult->Enabled = false;
            this->buttonResult->Location = System::Drawing::Point(26, 210);
            this->buttonResult->Name = L"buttonResult";
            this->buttonResult->Size = System::Drawing::Size(532, 42);
            this->buttonResult->TabIndex = 6;
            this->buttonResult->Text = L"Рассчитать";
            this->buttonResult->UseVisualStyleBackColor = true;
            this->buttonResult->Click += gcnew System::EventHandler(this, &MyForm::buttonResult_Click);
            // 
            // listViewResult
            // 
            this->listViewResult->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
                this->columnHeaderName,
                    this->columnHeaderGramm, this->columnHeaderBelki, this->columnHeaderZiri, this->columnHeaderYglevodi, this->columnHeaderKal
            });
            this->listViewResult->HideSelection = false;
            this->listViewResult->Location = System::Drawing::Point(26, 363);
            this->listViewResult->Name = L"listViewResult";
            this->listViewResult->Size = System::Drawing::Size(1064, 212);
            this->listViewResult->TabIndex = 7;
            this->listViewResult->UseCompatibleStateImageBehavior = false;
            this->listViewResult->View = System::Windows::Forms::View::Details;
            // 
            // columnHeaderName
            // 
            this->columnHeaderName->Text = L"Название ингриндиентов";
            this->columnHeaderName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->columnHeaderName->Width = 230;
            // 
            // columnHeaderGramm
            // 
            this->columnHeaderGramm->Text = L"Грамм, гр";
            this->columnHeaderGramm->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->columnHeaderGramm->Width = 140;
            // 
            // columnHeaderBelki
            // 
            this->columnHeaderBelki->Text = L"Белки, гр";
            this->columnHeaderBelki->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->columnHeaderBelki->Width = 126;
            // 
            // columnHeaderZiri
            // 
            this->columnHeaderZiri->Text = L"Жиры, гр";
            this->columnHeaderZiri->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->columnHeaderZiri->Width = 62;
            // 
            // columnHeaderYglevodi
            // 
            this->columnHeaderYglevodi->Text = L"Углеводы, гр";
            this->columnHeaderYglevodi->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->columnHeaderYglevodi->Width = 0;
            // 
            // columnHeaderKal
            // 
            this->columnHeaderKal->Text = L"Калории, ккал";
            this->columnHeaderKal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->columnHeaderKal->Width = 276;
            // 
            // labelVivod
            // 
            this->labelVivod->Location = System::Drawing::Point(268, 321);
            this->labelVivod->Name = L"labelVivod";
            this->labelVivod->Size = System::Drawing::Size(751, 23);
            this->labelVivod->TabIndex = 8;
            // 
            // buttonDobavlenie
            // 
            this->buttonDobavlenie->Location = System::Drawing::Point(158, 150);
            this->buttonDobavlenie->Name = L"buttonDobavlenie";
            this->buttonDobavlenie->Size = System::Drawing::Size(350, 36);
            this->buttonDobavlenie->TabIndex = 9;
            this->buttonDobavlenie->Text = L"Добавить ингриндиенты";
            this->buttonDobavlenie->UseVisualStyleBackColor = true;
            this->buttonDobavlenie->Click += gcnew System::EventHandler(this, &MyForm::buttonDobavlenie_Click);
            // 
            // buttonClear
            // 
            this->buttonClear->Location = System::Drawing::Point(26, 601);
            this->buttonClear->Name = L"buttonClear";
            this->buttonClear->Size = System::Drawing::Size(1064, 50);
            this->buttonClear->TabIndex = 10;
            this->buttonClear->Text = L"Очистить все";
            this->buttonClear->UseVisualStyleBackColor = true;
            this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1112, 679);
            this->Controls->Add(this->buttonClear);
            this->Controls->Add(this->buttonDobavlenie);
            this->Controls->Add(this->labelVivod);
            this->Controls->Add(this->listViewResult);
            this->Controls->Add(this->buttonResult);
            this->Controls->Add(this->labelVibrannieIngr);
            this->Controls->Add(this->labelViborIngr);
            this->Controls->Add(this->listBoxVibrannieIngr);
            this->Controls->Add(this->labelNameBludo);
            this->Controls->Add(this->textBoxNameBludo);
            this->Controls->Add(this->comboBoxViborBludo);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        textBoxNameBludo->Select();

        int listViewWidth = listViewResult->ClientSize.Width;
        int columnCount = listViewResult->Columns->Count;
        int columnWidth = listViewWidth / columnCount;

        for each (ColumnHeader ^ column in listViewResult->Columns) {
            column->Width = columnWidth;
        }
    }

    private: System::Void textBoxNameBludo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        textBoxNameBludo->Enabled = true;

        if (textBoxNameBludo->Text->Length == 0 || listBoxVibrannieIngr->SelectedItems->Count == 0) {
            buttonResult->Enabled = false;
        }
        else {
            buttonResult->Enabled = true;
        }
    }

    private: System::Void listBoxVibrannieIngr_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        if (textBoxNameBludo->Text->Length == 0 || listBoxVibrannieIngr->SelectedItems->Count == 0) {
            buttonResult->Enabled = false;
        }
        else {
            buttonResult->Enabled = true;
        }
    }

    private: System::Void textBoxNameBludo_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && e->KeyChar != ' ') {
            e->Handled = true;
        }
    }

    private: System::Void buttonResult_Click(System::Object^ sender, System::EventArgs^ e) {
        listViewResult->Items->Clear();
        System::String^ bludo = textBoxNameBludo->Text;
        labelVivod->Text = "Ингридиенты блюда `" + bludo + "` анализированы, результаты представлены ниже";

        double gram = 0;
        double belki = 0;
        double ziri = 0;
        double uglivodi = 0;
        double kalori = 0;

        for each (String ^ item in listBoxVibrannieIngr->Items) {
            try {
                StreamReader^ sr = gcnew StreamReader("produkti.txt", System::Text::Encoding::GetEncoding(1251));
                String^ line;

                while ((line = sr->ReadLine()) != nullptr) {
                    array<String^>^ data = line->Split(' ');

                    if (data->Length >= 6) {
                        if (data[0] == item) {
                            double grams, proteins, fats, carbs, kalories;

                            if (Double::TryParse(data[1], grams) &&
                                Double::TryParse(data[2], proteins) &&
                                Double::TryParse(data[3], fats) &&
                                Double::TryParse(data[4], carbs) &&
                                Double::TryParse(data[5], kalories)) {

                                ListViewItem^ listItem = gcnew ListViewItem(item); 
                                listItem->SubItems->Add(grams.ToString()); 
                                listItem->SubItems->Add(proteins.ToString()); 
                                listItem->SubItems->Add(fats.ToString()); 
                                listItem->SubItems->Add(carbs.ToString()); 
                                listItem->SubItems->Add(kalories.ToString()); 
                                listViewResult->Items->Add(listItem);

                                gram += grams;
                                belki += proteins;
                                ziri += fats;
                                uglivodi += carbs;
                                kalori += kalories;
                            }
                            else {
                                continue; 
                            }
                        }
                    }
                }

                sr->Close();
            }
            catch (FileNotFoundException^ ex) {
                MessageBox::Show("Файл с данными не найден", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
            catch (IOException^ ex) {
                MessageBox::Show("Ошибка ввода-вывода при чтении файла", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
            catch (Exception^ ex) {
                MessageBox::Show("Произошла ошибка при чтении файла", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
        }

        ListViewItem^ totalItem = gcnew ListViewItem();
        totalItem->Text = "Итого";
        totalItem->SubItems->Add(gram.ToString());
        totalItem->SubItems->Add(belki.ToString());
        totalItem->SubItems->Add(ziri.ToString());
        totalItem->SubItems->Add(uglivodi.ToString());
        totalItem->SubItems->Add(kalori.ToString());

        listViewResult->Items->Add(totalItem);
    }

    private: System::Void buttonDobavlenie_Click(System::Object^ sender, System::EventArgs^ e) {
        if (comboBoxViborBludo->Items->Count > 0) {
            MessageBox::Show("Ингриндиенты уже были добавлены", "Повторное добавление", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        try {
            int count = 0;
            StreamReader^ sr = gcnew StreamReader("produkti.txt", System::Text::Encoding::GetEncoding(1251));

            String^ line;
            comboBoxViborBludo->Items->Clear();

            while (!sr->EndOfStream) {
                line = sr->ReadLine();
                array<String^>^ data = line->Split(' ');

                comboBoxViborBludo->Items->Add(data[0]);
                count++;
            }
            sr->Close();

            if (count > 0) {
                MessageBox::Show("Ингриндиенты успешно добавлены");
            }
            else {
                MessageBox::Show("Ингриндиенты не были добавлены");
            }
        }
        catch (System::IO::FileNotFoundException^ ex) {
            MessageBox::Show("Файл с данными не найден", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    private: System::Void comboBoxViborBludo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        String^ selectedProduct = comboBoxViborBludo->SelectedItem->ToString();
        listBoxVibrannieIngr->Items->Add(selectedProduct);
    }

    private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
        if (listBoxVibrannieIngr->Items->Count == 0 && textBoxNameBludo->Text->Length == 0) {
            MessageBox::Show("Нечего очищать", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        listBoxVibrannieIngr->Items->Clear();

        textBoxNameBludo->Text = "";

        if (!textBoxNameBludo->Enabled) {
            textBoxNameBludo->Enabled = true;
        }

        listViewResult->Items->Clear();

        labelVivod->Text = "";

        MessageBox::Show("Все очищено!\nВперед к новым рецептам!");
    }
    };
}
