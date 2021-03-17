using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;
using System.Media;
using System.IO;
namespace MyFirstForm
{
    public partial class Form2 : Form
    {
        int cc;
        int cc2;

        SoundPlayer ss = new SoundPlayer();
        Random rand = new Random();
        
        public int dice_roll()
        {
            int res;
            res = rand.Next(1, 7);
            return res;
        }

        public int player2_dice_roll()
        {
            int result;
            result = rand.Next(1, 7);
            return result;
        }

        public Form2()
        {
            InitializeComponent();
        }

        private void button15_Click(object sender, EventArgs e)
        {
            try
            {
                ss.SoundLocation = "dice.wav";
                ss.Load(); ss.Play();

                int dd = dice_roll();			//player 1.
                int dd2 = player2_dice_roll();		//player 2.

                cc += dd;
                cc2 += dd2;

                this.label4.Text = cc.ToString();           //player 1 score.
                this.label6.Text = cc2.ToString();	    // player 2 score.


                if (dd==1)
                {
                    pictureBox1.ImageLocation= "1.png";
                    pictureBox1.SizeMode=PictureBoxSizeMode.StretchImage;
                }
                else if(dd==2)
                {
                    pictureBox1.ImageLocation = "2.png";
                    pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                }
                else if (dd == 3)
                {
                    pictureBox1.ImageLocation = "3.png";
                    pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                }
                else if (dd == 4)
                {
                    pictureBox1.ImageLocation = "4.png";
                    pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                }
                else if (dd == 5)
                {
                    pictureBox1.ImageLocation = "5.png";
                    pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                }
                else if (dd == 6)
                {
                    pictureBox1.ImageLocation = "6.png";
                    pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                }

                MessageBox.Show("PLAYER 1 DICED A  " + dd );
                MessageBox.Show("PLAYER 2 DICED A  " + dd2);
                

                if (cc == 1)
                {
                    label2.Location = textBox1.Location;
                }
                else if (cc == 2)
                {
                    label2.Location = textBox2.Location;
                }
                else if (cc == 3)
                {
                    label2.Location = textBox3.Location;
                }
                else if (cc == 4)
                {
                    label2.Location = textBox4.Location;
                }
                else if (cc == 5)
                {
                    label2.Location = textBox5.Location;
                }
                else if (cc == 6)
                {
                    label2.Location = textBox6.Location;
                }
                else if (cc == 7)
                {
                    label2.Location = textBox7.Location;
                }
                else if (cc == 8)
                {
                    label2.Location = textBox8.Location;
                }
                else if (cc == 9)
                {
                    label2.Location = textBox9.Location;
                }
                else if (cc == 10)
                {
                    label2.Location = textBox64.Location;
                    cc = 64;
                }
                else if (cc == 11)
                {
                    label2.Location = textBox11.Location;
                }
                else if (cc == 12)
                {
                    label2.Location = textBox12.Location;
                }
                else if (cc == 13)
                {
                    label2.Location = textBox13.Location;
                }
                else if (cc == 14)
                {
                    label2.Location = textBox14.Location;
                    //
                }
                else if (cc == 15)
                {
                    label2.Location = textBox15.Location;
                }
                else if (cc == 16)
                {
                    label2.Location = textBox16.Location;
                }
                else if (cc == 17)
                {
                    label2.Location = textBox17.Location;
                }
                else if (cc == 18)
                {
                    label2.Location = textBox18.Location;
                }

                else if (cc == 19)
                {
                    label2.Location = textBox19.Location;
                }
                else if (cc == 20)
                {
                    label2.Location = textBox20.Location;
                }
                else if (cc == 21)
                {
                    label2.Location = textBox21.Location;
                }

                else if (cc == 22)
                {
                    if (Form3.mode == "normal")
                    {
                        if (Form3.testing_multiple_mod == "d")
                        {
                            ss.SoundLocation = "snake.wav";
                            ss.Load(); ss.Play();
                            label2.Location = textBox6.Location;
                            cc = 6;
                        }
                        else
                            label2.Location = textBox22.Location;
                    }
                    else
                        label2.Location = textBox22.Location;
                }

                else if (cc == 23)
                {
                    label2.Location = textBox23.Location;
                }
                
                else if (cc == 24)
                {
                    if (Form3.mode == "normal")
                    {
                        if (Form3.testing_multiple_mod == "c")
                        {
                            ss.SoundLocation = "snake.wav";
                            ss.Load(); ss.Play();
                            label2.Location = textBox6.Location;
                            cc = 6;
                        }
                        else
                            label2.Location = textBox24.Location;
                    }
                    else
                        label2.Location = textBox24.Location;
                }

                else if (cc == 25)
                {
                    label2.Location = textBox25.Location;
                }

                else if (cc == 26)
                {
                    if (Form3.mode == "normal")
                    {
                        if (Form3.testing_multiple_mod == "b")
                        {
                            ss.SoundLocation = "snake.wav";
                            ss.Load(); ss.Play();
                            label2.Location = textBox6.Location;
                            cc = 6;
                        }
                        else
                            label2.Location = textBox26.Location;
                    }
                    else
                        label2.Location = textBox26.Location;

                }

                else if (cc == 27)
                {
                    label2.Location = textBox27.Location;
                }
                
                else if (cc == 28)
                {
                    //three modes here. (EASY, MEDIUM, HARD)

                    if (Form3.mode == "easy")
                    {
                        label2.Location = textBox28.Location;
                    }
                    else if (Form3.mode == "normal")
                    {
                        if (Form3.testing_multiple_mod == "a")
                        {
                            ss.SoundLocation = "snake.wav";
                            ss.Load(); ss.Play();
                            label2.Location = textBox6.Location;
                            cc = 6;
                        }
                        else
                        {
                            label2.Location = textBox28.Location;
                        }
                    
                    }
                    else if (Form3.mode == "hard")
                    {
                        ss.SoundLocation = "snake.wav";
                        ss.Load(); ss.Play();
                        label2.Location = textBox6.Location;
                        cc = 6;
                    }
                    else
                    {
                        label2.Location = textBox28.Location;
                    }

                }


                else if (cc == 29)
                {
                    label2.Location = textBox29.Location;
                }
                else if (cc == 30)
                {
                    label2.Location = textBox30.Location;
                }
                else if (cc == 31)
                {
                    label2.Location = textBox31.Location;
                }
                else if (cc == 32)
                {
                    label2.Location = textBox32.Location;
                }
                else if (cc == 33)
                {
                    label2.Location = textBox33.Location;
                }
                else if (cc == 34)
                {
                    label2.Location = textBox34.Location;
                }
                else if (cc == 35)
                {
                    label2.Location = textBox90.Location;
                    cc = 90;
                }
                else if (cc == 36)
                {
                    label2.Location = textBox36.Location;
                }
                else if (cc == 37)
                {
                    label2.Location = textBox37.Location;
                }
                else if (cc == 38)
                {
                    label2.Location = textBox38.Location;
                }
                else if (cc == 39)
                {
                    label2.Location = textBox39.Location;
                }
                else if (cc == 40)
                {
                    label2.Location = textBox40.Location;
                }
                else if (cc == 41)
                {
                    label2.Location = textBox41.Location;
                }
                else if (cc == 42)
                {
                    label2.Location = textBox42.Location;
                }
                else if (cc == 43)
                {
                    label2.Location = textBox43.Location;
                }
                else if (cc == 44)
                {
                    label2.Location = textBox44.Location;
                }
                else if (cc == 45)
                {
                    label2.Location = textBox45.Location;
                }
                else if (cc == 46)
                {
                    label2.Location = textBox46.Location;
                }
                else if (cc == 47)
                {
                    label2.Location = textBox47.Location;
                }
                else if (cc == 48)
                {
                    label2.Location = textBox48.Location;
                }
                else if (cc == 49)
                {
                    label2.Location = textBox49.Location;
                }
                //
                else if (cc == 50)
                {
                    label2.Location = textBox50.Location;
                }
                else if (cc == 51)
                {
                    label2.Location = textBox51.Location;
                }
                else if (cc == 52)
                {
                    label2.Location = textBox52.Location;
                }
                else if (cc == 53)
                {
                    label2.Location = textBox53.Location;
                }
                else if (cc == 54)
                {
                    label2.Location = textBox54.Location;
                }
                else if (cc == 55)
                {
                    label2.Location = textBox55.Location;
                }
                else if (cc == 56)
                {
                    label2.Location = textBox56.Location;
                }
                else if (cc == 57)
                {
                    label2.Location = textBox57.Location;
                }
                else if (cc == 58)
                {
                    label2.Location = textBox58.Location;
                }
                else if (cc == 59)
                {
                    label2.Location = textBox59.Location;
                }
                else if (cc == 60)
                {
                    label2.Location = textBox60.Location;
                }
                //
                else if (cc == 61)
                {
                    label2.Location = textBox61.Location;
                }
                else if (cc == 62)
                {
                    label2.Location = textBox62.Location;
                }
                else if (cc == 63)
                {
                    label2.Location = textBox63.Location;
                }
                else if (cc == 64)
                {
                    label2.Location = textBox64.Location;
                }
                else if (cc == 65)
                {
                    label2.Location = textBox65.Location;
                }
                else if (cc == 66)
                {
                    label2.Location = textBox66.Location;
                }
                else if (cc == 67)
                {
                    label2.Location = textBox67.Location;
                }
                else if (cc == 68)
                {
                    label2.Location = textBox68.Location;
                }
                else if (cc == 69)
                {
                    label2.Location = textBox69.Location;
                }
                else if (cc == 70)
                {
                    label2.Location = textBox70.Location;
                }
                //
                else if (cc == 71)
                {
                    label2.Location = textBox71.Location;
                }
                else if (cc == 72)
                {
                    label2.Location = textBox72.Location;
                }
                else if (cc == 73)
                {
                    if (Form3.mode == "easy")
                    {
                        label2.Location = textBox73.Location;
                    }
                    else if (Form3.mode == "normal")
                    {
                        label2.Location = textBox73.Location;
                    }
                    else if (Form3.mode == "hard")
                    {
                        ss.SoundLocation = "snake.wav";
                        ss.Load(); ss.Play();
                        label2.Location = textBox54.Location;
                        cc = 54;
                    }
                }
                else if (cc == 74)
                {
                    label2.Location = textBox74.Location;
                }
                else if (cc == 75)
                {
                    label2.Location = textBox75.Location;
                }
                else if (cc == 76)
                {
                    label2.Location = textBox76.Location;
                }
                else if (cc == 77)
                {
                    label2.Location = textBox77.Location;
                }
                else if (cc == 78)
                {
                    label2.Location = textBox78.Location;
                }
                else if (cc == 79)
                {
                    label2.Location = textBox79.Location;
                }
                else if (cc == 80)
                {
                    label2.Location = textBox80.Location;
                }
                //
                else if (cc == 81)
                {
                    label2.Location = textBox81.Location;
                }
                else if (cc == 82)
                {
                    label2.Location = textBox82.Location;
                }
                else if (cc == 83)
                {
                    label2.Location = textBox83.Location;
                }
                else if (cc == 84)
                {
                    label2.Location = textBox84.Location;
                }
                else if (cc == 85)
                {
                    label2.Location = textBox85.Location;
                }
                else if (cc == 86)
                {
                    label2.Location = textBox86.Location;
                }
                else if (cc == 87)
                {
                    label2.Location = textBox87.Location;
                }
                else if (cc == 88)
                {
                    label2.Location = textBox88.Location;
                }
                else if (cc == 89)
                {
                    label2.Location = textBox89.Location;
                }
                else if (cc == 90)
                {
                    label2.Location = textBox90.Location;
                }
                //
                else if (cc == 91)
                {
                    label2.Location = textBox91.Location;
                }
                else if (cc == 92)
                {
                    label2.Location = textBox92.Location;
                }
                else if (cc == 93)
                {
                    label2.Location = textBox93.Location;
                }
                else if (cc == 94)
                {
                    label2.Location = textBox94.Location;
                }
                else if (cc == 95)
                {
                    if (Form3.mode == "easy")
                    {
                        label2.Location = textBox95.Location;
                    }
                    else if (Form3.mode == "normal")
                    {
                        label2.Location = textBox95.Location;
                    }
                    else if (Form3.mode == "hard")
                    {
                        ss.SoundLocation = "snake.wav";
                        ss.Load(); ss.Play();
                        label2.Location = textBox42.Location;
                        cc = 42;
                    }
                }
                else if (cc == 96)
                {
                    label2.Location = textBox96.Location;
                }
                else if (cc == 97)
                {
                    label2.Location = textBox97.Location;
                }
                else if (cc == 98)
                {
                    label2.Location = textBox98.Location;
                }
                else if (cc == 99)
                {
                    label2.Location = textBox99.Location;
                }
                else if (cc == 100)
                {
                    ss.SoundLocation = "won.wav";
                    ss.Load(); ss.Play();
                    label2.Location = textBox100.Location;
                    MessageBox.Show("PLAYER 1 WON");
                    reset_dice();
                }                
                ////
                if (cc > 100)
                {
                    cc = cc - dd;
                    MessageBox.Show("try again");
                }

                ////////////////// CODE FOR PLAYER 2 ///////////////////
                ///////////////////////////////////////////////////////

                if (cc2 == 1)
                {
                    label7.Location = textBox1.Location;
                }
                else if (cc2 == 2)
                {
                    label7.Location = textBox2.Location;
                }
                else if (cc2 == 3)
                {
                    label7.Location = textBox3.Location;
                }
                else if (cc2 == 4)
                {
                    label7.Location = textBox4.Location;
                }
                else if (cc2 == 5)
                {
                    label7.Location = textBox5.Location;
                }
                else if (cc2 == 6)
                {
                    label7.Location = textBox6.Location;
                }
                else if (cc2 == 7)
                {
                    label7.Location = textBox7.Location;
                }
                else if (cc2 == 8)
                {
                    label7.Location = textBox8.Location;
                }
                else if (cc2 == 9)
                {
                    label7.Location = textBox9.Location;
                }
                else if (cc2 == 10)
                {
                    label7.Location = textBox64.Location;
                    cc2 = 64;
                }
                else if (cc2 == 11)
                {
                    label7.Location = textBox11.Location;
                }
                else if (cc2 == 12)
                {
                    label7.Location = textBox12.Location;
                }
                else if (cc2 == 13)
                {
                    label7.Location = textBox13.Location;
                }
                else if (cc2 == 14)
                {
                    label7.Location = textBox14.Location;
                    //
                }
                else if (cc2 == 15)
                {
                    label7.Location = textBox15.Location;
                }
                else if (cc2 == 16)
                {
                    label7.Location = textBox16.Location;
                }
                else if (cc2 == 17)
                {
                    label7.Location = textBox17.Location;
                }
                else if (cc2 == 18)
                {
                    label7.Location = textBox18.Location;
                }

                else if (cc2 == 19)
                {
                    label7.Location = textBox19.Location;
                }
                else if (cc2 == 20)
                {
                    label7.Location = textBox20.Location;
                }
                else if (cc2 == 21)
                {
                    label7.Location = textBox21.Location;
                }

                else if (cc2 == 22)
                {
                    if (Form3.mode == "normal")
                    {
                        if (Form3.testing_multiple_mod == "d")
                        {
                            ss.SoundLocation = "snake.wav";
                            ss.Load(); ss.Play();
                            label7.Location = textBox6.Location;
                            cc2 = 6;
                        }
                        else
                            label7.Location = textBox22.Location;
                    }
                    else
                        label7.Location = textBox22.Location;
                }

                else if (cc2 == 23)
                {
                    label7.Location = textBox23.Location;
                }

                else if (cc2 == 24)
                {
                    if (Form3.mode == "normal")
                    {
                        if (Form3.testing_multiple_mod == "c")
                        {
                            ss.SoundLocation = "snake.wav";
                            ss.Load(); ss.Play();
                            label7.Location = textBox6.Location;
                            cc2 = 6;
                        }
                        else
                            label7.Location = textBox24.Location;
                    }
                    else
                        label7.Location = textBox24.Location;
                }

                else if (cc2 == 25)
                {
                    label7.Location = textBox25.Location;
                }

                else if (cc2 == 26)
                {
                    if (Form3.mode == "normal")
                    {
                        if (Form3.testing_multiple_mod == "b")
                        {
                            ss.SoundLocation = "snake.wav";
                            ss.Load(); ss.Play();
                            label7.Location = textBox6.Location;
                            cc2 = 6;
                        }
                        else
                            label7.Location = textBox26.Location;
                    }
                    else
                        label7.Location = textBox26.Location;

                }

                else if (cc2 == 27)
                {
                    label7.Location = textBox27.Location;
                }

                else if (cc2 == 28)
                {
                    //three modes here. (EASY, MEDIUM, HARD)

                    if (Form3.mode == "easy")
                    {
                        label7.Location = textBox28.Location;
                    }
                    else if (Form3.mode == "normal")
                    {
                        if (Form3.testing_multiple_mod == "a")
                        {
                            ss.SoundLocation = "snake.wav";
                            ss.Load(); ss.Play();
                            label7.Location = textBox6.Location;
                            cc2 = 6;
                        }
                        else
                        {
                            label7.Location = textBox28.Location;
                        }

                    }
                    else if (Form3.mode == "hard")
                    {
                        ss.SoundLocation = "snake.wav";
                        ss.Load(); ss.Play();
                        label7.Location = textBox6.Location;
                        cc2 = 6;
                    }
                    else
                    {
                        label7.Location = textBox28.Location;
                    }

                }


                else if (cc2 == 29)
                {
                    label7.Location = textBox29.Location;
                }
                else if (cc2 == 30)
                {
                    label7.Location = textBox30.Location;
                }
                else if (cc2 == 31)
                {
                    label7.Location = textBox31.Location;
                }
                else if (cc2 == 32)
                {
                    label7.Location = textBox32.Location;
                }
                else if (cc2 == 33)
                {
                    label7.Location = textBox33.Location;
                }
                else if (cc2 == 34)
                {
                    label7.Location = textBox34.Location;
                }
                else if (cc2 == 35)
                {
                    label7.Location = textBox90.Location;
                    cc2 = 90;
                }
                else if (cc2 == 36)
                {
                    label7.Location = textBox36.Location;
                }
                else if (cc2 == 37)
                {
                    label7.Location = textBox37.Location;
                }
                else if (cc2 == 38)
                {
                    label7.Location = textBox38.Location;
                }
                else if (cc2 == 39)
                {
                    label7.Location = textBox39.Location;
                }
                else if (cc2 == 40)
                {
                    label7.Location = textBox40.Location;
                }
                else if (cc2 == 41)
                {
                    label7.Location = textBox41.Location;
                }
                else if (cc2 == 42)
                {
                    label7.Location = textBox42.Location;
                }
                else if (cc2 == 43)
                {
                    label7.Location = textBox43.Location;
                }
                else if (cc2 == 44)
                {
                    label7.Location = textBox44.Location;
                }
                else if (cc2 == 45)
                {
                    label7.Location = textBox45.Location;
                }
                else if (cc2 == 46)
                {
                    label7.Location = textBox46.Location;
                }
                else if (cc2 == 47)
                {
                    label7.Location = textBox47.Location;
                }
                else if (cc2 == 48)
                {
                    label7.Location = textBox48.Location;
                }
                else if (cc2 == 49)
                {
                    label7.Location = textBox49.Location;
                }
                //
                else if (cc2 == 50)
                {
                    label7.Location = textBox50.Location;
                }
                else if (cc2 == 51)
                {
                    label7.Location = textBox51.Location;
                }
                else if (cc2 == 52)
                {
                    label7.Location = textBox52.Location;
                }
                else if (cc2 == 53)
                {
                    label7.Location = textBox53.Location;
                }
                else if (cc2 == 54)
                {
                    label7.Location = textBox54.Location;
                }
                else if (cc2 == 55)
                {
                    label7.Location = textBox55.Location;
                }
                else if (cc2 == 56)
                {
                    label7.Location = textBox56.Location;
                }
                else if (cc2 == 57)
                {
                    label7.Location = textBox57.Location;
                }
                else if (cc2 == 58)
                {
                    label7.Location = textBox58.Location;
                }
                else if (cc2 == 59)
                {
                    label7.Location = textBox59.Location;
                }
                else if (cc2 == 60)
                {
                    label7.Location = textBox60.Location;
                }
                //
                else if (cc2 == 61)
                {
                    label7.Location = textBox61.Location;
                }
                else if (cc2 == 62)
                {
                    label7.Location = textBox62.Location;
                }
                else if (cc2 == 63)
                {
                    label7.Location = textBox63.Location;
                }
                else if (cc2 == 64)
                {
                    label7.Location = textBox64.Location;
                }
                else if (cc2 == 65)
                {
                    label7.Location = textBox65.Location;
                }
                else if (cc2 == 66)
                {
                    label7.Location = textBox66.Location;
                }
                else if (cc2 == 67)
                {
                    label7.Location = textBox67.Location;
                }
                else if (cc2 == 68)
                {
                    label7.Location = textBox68.Location;
                }
                else if (cc2 == 69)
                {
                    label7.Location = textBox69.Location;
                }
                else if (cc2 == 70)
                {
                    label7.Location = textBox70.Location;
                }
                //
                else if (cc2 == 71)
                {
                    label7.Location = textBox71.Location;
                }
                else if (cc2 == 72)
                {
                    label7.Location = textBox72.Location;
                }
                else if (cc2 == 73)
                {
                    if (Form3.mode == "easy")
                    {
                        label7.Location = textBox73.Location;
                    }
                    else if (Form3.mode == "normal")
                    {
                        label7.Location = textBox73.Location;
                    }
                    else if (Form3.mode == "hard")
                    {
                        ss.SoundLocation = "snake.wav";
                        ss.Load(); ss.Play();
                        label7.Location = textBox54.Location;
                        cc2 = 54;
                    }
                }
                else if (cc2 == 74)
                {
                    label7.Location = textBox74.Location;
                }
                else if (cc2 == 75)
                {
                    label7.Location = textBox75.Location;
                }
                else if (cc2 == 76)
                {
                    label7.Location = textBox76.Location;
                }
                else if (cc2 == 77)
                {
                    label7.Location = textBox77.Location;
                }
                else if (cc2 == 78)
                {
                    label7.Location = textBox78.Location;
                }
                else if (cc2 == 79)
                {
                    label7.Location = textBox79.Location;
                }
                else if (cc2 == 80)
                {
                    label7.Location = textBox80.Location;
                }
                //
                else if (cc2 == 81)
                {
                    label7.Location = textBox81.Location;
                }
                else if (cc2 == 82)
                {
                    label7.Location = textBox82.Location;
                }
                else if (cc2 == 83)
                {
                    label7.Location = textBox83.Location;
                }
                else if (cc2 == 84)
                {
                    label7.Location = textBox84.Location;
                }
                else if (cc2 == 85)
                {
                    label7.Location = textBox85.Location;
                }
                else if (cc2 == 86)
                {
                    label7.Location = textBox86.Location;
                }
                else if (cc2 == 87)
                {
                    label7.Location = textBox87.Location;
                }
                else if (cc2 == 88)
                {
                    label7.Location = textBox88.Location;
                }
                else if (cc2 == 89)
                {
                    label7.Location = textBox89.Location;
                }
                else if (cc2 == 90)
                {
                    label7.Location = textBox90.Location;
                }
                //
                else if (cc2 == 91)
                {
                    label7.Location = textBox91.Location;
                }
                else if (cc2 == 92)
                {
                    label7.Location = textBox92.Location;
                }
                else if (cc2 == 93)
                {
                    label7.Location = textBox93.Location;
                }
                else if (cc2 == 94)
                {
                    label7.Location = textBox94.Location;
                }
                else if (cc2 == 95)
                {
                    if (Form3.mode == "easy")
                    {
                        label7.Location = textBox95.Location;
                    }
                    else if (Form3.mode == "normal")
                    {
                        label7.Location = textBox95.Location;
                    }
                    else if (Form3.mode == "hard")
                    {
                        ss.SoundLocation = "snake.wav";
                        ss.Load(); ss.Play();
                        label7.Location = textBox42.Location;
                        cc2 = 42;
                    }
                }
                else if (cc2 == 96)
                {
                    label7.Location = textBox96.Location;
                }
                else if (cc2 == 97)
                {
                    label7.Location = textBox97.Location;
                }
                else if (cc2 == 98)
                {
                    label7.Location = textBox98.Location;
                }
                else if (cc2 == 99)
                {
                    label7.Location = textBox99.Location;
                }
                else if (cc2 == 100)
                {
                    ss.SoundLocation = "won.wav";
                    ss.Load(); ss.Play();
                    label7.Location = textBox100.Location;
                    MessageBox.Show("PLAYER 2 WON");
                    reset_dice();
                }
                ////
                if (cc2 > 100)
                {
                    cc2 = cc2 - dd;
                    MessageBox.Show("try again");
                }


                /////////////////////PLAYER 2 ENDS//////////////////////
                ///////////////////////////////////////////////////////

            }


            catch (FileNotFoundException)
            { MessageBox.Show("ERROR 101 FOUND: MISSING AUDIO FILE"); }
            catch (FileLoadException)
            { }
        }

