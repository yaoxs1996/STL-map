#include<map>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//��������꼶������
int num2010 = 0;
int num2011 = 0;
int num2012 = 0;

//ͳ�Ƹ���ݵ�ѧ��
void count(pair<string, string> elem)
{
	//sid��student idѧ��
	string sid = elem.second;
	string str1 = "2010";
	string str2 = "2011";
	string str3 = "2012";

	if (sid[0] == str1[0] && sid[1] == str1[1] && sid[2] == str1[2] && sid[3] == str1[3])
	{
		num2010++;
	}
	else if (sid[0] == str2[0] && sid[1] == str2[1] && sid[2] == str2[2] && sid[3] == str2[3])
	{
		num2011++;
	}
	else if (sid[0] == str3[0] && sid[1] == str3[1] && sid[2] == str3[2] && sid[3] == str3[3])
	{
		num2012++;
	}
}

int main()
{
	map<string, string> map1;
	map<string, string>::iterator pos;
	string find;
	map1.insert(make_pair("����", "2011123"));
	map1.insert(make_pair("����", "2011235"));
	map1.insert(make_pair("����", "2012009"));
	map1.insert(make_pair("����", "2012676"));
	map1.insert(make_pair("�ð�", "2010527"));

	for_each(map1.begin(), map1.end(), count);
	cout << "2010��ѧ������Ϊ��" << num2010 << endl;
	cout << "2011��ѧ������Ϊ��" << num2011 << endl;
	cout << "2012��ѧ������Ϊ��" << num2012 << endl;

	//����������ѧ�Ų���
	while (true)
	{
		cout << endl << "����������ѧ�ţ�" << endl;
		cin >> find;
		for (pos = map1.begin(); pos != map1.end(); pos++)
		{
			if (pos->first == find || pos->second == find)
			{
				cout << pos->first << "," << pos->second << endl << endl;
				break;
			}
		}
		if (pos == map1.end())
		{
			cout << "�����ڸ�ѧ����" << endl;
		}
		getchar();
		getchar();
	}
}