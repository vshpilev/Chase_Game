#include <iostream> // �������� ������������ ���� ��� �����/������
#include <math.h> // �������� ������������ ���� ��� ������������� �������������� �������
#include "Arena.h" // �������� ������������ ���� ��� ������� � ������ Arena
#include "Character.h" // �������� ������������ ���� ��� ������� � ������ Character

void initializeGame(Arena& arena) { // ������� ������������� ����, ��������� ������ ����� � �������� ���������
    Character character, opponent; // �������� �������� ��������� � ���������
    int side; // ���������� ��� ������ �������
    int amountOfMove; // ���������� ��� ���������� �����

    // ����� ��������� � ������ ������� � ���� �������
    std::cout << "Choose your side\n"
        "1. Prey\n"
        "2. Predator\n";
    std::cin >> side; // ���� �������

    // ������������� � ����������� �� ��������� �������
    if (side == 1) {
        character.setType("Prey");
        character.initialize();
        opponent.setType("Predator");
        opponent.initialize(character.getPos());
    }
    else if (side == 2) {
        character.setType("Predator");
        character.initialize();
        opponent.setType("Prey");
        opponent.initialize(character.getPos());
    }
    else throw std::invalid_argument("invalid argument"); // ��������� ���������� ��� ������������ ���������

    // ����� ��������� � ������ ���������� ����� � ���� ���������� �����
    std::cout << "Choose amount of moves\n";
    std::cin >> amountOfMove;

    // ��������� ���������� �����, ���������� � ��������� � ������ �����
    arena.setAmountOfMove(amountOfMove);
    arena.setCharacter(character);
    arena.setOpponent(opponent);
    system("cls"); // ������� ������
}

int main() {
    Arena arena; // �������� ������� �����
    initializeGame(arena); // ����� ������� ������������� ����

    while (1) { // ����������� ���� �������� ��������

        // ���������� ���������� ��� ���� ����, ���������� � ������� ����������
        int type;
        int distance;
        Point2D characterPos, opponentPos;
        characterPos = arena.getCharacter().getPos(); // ��������� ������� ���������
        opponentPos = arena.getOpponent().getPos(); // ��������� ������� ���������
        int a = abs(characterPos.getX() - opponentPos.getX()); // ������ ������� �� ��� X
        int b = abs(characterPos.getY() - opponentPos.getY()); // ������ ������� �� ��� Y
        float dis = sqrt(pow(a, 2) + pow(b, 2)); // ������ ���������� ����� ���������� � ����������

        arena.showArena(); // ����������� �����

        // �������� ������� ������ ��� ���������
        if (dis < 1) {
            if (arena.getCharacter().getType() == "Predator")
                std::cout << "You win!"; // ����� ��������� � ������
            else
                std::cout << "You lose!"; // ����� ��������� � ���������
            break; // ���������� ����
        }

        if (!arena.getAmountOfMove()) {
            if (arena.getCharacter().getType() == "Predator")
                std::cout << "You lose!"; // ����� ��������� � ���������
            else
                std::cout << "You win!"; // ����� ��������� � ������
            break; // ���������� ����
        }

        // ����� ���� � ����������� �� ���� ���������
        if (arena.getCharacter().getType() == "Prey") {
            std::cout << "Choose your move\n"
                "0. Down\n"
                "1. Up\n"
                "2. Right\n"
                "3. Left\n"
                "4. Diagonal Down Right\n"
                "5. Diagonal Down Left\n"
                "6. Diagonal Up Right\n"
                "7. Diagonal Up Left\n";
            std::cin >> type; // ���� ���� ����
            arena.moveCharacter(type); // ���������� ���� ���������
            arena.moveOpponent(); // ����������� ���������
        }
        else {
            std::cout << "Choose your move\n"
                "0. Down\n" // ����
                "1. Up\n" // �����
                "2. Right\n" // ������
                "3. Left\n"; // �����
            std::cin >> type; // ���� ���� ����
            std::cout << "How far do you want to go\n";
            std::cin >> distance; // ���� ���������� ��� ����
            arena.moveCharacter(type, distance); // ���������� ���� � ��������� �����������
            arena.moveOpponent(); // ����������� ���������
        }
        system("cls"); // ������� ������
    }

    return 0;
}
