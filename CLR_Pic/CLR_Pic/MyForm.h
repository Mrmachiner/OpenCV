#pragma once
#include <opencv2/core/core.hpp>
#include "opencv2/highgui.hpp"
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include "opencv2/imgproc.hpp"
#include <iostream>
namespace CLRPic {

	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	using namespace std;
	using namespace cv;
	vector< Point2f> roi_corners;
	vector< Point2f> dst_corners(4);
	Mat src;

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
	private: System::Windows::Forms::Button^  btnBrowse;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::PictureBox^  ImgSource;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  ImgGray;


	private: System::Windows::Forms::PictureBox^  ImgRBG;


	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	protected:









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnBrowse = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->ImgGray = (gcnew System::Windows::Forms::PictureBox());
			this->ImgRBG = (gcnew System::Windows::Forms::PictureBox());
			this->ImgSource = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgGray))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgRBG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgSource))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// btnBrowse
			// 
			this->btnBrowse->Location = System::Drawing::Point(6, 6);
			this->btnBrowse->Name = L"btnBrowse";
			this->btnBrowse->Size = System::Drawing::Size(98, 32);
			this->btnBrowse->TabIndex = 0;
			this->btnBrowse->Text = L"Load Image";
			this->btnBrowse->UseVisualStyleBackColor = true;
			this->btnBrowse->Click += gcnew System::EventHandler(this, &MyForm::btnBrowse_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1129, 735);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->pictureBox8);
			this->tabPage1->Controls->Add(this->pictureBox6);
			this->tabPage1->Controls->Add(this->ImgGray);
			this->tabPage1->Controls->Add(this->ImgRBG);
			this->tabPage1->Controls->Add(this->ImgSource);
			this->tabPage1->Controls->Add(this->btnBrowse);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1121, 706);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(875, 392);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 17);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Image Source";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(581, 392);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Image Source";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(875, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 17);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Image Gray";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(581, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Image RBG";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Image Source";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(872, 412);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(226, 288);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(578, 412);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(226, 288);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// ImgGray
			// 
			this->ImgGray->Location = System::Drawing::Point(872, 83);
			this->ImgGray->Name = L"ImgGray";
			this->ImgGray->Size = System::Drawing::Size(226, 288);
			this->ImgGray->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ImgGray->TabIndex = 1;
			this->ImgGray->TabStop = false;
			// 
			// ImgRBG
			// 
			this->ImgRBG->Location = System::Drawing::Point(578, 83);
			this->ImgRBG->Name = L"ImgRBG";
			this->ImgRBG->Size = System::Drawing::Size(226, 288);
			this->ImgRBG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ImgRBG->TabIndex = 1;
			this->ImgRBG->TabStop = false;
			// 
			// ImgSource
			// 
			this->ImgSource->Location = System::Drawing::Point(6, 83);
			this->ImgSource->Name = L"ImgSource";
			this->ImgSource->Size = System::Drawing::Size(411, 617);
			this->ImgSource->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ImgSource->TabIndex = 1;
			this->ImgSource->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->pictureBox10);
			this->tabPage2->Controls->Add(this->pictureBox9);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1121, 706);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(504, 61);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 17);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Result Image";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 61);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 17);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Source Image";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(507, 81);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(461, 593);
			this->pictureBox10->TabIndex = 3;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(6, 81);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(201, 271);
			this->pictureBox9->TabIndex = 2;
			this->pictureBox9->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Load Image";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1121, 706);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1157, 759);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgGray))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgRBG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgSource))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//For the windows Form picture box, To show Mat image we need bellow method 
	//private: void DrawCVImage(System::Windows::Forms::Control^ control, cv::Mat& colorImage)
	//{
	//	System::Drawing::Graphics^ graphics = control->CreateGraphics();
	//	System::IntPtr ptr1(colorImage.ptr());
	//	System::Drawing::Bitmap^ b;
	//	switch (colorImage.type())
	//	{
	//	case CV_8UC3:
	//		b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step,
	//			System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr1);
	//		break;
	//	case CV_8UC1:
	//		b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step,
	//			System::Drawing::Imaging::PixelFormat::Format8bppIndexed, ptr1);
	//		break;
	//		default:

	//		break;
	//	}
	//	System::Drawing::RectangleF rect(0, 0, (float)control->Width, (float)control->Height);
	//	graphics->DrawImage(b, rect);
	//}
	private: System::Void btnBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ dgOpen = gcnew OpenFileDialog();
		dgOpen->Filter = "Image(*.bmp; *.jpg)|*.bmp;*.jpg|All files (*.*)|*.*||";
		if (dgOpen->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
		{
			return;
		}
		Bitmap^ bmpSrc = gcnew Bitmap(dgOpen->FileName);
		ImgSource->Image = bmpSrc;
		ImgSource->Refresh();

		// load image into src variable and show as OpenCV method.
		src = imread(ConvertString2Char(dgOpen->FileName));  // We need to convert file name to char by Marshal method
		Mat srcClone = src.clone();
		int h = 800;
		Mat resize,rbg,gray,bilur,thres,medi,makebor,can,final;
		resize=ToResizeImage(srcClone, h);
		rbg=ToRBG(resize);
		gray=ToGray(rbg);
		bilur=ToBiluFilter(gray);
		thres=ToAdaptiveThreshold(bilur);
		medi=ToMedianBlur(thres);
		makebor=ToCpMakeBor(medi);
		can=ToCanny(makebor);
		final= TofindContours(can, src, h);
		imshow("Final", final);
		//imshow("Source image showing via OpenCV", src);
	}
	private: char* ConvertString2Char(System::String^ str) {	// Marshal method
		char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
		return str2;
	}
	private: Mat ToResizeImage(Mat img, int height)
	{
		Mat dst;
		float rat = height / (1.0*img.size().height);
		int width = (int)(rat*img.size().width);
		//Mat dst = Mat::ones(Size((int)width, height), img.type());
		resize(img, dst, cv::Size(width, height), 0, 0, 1);
		return dst;
	}
	private:int FindPositionMin(float _array[], int length)
	{
		int vt = 0;
		float min = _array[0];
		for (int i = 1; i < length; i++)
		{
			if (_array[i] < min)
			{
				min = _array[i];
				vt = i;
			}
		}
		return vt;
	}
	private:int FindPositionMax(float _array[], int length)
	{
		int vt = 0;
		float max = _array[0];
		for (int i = 1; i < length; i++)
		{
			if (_array[i] > max)
			{
				max = _array[i];
				vt = i;
			}
		}
		return vt;
	}
	private:vector<Point2f> SortPoints(vector<Point2f> points)
	{
		vector<Point2f> _pts(4);
		float _sum[4];
		float _diff[4];
		for (size_t i = 0; i < points.size(); i++)
		{
			_sum[i] = points[i].x + points[i].y;
			_diff[i] = points[i].y - points[i].x;
		}
		int vt0 = FindPositionMin(_sum, 4);
		int vt1 = FindPositionMin(_diff, 4);
		int vt2 = FindPositionMax(_sum, 4);
		int vt3 = FindPositionMax(_diff, 4);
		_pts[0] = points[vt0];
		_pts[1] = points[vt1];
		_pts[2] = points[vt2];
		_pts[3] = points[vt3];
		return _pts;
	}
	private:vector<Point2f> TranformPoints(vector<Point2f> points, Point2f offset, float rat)
	{
		for (size_t i = 0; i < points.size(); i++)
		{
			points[i].x = (points[i].x *rat + offset.x);
			points[i].y = (points[i].y *rat + offset.y);
		}
		return points;
	}
	private: Mat TranformImage(Mat img, vector<Point2f> points)
	{
		float newHeight = max(norm(points[0] - points[3]), norm(points[1] - points[2]));
		float newWidth = max(norm(points[0] - points[1]), norm(points[2] - points[3]));
		vector<Point2f> _dst;
		_dst.push_back(Point2f(0, 0));
		_dst.push_back(Point2f(newWidth, 0));
		_dst.push_back(Point2f(newWidth, newHeight));
		_dst.push_back(Point2f(0, newHeight));
		Mat _M = getPerspectiveTransform(points, _dst);
		Mat _Warp;
		warpPerspective(img, _Warp, _M, cv::Size((int)newWidth, (int)newHeight));
		return	_Warp;
	}
	private: Mat ToRBG(Mat srcClone) {
		Mat dst;
		cvtColor(srcClone, dst, COLOR_BGR2RGB);
		return dst;
	}
	private: Mat ToGray(Mat srcClone) {
		Mat dst;
		cvtColor(srcClone, dst, COLOR_BGR2GRAY);
		return dst;
	}
	private: Mat ToBiluFilter(Mat srcClone) {
		Mat dst;
		bilateralFilter(srcClone, dst, 9, 75, 75);
		return dst;
	}
	private: Mat ToAdaptiveThreshold(Mat srcClone) {
		Mat dst;
		adaptiveThreshold(srcClone, dst, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 115, 2);
		return dst;
	}
	private: Mat ToMedianBlur(Mat srcClone) {
		Mat dst;
		medianBlur(srcClone, dst, 15); //11
		return dst;
	}
	private: Mat ToCpMakeBor(Mat srcClone) {
		Mat dst;
		copyMakeBorder(srcClone, dst, 5, 5, 5, 5, BORDER_CONSTANT, Scalar(0, 0, 0));
		return dst;
	}
	private: Mat ToCanny(Mat srcClone) {
		Mat dst;
		Canny(srcClone, dst, 200, 255);
		return dst;
	}
	private: Mat TofindContours(Mat srcClone,Mat src,int h) {
		Mat orig = src.clone();
		imshow("aaaaa",orig);
		float rat = src.size().height / (h*1.0);
		int height = src.size().height;
		int width = src.size().width;
		vector<vector<cv::Point> > contours;
		vector<Vec4i> hierarchy;
		findContours(srcClone, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);
		//drawContours(edges, contours, -1, (100, 150, 100), 3);
		imshow("dst1", srcClone);
		int MAX_COUNTOUR_AREA = (width - 10) * (height - 10);
		double maxAreaFound = MAX_COUNTOUR_AREA * 0.1; //0,25
		roi_corners.push_back(Point2f(5, 5));
		roi_corners.push_back(Point2f((width - 5), 5));
		roi_corners.push_back(Point2f((width - 5), (height - 5)));
		roi_corners.push_back(Point2f(5, (height - 5)));
		for (size_t i = 0; i < contours.size(); i++)
		{
			double perimeter = arcLength(contours[i], true);
			vector<Point2f> approx;
			approxPolyDP(contours[i], approx, 0.02*perimeter, true); //0.03
			bool ok = (approx.size() == 4 && isContourConvex(approx) && maxAreaFound < contourArea(approx) && contourArea(approx) < MAX_COUNTOUR_AREA);
			if (ok)
			{
				maxAreaFound = contourArea(approx);
				roi_corners = approx;
			}
		}
		roi_corners = SortPoints(roi_corners);
		dst_corners = TranformPoints(roi_corners, Point2f(-3, -3), rat); //-3 -3
		Mat i = TranformImage(orig, dst_corners);
		return i;
	}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}