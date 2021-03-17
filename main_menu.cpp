using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyFirstForm
{
    public partial class Form3 : Form
    {
        Random rand = new Random();
           
        public static string testing_multiple_mod;
        public static string mode;
        Form2 f2 = new Form2();
        public Form3()
        {
            InitializeComponent();
        }

        private void Form3_Load(object sender, EventArgs e)
        {
            this.panel2.Visible = false;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            panel2.Visible = true;
            panel1.Visible = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            mode = "easy";

            f2.Show();
            this.Hide();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            mode = "normal";
            int result = rand.Next(1, 5);
            if (result == 1)
            {
                testing_multiple_mod = "a";
            }
            else if (result == 2)
            {
                testing_multiple_mod = "b";
            }
            else if (result == 3)
            {
                testing_multiple_mod = "c";
            }
            else
            {
                testing_multiple_mod = "d";
            }
            f2.Show();
            this.Hide();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            mode = "hard";
            f2.Show();
            this.Hide();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }


        private void button7_Click(object sender, EventArgs e)
        {
            MessageBox.Show("DEVELOPED BY UMAIR \n (C) COPYRIGTHS RESERVED ");
        }
    }
}
