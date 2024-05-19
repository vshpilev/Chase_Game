#include <iostream>
#include <iomanip>

#include "Arena.h"

void Arena::showArena() {
    Point2D characterPos, opponentPos;
    characterPos = character.getPos();
    opponentPos = opponent.getPos();
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            if (i == 0 || i == 31)                         std::cout << std::setw(1) << "- ";
            else if (j == 0 || j == 31)                      std::cout << std::setw(1) << "| ";
            else if (characterPos.getX() == i - 1 && characterPos.getY() == j - 1) {
                if (character.getType() == "Prey")          std::cout << std::setw(1) << "* ";
                else if (character.getType() == "Predator") std::cout << std::setw(1) << "& ";
            }
            else if (opponentPos.getX() == i - 1 && opponentPos.getY() == j - 1) {
                if (opponent.getType() == "Prey")           std::cout << std::setw(1) << "* ";
                else if (opponent.getType() == "Predator")  std::cout << std::setw(1) << "& ";
            }
            else std::cout << std::setw(1) << "  ";
            if (i == 0 && j == 31)                          std::cout << "  & - Predator";
            if (i == 1 && j == 31)                          std::cout << "  * - Prey";
        }
        std::cout << "\n";
    }
}

void Arena::moveCharacter(int type) {
    character.move(type);
}

void Arena::moveCharacter(int type, int distance) {
    character.move(type, distance);
}

void Arena::moveOpponent()
{
    this->amountOfMove--;
    int type = 0, distance = 0;

    Point2D characterPos = character.getPos();
    Point2D opponentPos = opponent.getPos();
    if (opponent.getType() == "Predator") {
        if (abs(characterPos.getX() - opponentPos.getX()) > abs(characterPos.getY() - opponentPos.getY())) {
            if (characterPos.getX() > opponentPos.getX())
                opponent.move(0, abs(characterPos.getX() - opponentPos.getX()) > 3 ? 3 : abs(characterPos.getX() - opponentPos.getX()));
            if (characterPos.getX() < opponentPos.getX())
                opponent.move(1, abs(characterPos.getX() - opponentPos.getX()) > 3 ? 3 : abs(characterPos.getX() - opponentPos.getX()));
        }
        else {
            if (characterPos.getY() > opponentPos.getY())
                opponent.move(2, abs(characterPos.getY() - opponentPos.getY()) > 3 ? 3 : abs(characterPos.getY() - opponentPos.getY()));
            if (characterPos.getY() < opponentPos.getY())
                opponent.move(3, abs(characterPos.getY() - opponentPos.getY()) > 3 ? 3 : abs(characterPos.getY() - opponentPos.getY()));
        }
    }
    else {
        if (characterPos.getX() >= opponentPos.getX() && characterPos.getY() >= opponentPos.getY())
        {
            if (opponentPos.getX() == 0 && opponentPos.getY() == 0) return;
            else if (opponentPos.getX() == 0) opponent.move(3);
            else if (opponentPos.getY() == 0) opponent.move(1);
            else opponent.move(7);
        }
        if (characterPos.getX() >= opponentPos.getX() && characterPos.getY() <= opponentPos.getY())
        {
            if (opponentPos.getX() == 0 && opponentPos.getY() == 29) return;
            else if (opponentPos.getX() == 0) opponent.move(2);
            else if (opponentPos.getY() == 29) opponent.move(1);
            else opponent.move(6);
        }
        if (characterPos.getX() <= opponentPos.getX() && characterPos.getY() >= opponentPos.getY())
        {
            if (opponentPos.getX() == 29 && opponentPos.getY() == 0) return;
            else if (opponentPos.getX() == 29) opponent.move(3);
            else if (opponentPos.getY() == 0) opponent.move(0);
            else opponent.move(5);
        }
        if (characterPos.getX() <= opponentPos.getX() && characterPos.getY() <= opponentPos.getY())
        {
            if (opponentPos.getX() == 29 && opponentPos.getY() == 29) return;
            else if (opponentPos.getX() == 29) opponent.move(2);
            else if (opponentPos.getY() == 29) opponent.move(0);
            else opponent.move(4);
        }
    }
}

void Arena::setCharacter(const Character& character) {
    Arena::character = character;
}

void Arena::setAmountOfMove(int amountOfMove)
{
    this->amountOfMove = amountOfMove;
}

void Arena::setOpponent(const Character& opponent) {
    Arena::opponent = opponent;
}

int Arena::getAmountOfMove()
{
    return amountOfMove;
}

Character Arena::getCharacter() const {
    return character;
}

Character Arena::getOpponent() const {
    return opponent;
}