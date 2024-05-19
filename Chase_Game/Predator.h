#ifndef CHASEGAME_PREDATOR_H // ѕроверка наличи€ макроса CHASEGAME_PREDATOR_H
#define CHASEGAME_PREDATOR_H // ≈сли макрос не определен, определ€ем его

#include "Point2D.h" // ¬ключение заголовочного файла с объ€влением класса Point2D дл€ доступа к его определению
#include "Movable.h" // ¬ключение заголовочного файла с объ€влением класса Movable дл€ доступа к его определению

class Predator { // ќбъ€вление класса Predator

private:
    Point2D pos; // ѕриватное поле класса Predator дл€ хранени€ позиции хищника типа Point2D
public:
    void initialize(); // ќбъ€вление публичного метода initialize() класса Predator без параметров дл€ инициализации хищника

    const Point2D& getPos() const; // ќбъ€вление публичного метода getPos() класса Predator, возвращающего константную ссылку на позицию хищника

    void initialize(Point2D point); // ќбъ€вление публичного перегруженного метода initialize() класса Predator с параметром типа Point2D дл€ инициализации хищника с заданными координатами

    void move(int type, int distance); // ќбъ€вление публичного метода move() класса Predator с параметрами типа int дл€ типа движени€ и рассто€ни€ перемещени€
};

#endif // «авершение проверки макроса CHASEGAME_PREDATOR_H
