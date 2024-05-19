#ifndef CHASEGAME_CHARACTER_H
#define CHASEGAME_CHARACTER_H
// ��������� ��� CHASEGAME_CHARACTER_H �� ���������, ���� ������������� - ��� �������� , ��� - ����

#include <string>
#include "Predator.h" // ��� ������������� ����� ��� ������ ������ predator
#include "Prey.h" //��� ������������� ����� ��� ������ ������ prey

class Character { //������ ������

private: // ����� ������ ����� ����������-�������� ������ ������ ������
    std::string type; // ��������� ���� ��� �������� ���� �����
    Predator predator;
    Prey prey;
public: // ����� ������ ����� ����������-�������� ����� ������
    const std::string& getType() const; // ������ ������ ������ ��� ��������� ���� �����
    void initialize(); //������ ������ ������ ��� ������������� �����
    void initialize(Point2D point); //������ ������ ������ ��� ������������� ����� � ��������� ������� 
    void setType(const std::string& type);// ������ ������ ������ ��� ��������� ���� �����
    void move(int type); //������ ������ ������ ��� ����������� ����� �� ��������� ����
    void move(int type, int distance); //������ ������ ������ ��� ����������� ����� �� ��������� ���� �� ��������� ����������
    Point2D getPos(); //������ ������ ������ ��� ��������� ������� �����

};

//������ ����������� ����� ����� 
#endif //CHASEGAME_CHARACTER_H