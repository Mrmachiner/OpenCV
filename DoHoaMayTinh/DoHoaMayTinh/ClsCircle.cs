using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using DoHoaMayTinh;

namespace ComputerGraphic
{
    public class ClsCircle : ClsBase
    {
        protected int m_radius;
        public int Radius
        {
            get { return m_radius; }
            set { m_radius = value; }

        }
        protected Rectangle m_Border;
        public Rectangle Border
        {
            get { return m_Border; }
            set { m_Border = value; }
        }
        public ClsCircle()
        {
            m_radius = 1;
        }
        public ClsCircle(int radius)
        {
            m_radius = radius;
        }
        public ClsCircle(int radius, Color color)
        {
            m_radius = radius;
            m_color = color;
        }
        public ClsCircle(Point center, int radius, Color color)
        {
            m_Posi = center;
            m_radius = radius;
            m_color = color;
        }
        public override void Draw(Graphics g)
        {
            g.DrawEllipse(new Pen(Color, 3),
                new Rectangle(point.X - Radius, point.Y - Radius, Radius * 2, Radius * 2));

        }
        public override void frameMove(double totalTime, double elapseTime)
        {
            m_Posi.X += m_velocity.X;
            m_Posi.Y += m_velocity.Y;

            if (m_Posi.X >= (m_Border.Width - m_radius) || m_Posi.X <= m_radius)
            {
                m_velocity.X = -m_velocity.X;
            }
            if (m_Posi.Y >= (m_Border.Height - m_radius) || m_Posi.Y <= m_radius)
            {
                m_velocity.Y = -m_velocity.Y;
            }

        }

    }
}
