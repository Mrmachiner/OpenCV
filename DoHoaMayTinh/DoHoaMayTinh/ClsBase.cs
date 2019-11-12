using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DoHoaMayTinh
{
    public class ClsBase
    {
        public void drawCircle(Rectangle cicle1,PictureBox picBox)
        {
            Bitmap bmp = new Bitmap(picBox.Width, picBox.Height);
            Graphics gr = Graphics.FromImage(bmp);
            gr.Clear(Color.Black);
            gr.DrawEllipse(Pens.White, cicle1);
            picBox.Image = bmp;
            gr.Dispose();
        }
        protected Point m_Posi;
        public Point point
        {
            get { return m_Posi; }
            set { m_Posi = value; }
        }
        protected Point m_velocity;
        public Point Velocity
        {
            get { return m_velocity; }
            set { m_velocity = value; }
        }
        protected Color m_color;
        public Color Color
        {
            get { return m_color; }
            set { m_color = value; }
        }
        public ClsBase()
        {
            m_Posi = new Point(0, 0);
            m_color = Color.Red;
        }
        ~ClsBase() { }
        public virtual void Draw(Graphics gr)
        {

        }
        public virtual void frameMove(double totalTime,double elaspeTime)
        {

        }
    }
}
