using ComputerGraphic;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace DoHoaMayTinh
{
    public partial class Form1 : Form
    {
        //Timer time1;
        public Form1()
        {
            InitializeComponent();
        }
        SolidBrush fillred = new SolidBrush(Color.Red);
        SolidBrush fillgren = new SolidBrush(Color.Green);
        SolidBrush fillblu = new SolidBrush(Color.Blue);
        Rectangle cicle = new Rectangle(40, 40, 50, 50);
        private void drawCirlceVD(int x, int y, int h, int w)
        {
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            int ox = x - h;
            int oy = y - h;
            gr.DrawEllipse(Pens.White, ox, oy, 2 * h, 2 * h);
        }
        void drawCircle(Rectangle cicle1)
        {
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            gr.DrawEllipse(Pens.White, cicle1);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }
        private void btnHinhTron_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            gr.DrawEllipse(Pens.Red, 150, 150, 50, 50);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }

        ClsCircle c1 ;
        ClsCircle c3;
        ClsCircle c2;
        private void button2_Click(object sender, EventArgs e)
        {
            c1 = new ClsCircle(new Point(100, 100), 20, Color.Red);
            c2 = new ClsCircle(new Point(100, 150), 20, Color.Red);
            c3 = new ClsCircle(new Point(100, 200), 20, Color.Red);

            c1.Border = new Rectangle(0, 0, pictureBox1.Width, pictureBox1.Height);
            c1.Velocity = new Point(20, 20);

            c2.Border = new Rectangle(0, 0, pictureBox1.Width, pictureBox1.Height);
            c2.Velocity = new Point(20, 50);

            c3.Border = new Rectangle(0, 0, pictureBox1.Width, pictureBox1.Height);
            c3.Velocity = new Point(50, 20);
            timer1.Start();
        }
        //run auto
        //int dirx = 10;
        //int diry = 10;
        
        private void timer1_Tick(object sender, EventArgs e)
        {
            timer1.Enabled = true;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            c1.frameMove(0, 0);
            c1.Draw(gr);

            c2.frameMove(0, 0);
            c2.Draw(gr);
            
            c3.frameMove(0, 0);
            c3.Draw(gr);
            pictureBox1.Image = bmp;
            gr.Dispose();
            //run auto
            //cicle.X += dirx;
            //cicle.Y += diry;
            //if (cicle.Y > (pictureBox1.Height - cicle.Height) || cicle.Y < cicle.Height) diry = -diry;

            //if (cicle.X > (pictureBox1.Width - cicle.Height) || cicle.X < cicle.Height) dirx = -dirx;

            //ClsBase cricle = new ClsBase();
            //cricle.drawCircle(cicle,pictureBox1);
            //Invalidate();
        }
        private void Form1_Load(object sender, PaintEventArgs e)
        {
        }

        private void btnVchuNhat_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            gr.DrawRectangle(Pens.White,50,50,150,125);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }

        private void btnTomauCN_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            //gr.DrawRectangle(Pens.White, 50, 50, 150, 125);
            gr.FillRectangle(fillred, 50, 50, 150, 125);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            Point a1 = new Point(75, 50);
            Point a2 = new Point(25, 150);
            Point a3 = new Point(125, 150);

            gr.DrawLine(Pens.Blue, a1, a2);
            gr.DrawLine(Pens.Blue, a2, a3);
            gr.DrawLine(Pens.Blue, a3, a1);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            //gr.DrawRectangle(Pens.White, 50, 50, 150, 125);
            gr.FillEllipse(fillred, 150, 150, 50, 50);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            gr.DrawEllipse(Pens.Blue, 250, 250, 100, 100);
            gr.DrawLine(Pens.Green, 300, 300, 301, 301);
            gr.DrawEllipse(Pens.Red, 275, 275, 50, 50);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            //gr.DrawRectangle(Pens.White, 50, 50, 150, 125);
            gr.FillEllipse(fillred, 250, 250, 100, 100);
            gr.FillEllipse(fillblu, 275, 275, 50, 50);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }

        private void btnHV_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            gr.DrawRectangle(Pens.Blue, 250, 250, 100, 100);
            gr.DrawRectangle(Pens.Red, 275, 275, 50, 50);
            gr.DrawLine(Pens.Green, 300, 300, 301, 301);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }

        private void btnGocDuoi_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Bitmap bmp = new Bitmap(this.pictureBox1.Width, this.pictureBox1.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            Point b=new Point(200,200);
            Point a = new Point(300, 200);
            gr.DrawLine(Pens.Red, a, b);
            gr.TranslateTransform(100.0F, 0.0F);
            gr.RotateTransform(30.0f);
            gr.DrawLine(Pens.Blue, a, b);
            //gr.DrawLine(Pens.Blue, 200, 200, 201, 201);
           // gr.DrawLine(Pens.Blue, 200, 200, 300, 200);
            pictureBox1.Image = bmp;
            gr.Dispose();
        }

        private void btnTronLtR_Click(object sender, EventArgs e)
        {
            timerLtR.Enabled = true;
        }
        Rectangle cicleLtR = new Rectangle(50, 50, 20, 20);
        private void timerLtR_Tick(object sender, EventArgs e)
        {
            timerLtR.Enabled = true;

            cicleLtR.X += 5;
            if (cicleLtR.X > 200) cicleLtR.X = 50; 
            drawCircle(cicleLtR);
            Invalidate();
        }
    }
}
