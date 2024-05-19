#include "Prey.h" // Включение заголовочного файла с объявлением класса Prey для доступа к его методам и членам
#include <stdexcept> // Включение заголовочного файла <stdexcept> для использования стандартных исключений C++

void Prey::move(int type) { // Определение метода move() класса Prey, который принимает тип движения в качестве аргумента
    switch (type) { // Начало оператора switch для обработки различных вариантов типа движения
    case 0: // Если тип движения равен 0
        if (pos.getX() + 1 > 29) throw std::runtime_error("out of bound"); // Проверка не выхода добычи за границы поля по оси X
        pos.setX(pos.getX() + 1); // Увеличение координаты X позиции добычи на 1
        break; // Завершение обработки случая 0

        // Для каждого варианта типа движения проверяется выход за границы поля по осям X и Y, затем происходит соответствующее перемещение
    case 1:
        if (pos.getX() - 1 < 0) throw std::runtime_error("out of bound");
        pos.setX(pos.getX() - 1);
        break;
    case 2:
        if (pos.getY() + 1 > 29) throw std::runtime_error("out of bound");
        pos.setY(pos.getY() + 1);
        break;
    case 3:
        if (pos.getY() - 1 < 0) throw std::runtime_error("out of bound");
        pos.setY(pos.getY() - 1);
        break;
    case 4:
        if (pos.getY() + 1 > 29 || pos.getX() + 1 > 29) throw std::runtime_error("out of bound");
        pos.setX(pos.getX() + 1);
        pos.setY(pos.getY() + 1);
        break;
    case 5:
        if (pos.getX() + 1 > 29 || pos.getY() - 1 < 0) throw std::runtime_error("out of bound");
        pos.setX(pos.getX() + 1);
        pos.setY(pos.getY() - 1);
        break;
    case 6:
        if (pos.getY() + 1 > 29 || pos.getX() - 1 < 0) throw std::runtime_error("out of bound");
        pos.setX(pos.getX() - 1);
        pos.setY(pos.getY() + 1);
        break;
    case 7:
        if (pos.getX() - 1 < 0 || pos.getY() - 1 < 0) throw std::runtime_error("out of bound");
        pos.setX(pos.getX() - 1);
        pos.setY(pos.getY() - 1);
        break;
    }
}

void Prey::initialize() { // Определение метода initialize() класса Prey без параметров
    pos.initialize(); // Вызов метода initialize() для инициализации позиции добычи
}

void Prey::initialize(Point2D point) { // Определение метода initialize() класса Prey с параметром типа Point2D
    pos.initialize(point); // Вызов метода initialize() для инициализации позиции добычи с заданными координатами
}

const Point2D& Prey::getPos() const { // Определение метода getPos() класса Prey, возвращающего константную ссылку на позицию добычи
    return pos; // Возврат константной ссылки на объект Point2D, представляющий позицию добычи
}
