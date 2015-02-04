#include <iostream>

using namespace std;

class Nodo
{
    int num;
    Nodo* sig;
    Nodo(int num)
    {
        this->num = num;
        sig = NULL;
    }
};

class Cola
{
public:
    Nodo*inicio;
    Cola()
    {
        inicio = NULL;
    }

    void push(int num)
    {
    }

    void pop()
    {
    }

    int front()
    {
    }

    bool empty()
    {
        return inicio == NULL;
    }
};

int main()
{

    return 0;
}






