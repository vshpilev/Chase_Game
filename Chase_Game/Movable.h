#ifndef CHASEGAME_MOVABLE_H // Проверка наличия макроса CHASEGAME_MOVABLE_H
#define CHASEGAME_MOVABLE_H // Если макрос не определен, определяем его

class Movable { // Объявление абстрактного класса Movable

public:
    int type; // Переменная для хранения типа объекта (например, типа движения)
    virtual void move(int type) = 0; // Чисто виртуальная функция move, которая должна быть переопределена в производных классах
};

#endif // Завершение проверки макроса CHASEGAME_MOVABLE_H
