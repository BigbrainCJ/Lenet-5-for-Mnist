#include"��ͷ.h"
#include"����.h"

typedef byte unsignedchar;
int bbb=0;
void chakan()
{
	string str;
	while (1)
	{
		cin >> str;
		if (bbb)
			bbb = 0;
		else
			bbb = 1;
	}

}

int main()
{
	srand((unsigned)time(NULL));
	thread t(chakan);
	cout << "weaky:" << endl;
	weaky = 0.2;
	//cin >> weaky;

	cout << "LearnProcess:" << endl;
	LearnProcess = 0.1;
	//cin >> LearnProcess;

	showPD =0;
	lenet();//��ʼ������������
	int maxN = 0;
		for (int i = 0; i < 1000; i++)
		{
			readImages();//��ȡͼ��
			int arr[28][28];
			int label;
			int right1 = 0;
			int right2 = 0;
			for(int num=0;num<5999;num++)
			{
				//���������Լ���ǩ
				label = func(arr);//��ȡͼ����󼰱�ǩ
				setInput(arr);//��������
				output[label] = 1;//���ñ�ǩ������Ϊ0


				forward();//��ǰ����
				if (bbb)
				{
					
					visual();
					showPD = 1;
					bbb = 0;
				}
				backward();//���򴫲�
				update();//���²���

				if (num < 1000 && label == maxPi)
					right1++;
				if (num > 5000 && label == maxPi)
					right2++;
				showPD = 0;
			}
			if (right1 > maxN)
				maxN = right1;
			if (right2 > maxN)
				maxN = right2;
			cout << "��:"<<i<<"�֣���ȷ�ʣ�" << (db)right1/1000 << ",   " << (db)right2/1000<< ",   ";
			cout << "����Ž�:" << (db)maxN/1000 << endl;
		}



	return 0;
	
	
}
/*
	//Mat mat(28,28, CV_8UC1);
	//Lenet.visual();
	//imshow("1", mat);
	//waitKey(0);
namedWindow("Example2", WINDOW_AUTOSIZE);
	VideoCapture cap;
	cap.open("D:\\12.mp4");
	Mat frame;
	while (1)
	{
		cap >> frame;
		if (frame.empty()) break;
		imshow("Exameple2", frame);
		if (waitKey(400) >= 0) break;
	}

	return 0;*/