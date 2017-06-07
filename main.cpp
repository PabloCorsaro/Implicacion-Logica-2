#include <iostream>

using namespace std;

int main()
{
    char resp1, resp2, resp3;
    bool respu1 = false;
    bool respu2 = false;
    bool respu3 = false;

    cout << "Bienvenido" << endl;
    cout << "Voto con boleta no oficializada? (S o N)" << endl;
    cin >> resp1;
    cout << "Voto con papel de cualquier color o con imagenes de cualquier naturaleza? (S o N)" << endl;
    cin >> resp2;
    cout << "Voto mediante dos o más boletas de la misma categoría de candidatos y diferente agrupación política? (S o N)" << endl;
    cin >> resp3;

    if(resp1 == 'S')
    {
        respu1 = true;
    }
    if(resp2 == 'S')
    {
        respu2 = true;
    }
    if(resp3 == 'S')
    {
        respu3 = true;
    }

    if(respu1 || respu2 || respu3)
    {
        cout << "Voto anulado." << endl;
    }
    else
    {
        cout << "Voto aprobado." << endl;
    }

    return 0;
}
