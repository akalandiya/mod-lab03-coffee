#pragma once
#include <string>
using namespace std;

enum STATES {
	OFF,
	WAIT,
	COOK,
	ACCEPT,
	CHECK,
};

class Automata {
private:
	int cash; //для хранения текущей суммы
	string menu[4] = { "Cappuccino", "Latte", "Green tea", "Black tea" }; //напитки
	int prices[4] = { 120, 130, 100, 100 }; //цены
	STATES state; //текущее состояние автомата
	int choice_user;

public:
	Automata(); //конструктор
	void on(); //включение автомата;
	void off();//выключение автомата;
	void coin(int c); //занесение денег на счёт пользователем
	string* etMenu(); // считывание меню с напитками и ценами для пользователя;
	STATES getState();//считывание текущего состояния для пользователя;
	void choice(int c);//выбор напитка пользователем;
	void check();//проверка наличия необходимой суммы;
	int cancel();//отмена сеанса обслуживания пользователем;
	void cook();//имитация процесса приготовления напитка;
	void finish();//завершение обслуживания пользователя.
};