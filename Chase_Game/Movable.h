#ifndef CHASEGAME_MOVABLE_H // �������� ������� ������� CHASEGAME_MOVABLE_H
#define CHASEGAME_MOVABLE_H // ���� ������ �� ���������, ���������� ���

class Movable { // ���������� ������������ ������ Movable

public:
    int type; // ���������� ��� �������� ���� ������� (��������, ���� ��������)
    virtual void move(int type) = 0; // ����� ����������� ������� move, ������� ������ ���� �������������� � ����������� �������
};

#endif // ���������� �������� ������� CHASEGAME_MOVABLE_H
