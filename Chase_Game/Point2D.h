#ifndef CHASEGAME_POINT2D_H // Проверка наличия макроса CHASEGAME_POINT2D_H
#define CHASEGAME_POINT2D_H // Если макрос не определен, определяем его

class Point2D { // Объявление класса Point2D

private: // Закрытые члены класса Point2D
    int x; // Координата X
    int y; // Координата Y
public: // Публичные методы класса Point2D
    void initialize(); // Метод для инициализации координат (без параметров)
    void initialize(Point2D pos); // Перегруженный метод для инициализации координат с помощью другого объекта Point2D

    int getX() const; // Метод для получения координаты X
    void setX(int x); // Метод для установки координаты X

    int getY() const; // Метод для получения координаты Y
    void setY(int y); // Метод для установки координаты Y
};

#endif // Завершение проверки макроса CHASEGAME_POINT2D_H
