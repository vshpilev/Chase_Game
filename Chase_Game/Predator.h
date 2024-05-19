#ifndef CHASEGAME_PREDATOR_H // �������� ������� ������� CHASEGAME_PREDATOR_H
#define CHASEGAME_PREDATOR_H // ���� ������ �� ���������, ���������� ���

#include "Point2D.h" // ��������� ������������� ����� � ����������� ������ Point2D ��� ������� � ��� �����������
#include "Movable.h" // ��������� ������������� ����� � ����������� ������ Movable ��� ������� � ��� �����������

class Predator { // ���������� ������ Predator

private:
    Point2D pos; // ��������� ���� ������ Predator ��� �������� ������� ������� ���� Point2D
public:
    void initialize(); // ���������� ���������� ������ initialize() ������ Predator ��� ���������� ��� ������������� �������

    const Point2D& getPos() const; // ���������� ���������� ������ getPos() ������ Predator, ������������� ����������� ������ �� ������� �������

    void initialize(Point2D point); // ���������� ���������� �������������� ������ initialize() ������ Predator � ���������� ���� Point2D ��� ������������� ������� � ��������� ������������

    void move(int type, int distance); // ���������� ���������� ������ move() ������ Predator � ����������� ���� int ��� ���� �������� � ���������� �����������
};

#endif // ���������� �������� ������� CHASEGAME_PREDATOR_H
