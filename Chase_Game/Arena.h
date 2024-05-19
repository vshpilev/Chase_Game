#ifndef CHASEGAME_ARENA_H //проверка наличия определения символа CHASEGAME_ARENA_H
#define CHASEGAME_ARENA_H

// подключение заголов  файлов Prey, Predator и Character
#include "Prey.h"
#include "Predator.h"
#include "Character.h"

class Arena { // определение класса Arena

private:
    int amountOfMove; // кол-во ходов
    int size; // размер арены
    Character character, opponent; // объекты персов
public:
    void setCharacter(const Character& character); // установить персонажа

    void setAmountOfMove(int amountOfMove);  // установить кол-во ходов

    int getAmountOfMove(); // получить кол-во ходов

    Character getCharacter() const; // получить персонажа (константный метод)

    Character getOpponent() const; // получить оппонента (константный метод)

    void setOpponent(const Character& opponent);

    void showArena(); // отобразить арену

    void moveCharacter(int type); // переместить перса
    void moveCharacter(int type, int distance); // переместить перса на заданное расстояние

    void moveOpponent(); // переместить оппонента
};


#endif //CHASEGAME_ARENA_H