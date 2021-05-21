#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int casos, cont = 0, i, a;
    string texto;
    cin >> casos;
    getchar();
    while (cont < casos){
        cin >> texto;
        cin >> a;
        for (i = 0; i < texto.length(); i++){
            texto[i] = texto[i] - a;
            if (texto[i] > 90){
                texto[i] = texto[i] - 26;
            }else{
                if (texto[i] < 65){
                    texto[i] = texto[i] + 26;
                }
            }
        }
        cout << texto <<endl;
        cont++;
    }
    return 0;
}
