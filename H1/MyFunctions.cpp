#include <iostream>
#include <MyFunctions.h>

using namespace std;

// int kertoma(int n)
// {
//     if (n<0){
//         return -1;
//     }
//     else{
//         int tulos=1;
//         for(int row=1; row<=n; row ++){
//             tulos=row*tulos;
//         }
//         return tulos;
//     }
// }


void calcSum(int a, int b) {
    int summa = a + b;
    cout << "Luvun " <<a<< " ja luvun "<<b<< " summa on " <<summa<<endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virheilmoitus" << endl;
    } else {
        int osamaara = a / b;
        cout << "Luvun " <<a<< " ja luvun "<<b<< " osamaara on " <<osamaara<<endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}


float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Virheilmoitus" << endl;
        return 0;
    } else {
      return static_cast<float>(a) / b;
    }
}
