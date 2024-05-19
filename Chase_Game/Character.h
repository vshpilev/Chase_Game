#ifndef CHASEGAME_CHARACTER_H
#define CHASEGAME_CHARACTER_H
// провер€ем что CHASEGAME_CHARACTER_H не определен, если соответствует - код выполнен , нет - скип

#include <string>
#include "Predator.h" // вкл заголовочного файла дл€ объ€вл класса predator
#include "Prey.h" //вкл заголовочного файла дл€ объ€вл класса prey

class Character { //объ€вл класса

private: // члены класса будут приватными-доступны только внутри класса
    std::string type; // приватное поле дл€ хранени€ типа перса
    Predator predator;
    Prey prey;
public: // члены класса будут публичными-доступны извне класса
    const std::string& getType() const; // объ€вл метода класса дл€ получени€ типа перса
    void initialize(); //объ€вл метода класса дл€ инициализации перса
    void initialize(Point2D point); //объ€вл метода класса дл€ инициализации перса с передачей объекта 
    void setType(const std::string& type);// объ€вл метода класса дл€ установки типа перса
    void move(int type); //объ€вл метода класса дл€ перемещени€ перса по заданному типу
    void move(int type, int distance); //объ€вл метода класса дл€ перемещени€ перса по заданному типу на указанное рассто€ние
    Point2D getPos(); //объ€вл метода класса дл€ получени€ позиции перса

};

//заверш определени€ загол файла 
#endif //CHASEGAME_CHARACTER_H