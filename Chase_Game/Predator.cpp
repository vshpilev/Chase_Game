#include "Predator.h" // Включаем заголовочный файл Predator.h для доступа к определению класса Predator
#include <stdexcept> // Включаем стандартный заголовочный файл <stdexcept> для использования стандартных исключений

// Определение метода перемещения хищника
void Predator::move(int type, int distance) {
    // Проверка типа перемещения и границы поля
    switch (type) {
    case 0: // Перемещение вправо
        if (pos.getX() + distance > 29 || pos.getX() + distance < 0) { // Проверка выхода за границы по оси X
            throw std::runtime_error("Out of bounds on X-axis"); // Генерация исключения при выходе за границы
        }
        pos.setX(pos.getX() + distance); // Обновление координаты X хищника
        break;
    case 1: // Перемещение влево
        if (pos.getX() - distance < 0 || pos.getX() - distance > 29) { // Проверка выхода за границы по оси X
            throw std::runtime_error("Out of bounds on X-axis"); // Генерация исключения при выходе за границы
        }
        pos.setX(pos.getX() - distance); // Обновление координаты X хищника
        break;
    case 2: // Перемещение вниз
        if (pos.getY() + distance > 29 || pos.getY() + distance < 0) { // Проверка выхода за границы по оси Y
            throw std::runtime_error("Out of bounds on Y-axis"); // Генерация исключения при выходе за границы
        }
        pos.setY(pos.getY() + distance); // Обновление координаты Y хищника
        break;
    case 3: // Перемещение вверх
        if (pos.getY() - distance < 0 || pos.getY() - distance > 29) { // Проверка выхода за границы по оси Y
            throw std::runtime_error("Out of bounds on Y-axis"); // Генерация исключения при выходе за границы
        }
        pos.setY(pos.getY() - distance); // Обновление координаты Y хищника
        break;
    }
}

// Инициализация хищника без параметров
void Predator::initialize() {
    pos.initialize(); // Используем метод initialize() объекта pos для инициализации позиции хищника
}

// Инициализация хищника с заданными координатами
void Predator::initialize(Point2D point) {
    pos.initialize(point); // Используем метод initialize() объекта pos с переданными координатами для инициализации позиции хищника
}

// Получение текущей позиции хищника
const Point2D& Predator::getPos() const {
    return pos; // Возвращаем константную ссылку на объект pos, содержащий текущую позицию хищника
}
