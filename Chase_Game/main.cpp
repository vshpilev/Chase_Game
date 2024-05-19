#include <iostream> // Включаем заголовочный файл для ввода/вывода
#include <math.h> // Включаем заголовочный файл для использования математических функций
#include "Arena.h" // Включаем заголовочный файл для доступа к классу Arena
#include "Character.h" // Включаем заголовочный файл для доступа к классу Character

void initializeGame(Arena& arena) { // Функция инициализации игры, принимает объект арены в качестве параметра
    Character character, opponent; // Создание объектов персонажа и оппонента
    int side; // Переменная для выбора стороны
    int amountOfMove; // Переменная для количества ходов

    // Вывод сообщения о выборе стороны и ввод стороны
    std::cout << "Choose your side\n"
        "1. Prey\n"
        "2. Predator\n";
    std::cin >> side; // Ввод стороны

    // Инициализация в зависимости от выбранной стороны
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
    else throw std::invalid_argument("invalid argument"); // Генерация исключения при недопустимом аргументе

    // Вывод сообщения о выборе количества ходов и ввод количества ходов
    std::cout << "Choose amount of moves\n";
    std::cin >> amountOfMove;

    // Установка количества ходов, персонажей и оппонента в объект арены
    arena.setAmountOfMove(amountOfMove);
    arena.setCharacter(character);
    arena.setOpponent(opponent);
    system("cls"); // Очистка экрана
}

int main() {
    Arena arena; // Создание объекта арены
    initializeGame(arena); // Вызов функции инициализации игры

    while (1) { // Бесконечный цикл игрового процесса

        // Объявление переменных для типа хода, расстояния и позиций персонажей
        int type;
        int distance;
        Point2D characterPos, opponentPos;
        characterPos = arena.getCharacter().getPos(); // Получение позиции персонажа
        opponentPos = arena.getOpponent().getPos(); // Получение позиции оппонента
        int a = abs(characterPos.getX() - opponentPos.getX()); // Расчет разницы по оси X
        int b = abs(characterPos.getY() - opponentPos.getY()); // Расчет разницы по оси Y
        float dis = sqrt(pow(a, 2) + pow(b, 2)); // Расчет расстояния между персонажем и оппонентом

        arena.showArena(); // Отображение арены

        // Проверка условий победы или поражения
        if (dis < 1) {
            if (arena.getCharacter().getType() == "Predator")
                std::cout << "You win!"; // Вывод сообщения о победе
            else
                std::cout << "You lose!"; // Вывод сообщения о поражении
            break; // Завершение игры
        }

        if (!arena.getAmountOfMove()) {
            if (arena.getCharacter().getType() == "Predator")
                std::cout << "You lose!"; // Вывод сообщения о поражении
            else
                std::cout << "You win!"; // Вывод сообщения о победе
            break; // Завершение игры
        }

        // Выбор хода в зависимости от типа персонажа
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
            std::cin >> type; // Ввод типа хода
            arena.moveCharacter(type); // Выполнение хода персонажа
            arena.moveOpponent(); // Перемещение оппонента
        }
        else {
            std::cout << "Choose your move\n"
                "0. Down\n" // Вниз
                "1. Up\n" // Вверх
                "2. Right\n" // Вправо
                "3. Left\n"; // Влево
            std::cin >> type; // Ввод типа хода
            std::cout << "How far do you want to go\n";
            std::cin >> distance; // Ввод расстояния для хода
            arena.moveCharacter(type, distance); // Выполнение хода с указанным расстоянием
            arena.moveOpponent(); // Перемещение оппонента
        }
        system("cls"); // Очистка экрана
    }

    return 0;
}
