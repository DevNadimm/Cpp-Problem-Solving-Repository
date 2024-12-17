#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int dicount;
    int discountPrice;
    float price;
    cin >> dicount >> discountPrice;

    price = (discountPrice / (1 - (dicount/100.00)));
    cout << fixed << setprecision(2) << price << endl;
    return 0;
}