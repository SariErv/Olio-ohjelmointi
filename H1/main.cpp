#include <iomanip>
#include <iostream>
#include <MyFunctions.h>

using namespace std;



int main()
{
    // int num;
    // int tulos;
    int a, b;

    // cout << "Lasketaan kertoma!" << endl;
    // cout << "Anna positiivinen kokonaisluku" <<endl;
    // cin >> num;

    // tulos=kertoma(num);

    // if (tulos == -1){

    //     cout<<"kertomaa ei voi laskea negatiiviselle luvulle"<<endl;

    // }else{

    //     cout << "Luvun " <<num<< "kertoma ="<<kertoma(num)<<endl;

    // }



    cout<<"Anna kokonaisluku"<<endl;
    cin >> a;

    cout<<"Anna toinen kokonaisluku"<<endl;
    cin >> b;

    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    cout << "retSum palauttama summa: " << summa << endl;
    cout << fixed << setprecision(2);
    cout << "retDiv palauttama osamaara: " << osamaara << endl;


    return 0;


}
