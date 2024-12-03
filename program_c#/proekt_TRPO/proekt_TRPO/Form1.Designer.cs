namespace proekt_TRPO
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.buttonClear = new System.Windows.Forms.Button();
            this.buttonDobavlenie = new System.Windows.Forms.Button();
            this.labelVivod = new System.Windows.Forms.Label();
            this.listViewResult = new System.Windows.Forms.ListView();
            this.columnHeaderName = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.columnHeaderGramm = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.columnHeaderBelki = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.columnHeaderZiri = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.columnHeaderYglevodi = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.columnHeaderKal = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.buttonResult = new System.Windows.Forms.Button();
            this.labelVibrannieIngr = new System.Windows.Forms.Label();
            this.labelViborIngr = new System.Windows.Forms.Label();
            this.listBoxVibrannieIngr = new System.Windows.Forms.ListBox();
            this.labelNameBludo = new System.Windows.Forms.Label();
            this.textBoxNameBludo = new System.Windows.Forms.TextBox();
            this.comboBoxViborBludo = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // buttonClear
            // 
            this.buttonClear.Location = new System.Drawing.Point(46, 592);
            this.buttonClear.Name = "buttonClear";
            this.buttonClear.Size = new System.Drawing.Size(1064, 50);
            this.buttonClear.TabIndex = 21;
            this.buttonClear.Text = "Очистить все";
            this.buttonClear.UseVisualStyleBackColor = true;
            this.buttonClear.Click += new System.EventHandler(this.buttonClear_Click);
            // 
            // buttonDobavlenie
            // 
            this.buttonDobavlenie.Location = new System.Drawing.Point(178, 141);
            this.buttonDobavlenie.Name = "buttonDobavlenie";
            this.buttonDobavlenie.Size = new System.Drawing.Size(350, 36);
            this.buttonDobavlenie.TabIndex = 20;
            this.buttonDobavlenie.Text = "Добавить ингриндиенты";
            this.buttonDobavlenie.UseVisualStyleBackColor = true;
            this.buttonDobavlenie.Click += new System.EventHandler(this.buttonDobavlenie_Click_1);
            // 
            // labelVivod
            // 
            this.labelVivod.Location = new System.Drawing.Point(231, 306);
            this.labelVivod.Name = "labelVivod";
            this.labelVivod.Size = new System.Drawing.Size(751, 23);
            this.labelVivod.TabIndex = 19;
            this.labelVivod.Click += new System.EventHandler(this.labelVivod_Click);
            // 
            // listViewResult
            // 
            this.listViewResult.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.columnHeaderName,
            this.columnHeaderGramm,
            this.columnHeaderBelki,
            this.columnHeaderZiri,
            this.columnHeaderYglevodi,
            this.columnHeaderKal});
            this.listViewResult.HideSelection = false;
            this.listViewResult.Location = new System.Drawing.Point(46, 354);
            this.listViewResult.Name = "listViewResult";
            this.listViewResult.Size = new System.Drawing.Size(1064, 212);
            this.listViewResult.TabIndex = 18;
            this.listViewResult.UseCompatibleStateImageBehavior = false;
            this.listViewResult.View = System.Windows.Forms.View.Details;
            // 
            // columnHeaderName
            // 
            this.columnHeaderName.Text = "Название ингриндиентов";
            this.columnHeaderName.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.columnHeaderName.Width = 230;
            // 
            // columnHeaderGramm
            // 
            this.columnHeaderGramm.Text = "Грамм, гр";
            this.columnHeaderGramm.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.columnHeaderGramm.Width = 140;
            // 
            // columnHeaderBelki
            // 
            this.columnHeaderBelki.Text = "Белки, гр";
            this.columnHeaderBelki.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.columnHeaderBelki.Width = 126;
            // 
            // columnHeaderZiri
            // 
            this.columnHeaderZiri.Text = "Жиры, гр";
            this.columnHeaderZiri.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.columnHeaderZiri.Width = 62;
            // 
            // columnHeaderYglevodi
            // 
            this.columnHeaderYglevodi.Text = "Углеводы, гр";
            this.columnHeaderYglevodi.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.columnHeaderYglevodi.Width = 0;
            // 
            // columnHeaderKal
            // 
            this.columnHeaderKal.Text = "Калории, ккал";
            this.columnHeaderKal.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.columnHeaderKal.Width = 276;
            // 
            // buttonResult
            // 
            this.buttonResult.Enabled = false;
            this.buttonResult.Location = new System.Drawing.Point(46, 201);
            this.buttonResult.Name = "buttonResult";
            this.buttonResult.Size = new System.Drawing.Size(532, 42);
            this.buttonResult.TabIndex = 17;
            this.buttonResult.Text = "Рассчитать";
            this.buttonResult.UseVisualStyleBackColor = true;
            this.buttonResult.Click += new System.EventHandler(this.buttonResult_Click_1);
            // 
            // labelVibrannieIngr
            // 
            this.labelVibrannieIngr.AutoSize = true;
            this.labelVibrannieIngr.Location = new System.Drawing.Point(592, 9);
            this.labelVibrannieIngr.Name = "labelVibrannieIngr";
            this.labelVibrannieIngr.Size = new System.Drawing.Size(205, 20);
            this.labelVibrannieIngr.TabIndex = 16;
            this.labelVibrannieIngr.Text = "Выбранные ингридиенты:";
            // 
            // labelViborIngr
            // 
            this.labelViborIngr.AutoSize = true;
            this.labelViborIngr.Location = new System.Drawing.Point(334, 9);
            this.labelViborIngr.Name = "labelViborIngr";
            this.labelViborIngr.Size = new System.Drawing.Size(194, 20);
            this.labelViborIngr.TabIndex = 15;
            this.labelViborIngr.Text = "Выберите ингридиенты:";
            // 
            // listBoxVibrannieIngr
            // 
            this.listBoxVibrannieIngr.FormattingEnabled = true;
            this.listBoxVibrannieIngr.ItemHeight = 20;
            this.listBoxVibrannieIngr.Location = new System.Drawing.Point(596, 59);
            this.listBoxVibrannieIngr.Name = "listBoxVibrannieIngr";
            this.listBoxVibrannieIngr.Size = new System.Drawing.Size(514, 184);
            this.listBoxVibrannieIngr.TabIndex = 14;
            this.listBoxVibrannieIngr.SelectedIndexChanged += new System.EventHandler(this.listBoxVibrannieIngr_SelectedIndexChanged_1);
            // 
            // labelNameBludo
            // 
            this.labelNameBludo.AutoSize = true;
            this.labelNameBludo.Location = new System.Drawing.Point(42, 9);
            this.labelNameBludo.Name = "labelNameBludo";
            this.labelNameBludo.Size = new System.Drawing.Size(210, 20);
            this.labelNameBludo.TabIndex = 13;
            this.labelNameBludo.Text = "Введите название блюда:";
            // 
            // textBoxNameBludo
            // 
            this.textBoxNameBludo.Location = new System.Drawing.Point(46, 59);
            this.textBoxNameBludo.Name = "textBoxNameBludo";
            this.textBoxNameBludo.Size = new System.Drawing.Size(202, 26);
            this.textBoxNameBludo.TabIndex = 12;
            this.textBoxNameBludo.TextChanged += new System.EventHandler(this.textBoxNameBludo_TextChanged_1);
            this.textBoxNameBludo.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.textBoxNameBludo_KeyPress_1);
            // 
            // comboBoxViborBludo
            // 
            this.comboBoxViborBludo.FormattingEnabled = true;
            this.comboBoxViborBludo.Location = new System.Drawing.Point(334, 59);
            this.comboBoxViborBludo.Name = "comboBoxViborBludo";
            this.comboBoxViborBludo.Size = new System.Drawing.Size(194, 28);
            this.comboBoxViborBludo.TabIndex = 11;
            this.comboBoxViborBludo.SelectedIndexChanged += new System.EventHandler(this.comboBoxViborBludo_SelectedIndexChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1152, 650);
            this.Controls.Add(this.buttonClear);
            this.Controls.Add(this.buttonDobavlenie);
            this.Controls.Add(this.labelVivod);
            this.Controls.Add(this.listViewResult);
            this.Controls.Add(this.buttonResult);
            this.Controls.Add(this.labelVibrannieIngr);
            this.Controls.Add(this.labelViborIngr);
            this.Controls.Add(this.listBoxVibrannieIngr);
            this.Controls.Add(this.labelNameBludo);
            this.Controls.Add(this.textBoxNameBludo);
            this.Controls.Add(this.comboBoxViborBludo);
            this.Name = "Form1";
            this.Text = "Калькулятор калорий";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button buttonClear;
        private System.Windows.Forms.Button buttonDobavlenie;
        private System.Windows.Forms.Label labelVivod;
        private System.Windows.Forms.ListView listViewResult;
        private System.Windows.Forms.ColumnHeader columnHeaderName;
        private System.Windows.Forms.ColumnHeader columnHeaderGramm;
        private System.Windows.Forms.ColumnHeader columnHeaderBelki;
        private System.Windows.Forms.ColumnHeader columnHeaderZiri;
        private System.Windows.Forms.ColumnHeader columnHeaderYglevodi;
        private System.Windows.Forms.ColumnHeader columnHeaderKal;
        private System.Windows.Forms.Button buttonResult;
        private System.Windows.Forms.Label labelVibrannieIngr;
        private System.Windows.Forms.Label labelViborIngr;
        private System.Windows.Forms.ListBox listBoxVibrannieIngr;
        private System.Windows.Forms.Label labelNameBludo;
        private System.Windows.Forms.TextBox textBoxNameBludo;
        private System.Windows.Forms.ComboBox comboBoxViborBludo;
    }
}

