#include "Predator.h" // �������� ������������ ���� Predator.h ��� ������� � ����������� ������ Predator
#include <stdexcept> // �������� ����������� ������������ ���� <stdexcept> ��� ������������� ����������� ����������

// ����������� ������ ����������� �������
void Predator::move(int type, int distance) {
    // �������� ���� ����������� � ������� ����
    switch (type) {
    case 0: // ����������� ������
        if (pos.getX() + distance > 29 || pos.getX() + distance < 0) { // �������� ������ �� ������� �� ��� X
            throw std::runtime_error("Out of bounds on X-axis"); // ��������� ���������� ��� ������ �� �������
        }
        pos.setX(pos.getX() + distance); // ���������� ���������� X �������
        break;
    case 1: // ����������� �����
        if (pos.getX() - distance < 0 || pos.getX() - distance > 29) { // �������� ������ �� ������� �� ��� X
            throw std::runtime_error("Out of bounds on X-axis"); // ��������� ���������� ��� ������ �� �������
        }
        pos.setX(pos.getX() - distance); // ���������� ���������� X �������
        break;
    case 2: // ����������� ����
        if (pos.getY() + distance > 29 || pos.getY() + distance < 0) { // �������� ������ �� ������� �� ��� Y
            throw std::runtime_error("Out of bounds on Y-axis"); // ��������� ���������� ��� ������ �� �������
        }
        pos.setY(pos.getY() + distance); // ���������� ���������� Y �������
        break;
    case 3: // ����������� �����
        if (pos.getY() - distance < 0 || pos.getY() - distance > 29) { // �������� ������ �� ������� �� ��� Y
            throw std::runtime_error("Out of bounds on Y-axis"); // ��������� ���������� ��� ������ �� �������
        }
        pos.setY(pos.getY() - distance); // ���������� ���������� Y �������
        break;
    }
}

// ������������� ������� ��� ����������
void Predator::initialize() {
    pos.initialize(); // ���������� ����� initialize() ������� pos ��� ������������� ������� �������
}

// ������������� ������� � ��������� ������������
void Predator::initialize(Point2D point) {
    pos.initialize(point); // ���������� ����� initialize() ������� pos � ����������� ������������ ��� ������������� ������� �������
}

// ��������� ������� ������� �������
const Point2D& Predator::getPos() const {
    return pos; // ���������� ����������� ������ �� ������ pos, ���������� ������� ������� �������
}
