#include "Character.h" // вкл заголов файла для объявления класса character

const std::string& Character::getType() const { // опред метода getType() класса character - возвращ тип перса
    return type;
}

void Character::setType(const std::string& type) { // опред метода setType() класса character - устанавливает тип перса
    Character::type = type;
}

void Character::initialize() { // опред метода initialize() класса character - инициализирует перса в зависимости от его типа
    if (type == "Prey")
        prey.initialize();
    else
        predator.initialize();
}

void Character::initialize(Point2D point) { // опред перегруженного метода initialize() класса character - инициализирует перса с заданной позицией
    if (type == "Prey")
        prey.initialize(point);
    else
        predator.initialize(point);
}

Point2D Character::getPos() { //опред метода getPos() класса character - возвращ позицию перса
    if (type == "Prey")
        return prey.getPos();
    else
        return predator.getPos();
}

void Character::move(int type) { //опред метода move() класса character - перемещает prey в соответствии  с заданным типом движения
    prey.move(type);
}

void Character::move(int type, int distance) { //опред перегруженного метода move() класса character - перемещает хищника на указанное расстояние в зависмости с заданным типом движения
    predator.move(type, distance);
}