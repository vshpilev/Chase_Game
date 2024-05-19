#ifndef CHASEGAME_PREY_H // �������� ������� ������� CHASEGAME_PREY_H
#define CHASEGAME_PREY_H // ���� ������ �� ���������, ���������� ���

#include "Point2D.h" // ��������� ������������� ����� � ����������� ������ Point2D
#include "Movable.h" // ��������� ������������� ����� � ����������� ������ Movable

class Prey { // ���������� ������ Prey
private:
    Point2D pos; // �������� ���� ������ Prey - ������ ���� Point2D ��� �������� ������� ������
public:
    void initialize(); // ���������� ������ initialize() ������ Prey ��� ������������� ������ ��� ����������
    void initialize(Point2D point); // ���������� �������������� ������ initialize() ������ Prey � ���������� ��� ������������� ������ � �������� ��������

    const Point2D& getPos() const; // ���������� ������ getPos() ������ Prey - ���������� ����������� ������ �� ������� ������

    void move(int type); // ���������� ������ move() ������ Prey ��� ����������� ������ � ������������ � �������� ����� ��������
};

#endif // ���������� �������� ������� CHASEGAME_PREY_H