        public void reset_dice()
        {
            cc = 0;
            cc2 = 0;
            label2.Location = textBox1.Location;
            label7.Location = textBox1.Location;
            this.label4.Text = cc.ToString();
            this.label6.Text = cc2.ToString();
        
        }

        private void button1_Click(object sender, EventArgs e)
        {
            reset_dice();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            MessageBox.Show("DEVELOPED BY M.UMAIR \n COPYRIGHTS (C) \n ALL RIGHTS RESERVED");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Form3 f3 = new Form3();
            f3.Show();
            this.Hide();
        }

        private void Form2_Load_1(object sender, EventArgs e)
        {
            //pictureBox1.Visible = false;
            if (Form3.mode == "normal")
            {
                if(Form3.testing_multiple_mod=="a")
                {
                    textBox28.BackColor = Color.Red;
                    textBox6.BackColor = Color.Red;
                }
                if (Form3.testing_multiple_mod == "b")
                {
                    textBox26.BackColor = Color.Red;
                    textBox6.BackColor = Color.Red;
                }
                if (Form3.testing_multiple_mod == "c")
                {
                    textBox24.BackColor = Color.Red;
                    textBox6.BackColor = Color.Red;
                }
                if (Form3.testing_multiple_mod == "d")
                {
                    textBox22.BackColor = Color.Red;
                    textBox6.BackColor = Color.Red;
                }
            }
            else if (Form3.mode == "hard")  
            {
                textBox28.BackColor = Color.Red;
                textBox6.BackColor = Color.DarkRed;

                textBox95.BackColor = Color.Red;
                textBox42.BackColor = Color.DarkRed;

                textBox73.BackColor = Color.Red;
                textBox54.BackColor = Color.DarkRed;
           
            }
        
        }
    }}
