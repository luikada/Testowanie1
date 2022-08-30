#pragma once
//Zadanie 4.
//Zaimplemnetuj i przetestuj klasê Pen, która slu¿y do przesuwania(rysowania) d³ugopisem po uk³adzie wspó³rzêdnych.
//
//Za³o¿enia:
//Poczatek(0, 0);
//orientacja pionowo w górê(X rosn¹co)
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

