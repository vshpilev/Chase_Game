#include "Character.h" // ��� ������� ����� ��� ���������� ������ character

const std::string& Character::getType() const { // ����� ������ getType() ������ character - ������� ��� �����
    return type;
}

void Character::setType(const std::string& type) { // ����� ������ setType() ������ character - ������������� ��� �����
    Character::type = type;
}

void Character::initialize() { // ����� ������ initialize() ������ character - �������������� ����� � ����������� �� ��� ����
    if (type == "Prey")
        prey.initialize();
    else
        predator.initialize();
}

void Character::initialize(Point2D point) { // ����� �������������� ������ initialize() ������ character - �������������� ����� � �������� ��������
    if (type == "Prey")
        prey.initialize(point);
    else
        predator.initialize(point);
}

Point2D Character::getPos() { //����� ������ getPos() ������ character - ������� ������� �����
    if (type == "Prey")
        return prey.getPos();
    else
        return predator.getPos();
}

void Character::move(int type) { //����� ������ move() ������ character - ���������� prey � ������������  � �������� ����� ��������
    prey.move(type);
}

void Character::move(int type, int distance) { //����� �������������� ������ move() ������ character - ���������� ������� �� ��������� ���������� � ���������� � �������� ����� ��������
    predator.move(type, distance);
}