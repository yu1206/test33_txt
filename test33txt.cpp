
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream> 
#include <io.h>
#include <Windows.h>
#include "opencv\cv.h"
#include "opencv\highgui.h"
#include <direct.h>
using namespace cv;
using namespace std;
int test33txt(int argc, char *argv[])
{


	
	string inputPathtxt = "I:/mtcnn-train/rotateResult/5src/000_one.txt";
	string outPathtxt = "I:/mtcnn-train/rotateResult/5src/000_two.txt";

	fstream finRead;
	finRead.open(inputPathtxt, ios::in);
	if (!finRead.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	fstream finWrite;
	finWrite.open(outPathtxt, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}



	
	string line; 

	getline(finRead, line);
	while (getline(finRead, line))
	{
		if (line.empty())
		{
			continue;
		}
		cout << line.c_str() << endl;


		
		string str123;
		int label; int x1, y1, x2, y2;
		int p1, p2, p3, p4, p5, p6, p7, p8;
		stringstream str_s(line);
		str_s >> str123 >> label >> x1 >> y1 >> x2 >> y2 >> p1 >> p2 >> p3 >> p4 >> p5 >> p6 >> p7 >> p8;
		

			finWrite << str123 << " " << label << " " << x1 << " " << y1 << " " << x2 << " " << y2 << " " <<
				p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << " " << p6 << " " <<
				p7 << " " << p8 << endl;


		int jjjjjj = 90;

	}

	finRead.close();
	finWrite.close();
	return 0;
}