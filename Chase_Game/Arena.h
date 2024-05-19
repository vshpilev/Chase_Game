#ifndef CHASEGAME_ARENA_H //�������� ������� ����������� ������� CHASEGAME_ARENA_H
#define CHASEGAME_ARENA_H

// ����������� �������  ������ Prey, Predator � Character
#include "Prey.h"
#include "Predator.h"
#include "Character.h"

class Arena { // ����������� ������ Arena

private:
    int amountOfMove; // ���-�� �����
    int size; // ������ �����
    Character character, opponent; // ������� ������
public:
    void setCharacter(const Character& character); // ���������� ���������

    void setAmountOfMove(int amountOfMove);  // ���������� ���-�� �����

    int getAmountOfMove(); // �������� ���-�� �����

    Character getCharacter() const; // �������� ��������� (����������� �����)

    Character getOpponent() const; // �������� ��������� (����������� �����)

    void setOpponent(const Character& opponent);

    void showArena(); // ���������� �����

    void moveCharacter(int type); // ����������� �����
    void moveCharacter(int type, int distance); // ����������� ����� �� �������� ����������

    void moveOpponent(); // ����������� ���������
};


#endif //CHASEGAME_ARENA_H