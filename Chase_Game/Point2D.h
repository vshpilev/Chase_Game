#ifndef CHASEGAME_POINT2D_H // �������� ������� ������� CHASEGAME_POINT2D_H
#define CHASEGAME_POINT2D_H // ���� ������ �� ���������, ���������� ���

class Point2D { // ���������� ������ Point2D

private: // �������� ����� ������ Point2D
    int x; // ���������� X
    int y; // ���������� Y
public: // ��������� ������ ������ Point2D
    void initialize(); // ����� ��� ������������� ��������� (��� ����������)
    void initialize(Point2D pos); // ������������� ����� ��� ������������� ��������� � ������� ������� ������� Point2D

    int getX() const; // ����� ��� ��������� ���������� X
    void setX(int x); // ����� ��� ��������� ���������� X

    int getY() const; // ����� ��� ��������� ���������� Y
    void setY(int y); // ����� ��� ��������� ���������� Y
};

#endif // ���������� �������� ������� CHASEGAME_POINT2D_H
