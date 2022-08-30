#pragma once
//Zadanie 4.
//Zaimplemnetuj i przetestuj klas� Pen, kt�ra slu�y do przesuwania(rysowania) d�ugopisem po uk�adzie wsp�rz�dnych.
//
//Za�o�enia:
//Poczatek(0, 0);
//orientacja pionowo w g�r�(X rosn�co)
//
class Pen
{
public:
    Pen();
    void Forward(int distance);
    void TurnLeft();
    void TurnRight();
    int getX();
    int getY();

private:
    int posX;
    int posY;
    int orientationX;
    int orientationY;
}
};

