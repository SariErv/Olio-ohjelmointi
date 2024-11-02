#include <iostream>
#include <MyFunctions.h>

using namespace std;

int main()
{
    int num;
    int tulos;

    cout << "Lasketaan kertoma!" << endl;
    cout << "Anna positiivinen kokonaisluku" <<endl;
    cin >> num;

    tulos=kertoma(num);

    if (tulos == -1){

        cout<<"kertomaa ei voi laskea negatiiviselle luvulle"<<endl;

    }else{

        cout << "Luvun " <<num<< "kertoma ="<<kertoma(num)<<endl;

    }

    return 0;
}
