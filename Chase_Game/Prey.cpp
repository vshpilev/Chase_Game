#include "Prey.h" // ��������� ������������� ����� � ����������� ������ Prey ��� ������� � ��� ������� � ������
#include <stdexcept> // ��������� ������������� ����� <stdexcept> ��� ������������� ����������� ���������� C++

void Prey::move(int type) { // ����������� ������ move() ������ Prey, ������� ��������� ��� �������� � �������� ���������
    switch (type) { // ������ ��������� switch ��� ��������� ��������� ��������� ���� ��������
    case 0: // ���� ��� �������� ����� 0
        if (pos.getX() + 1 > 29) throw std::runtime_error("out of bound"); // �������� �� ������ ������ �� ������� ���� �� ��� X
        pos.setX(pos.getX() + 1); // ���������� ���������� X ������� ������ �� 1
        break; // ���������� ��������� ������ 0

        // ��� ������� �������� ���� �������� ����������� ����� �� ������� ���� �� ���� X � Y, ����� ���������� ��������������� �����������
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

void Prey::initialize() { // ����������� ������ initialize() ������ Prey ��� ����������
    pos.initialize(); // ����� ������ initialize() ��� ������������� ������� ������
}

void Prey::initialize(Point2D point) { // ����������� ������ initialize() ������ Prey � ���������� ���� Point2D
    pos.initialize(point); // ����� ������ initialize() ��� ������������� ������� ������ � ��������� ������������
}

const Point2D& Prey::getPos() const { // ����������� ������ getPos() ������ Prey, ������������� ����������� ������ �� ������� ������
    return pos; // ������� ����������� ������ �� ������ Point2D, �������������� ������� ������
}
