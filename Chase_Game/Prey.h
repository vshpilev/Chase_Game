#ifndef CHASEGAME_PREY_H // ѕроверка наличи€ макроса CHASEGAME_PREY_H
#define CHASEGAME_PREY_H // ≈сли макрос не определен, определ€ем его

#include "Point2D.h" // ¬ключение заголовочного файла с объ€влением класса Point2D
#include "Movable.h" // ¬ключение заголовочного файла с объ€влением класса Movable

class Prey { // ќбъ€вление класса Prey
private:
    Point2D pos; // «акрытый член класса Prey - объект типа Point2D дл€ хранени€ позиции добычи
public:
    void initialize(); // ќбъ€вление метода initialize() класса Prey дл€ инициализации добычи без параметров
    void initialize(Point2D point); // ќбъ€вление перегруженного метода initialize() класса Prey с параметром дл€ инициализации добычи с заданной позицией

    const Point2D& getPos() const; // ќбъ€вление метода getPos() класса Prey - возвращает константную ссылку на позицию добычи

    void move(int type); // ќбъ€вление метода move() класса Prey дл€ перемещени€ добычи в соответствии с заданным типом движени€
};

#endif // «авершение проверки макроса CHASEGAME_PREY_H
