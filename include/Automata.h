// Copyright 2022 UNN-IASR
#pragma once
#include <iostream>
#include <string>
#include <array>
enum class States {
    Off,
    Wait,
    Accept,
    Check,
    Cook
};
class Automata {
    States state{States::Off}; // Текущее состояние автомата
    int cash{0}; // Для хранения текущей суммы
    const std::array<std::string, 10> menu{
        "Espresso", "Americano", "Cappuccino", "Latte", "FlatWhite",
        "Macchiato", "BlackTea", "GreenTea", "Cacao", "HotChocolate"
    };
    int option{-1}; // Выбор напитка пользователя (начальное значение -1, т.е. не выбрано)
    const std::array<int, 10> prices {
        80, 100, 150, 180, 160, 190, 120, 120, 140, 170
    };
public:
    Automata(); // Конструктор
    void on(); // Включение автомата
    void off(); // Выключение автомата
    void coin(int amount); // Занесение денег на счёт пользователем
    void getMenu() const; // Считывание меню
    States getState() const; // Считывание текущего состояния для пользователя
    void choice(int option); // Выбор напитка пользователем
    bool check() const; // Проверка наличия необходимой суммы
    int getCash(); // Возвращает сдачу/деньги
    void cancel(); // Отмена сеанса обслуживания пользователем
    void cook(); // Имитация процесса приготовления напитка
    void finish(); // Завершение обслуживания пользователя
};
