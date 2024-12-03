using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace proekt_TRPO
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            string ingridienti = "produkti.txt";
            if (!File.Exists(ingridienti))
            {
                using (FileStream fs = File.Create(ingridienti))
                {
                    // Пустой файл создается
                }
                MessageBox.Show("Создан файл для ингредиентов");
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBoxNameBludo.Select();

            int listViewWidth = listViewResult.ClientSize.Width;
            int columnCount = listViewResult.Columns.Count;
            int columnWidth = listViewWidth / columnCount;

            foreach (ColumnHeader column in listViewResult.Columns)
            {
                column.Width = columnWidth;
            }
        }

        private void buttonDobavlenie_Click_1(object sender, EventArgs e)
        {
            if (comboBoxViborBludo.Items.Count > 0)
            {
                MessageBox.Show("Ингредиенты уже были добавлены", "Повторное добавление", MessageBoxButtons.OK, MessageBoxIcon.Information);
                return;
            }

            try
            {
                int count = 0;
                // Чтение файла с кодировкой UTF-8
                using (StreamReader sr = new StreamReader("produkti.txt", Encoding.UTF8))
                {
                    string line;
                    comboBoxViborBludo.Items.Clear();

                    while ((line = sr.ReadLine()) != null)
                    {
                        string[] data = line.Split(' ');
                        comboBoxViborBludo.Items.Add(data[0]);
                        count++;
                    }
                }

                if (count > 0)
                {
                    MessageBox.Show("Ингредиенты успешно добавлены");
                }
                else
                {
                    MessageBox.Show("Ингредиенты не были добавлены");
                }
            }
            catch (FileNotFoundException)
            {
                MessageBox.Show("Файл с данными не найден", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void buttonResult_Click_1(object sender, EventArgs e)
        {
            listViewResult.Items.Clear();
            string bludo = textBoxNameBludo.Text;
            labelVivod.Text = $"Ингредиенты блюда `{bludo}` анализированы, результаты представлены ниже";

            double gram = 0, belki = 0, ziri = 0, uglivodi = 0, kalori = 0;

            foreach (string item in listBoxVibrannieIngr.Items)
            {
                try
                {
                    // Чтение файла с кодировкой UTF-8
                    using (StreamReader sr = new StreamReader("produkti.txt", Encoding.UTF8))
                    {
                        string line;
                        while ((line = sr.ReadLine()) != null)
                        {
                            string[] data = line.Split(' ');

                            if (data.Length >= 6 && data[0] == item)
                            {
                                if (double.TryParse(data[1], out double grams) &&
                                    double.TryParse(data[2], out double proteins) &&
                                    double.TryParse(data[3], out double fats) &&
                                    double.TryParse(data[4], out double carbs) &&
                                    double.TryParse(data[5], out double kalories))
                                {
                                    ListViewItem listItem = new ListViewItem(item);
                                    listItem.SubItems.Add(grams.ToString());
                                    listItem.SubItems.Add(proteins.ToString());
                                    listItem.SubItems.Add(fats.ToString());
                                    listItem.SubItems.Add(carbs.ToString());
                                    listItem.SubItems.Add(kalories.ToString());
                                    listViewResult.Items.Add(listItem);

                                    gram += grams;
                                    belki += proteins;
                                    ziri += fats;
                                    uglivodi += carbs;
                                    kalori += kalories;
                                }
                            }
                        }
                    }
                }
                catch (FileNotFoundException)
                {
                    MessageBox.Show("Файл с данными не найден", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
                }
                catch (IOException)
                {
                    MessageBox.Show("Ошибка ввода-вывода при чтении файла", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
                }
            }

            ListViewItem totalItem = new ListViewItem("Итого");
            totalItem.SubItems.Add(gram.ToString());
            totalItem.SubItems.Add(belki.ToString());
            totalItem.SubItems.Add(ziri.ToString());
            totalItem.SubItems.Add(uglivodi.ToString());
            totalItem.SubItems.Add(kalori.ToString());

            listViewResult.Items.Add(totalItem);
        }

        private void textBoxNameBludo_KeyPress_1(object sender, KeyPressEventArgs e)
        {
            if (!char.IsLetter(e.KeyChar) && !char.IsControl(e.KeyChar) && e.KeyChar != ' ')
            {
                e.Handled = true;
            }
        }

        private void textBoxNameBludo_TextChanged_1(object sender, EventArgs e)
        {
            textBoxNameBludo.Enabled = true;
            buttonResult.Enabled = textBoxNameBludo.Text.Length > 0 && listBoxVibrannieIngr.SelectedItems.Count > 0;
        }

        private void listBoxVibrannieIngr_SelectedIndexChanged_1(object sender, EventArgs e)
        {
            buttonResult.Enabled = textBoxNameBludo.Text.Length > 0 && listBoxVibrannieIngr.SelectedItems.Count > 0;

            if (textBoxNameBludo.Text.Length == 0 || listBoxVibrannieIngr.SelectedItems.Count == 0)
            {
                buttonResult.Enabled = false;
            }
            else
            {
                buttonResult.Enabled = true;
            }
        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            textBoxNameBludo.Clear();
            listBoxVibrannieIngr.Items.Clear();
            listViewResult.Items.Clear();
            labelVivod.Text = "";
        }

        private void labelVivod_Click(object sender, EventArgs e)
        {

        }

        private void comboBoxViborBludo_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (comboBoxViborBludo.SelectedItem != null)
            {
                // Получаем выбранный элемент из ComboBox
                string selectedItem = comboBoxViborBludo.SelectedItem.ToString();

                // Добавляем элемент в ListBox, если его там нет
                if (!listBoxVibrannieIngr.Items.Contains(selectedItem))
                {
                    listBoxVibrannieIngr.Items.Add(selectedItem);
                }
            }
        }
    }
}
