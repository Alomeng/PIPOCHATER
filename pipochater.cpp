#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include <ctime>
#include <random>

using namespace std;


void PipochaterGet() {
	system("chcp 65001 && cls");
	setlocale(LC_ALL, "Russian");
	cout << "Вы гладёте пипочатера в печь" << endl;
	Sleep(3000);
	cout << "ПИПОЧАТЕР ГОТОВ" << endl;
	Sleep(700);
	vector<string>part = { "голова", "шея", "плечи", "руки", "грудь", "живот", "спина", "ягодицы", "ноги", "ступни", "колени", "локти", "кишечник", "печень", "сердце", "легкие", "мозг", "кости" };
	string str,s;
	cout << "НАЧИНАЕМ РАЗДАЧУ" << endl;
	while (!(part.empty())) {
		srand(time(NULL));
		cout << "Кто берёт часть пипочатера? ";
		cin >> str;
		int randombody = rand() % part.size();
		Sleep(300);
		cout << str << " получает от пипочатера: " << part[randombody] << endl;
		part.erase(part.begin() + randombody);
		Sleep(600);
	}
	cout <<"\n\n"<< "пипочатер разобран. Всем приятного аппетита!!" << endl;
	cin >> s;
}

int main()
{
	system("chcp 65001 && cls");
	setlocale(LC_ALL, "Russian");
	PipochaterGet();
	return 0;
}


