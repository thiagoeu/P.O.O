#include <iostream>

using namespace std;


int applePrice (int apple){
    if (apple < 12){
        return (apple * 1.5);
    }else{
        return (apple * 1.1);
    }

}

int main(void)
{
    
    int apple{};
    cout << "Digite o numero de macas que deseja comprar: " 
         << '\n';
    cin >> apple;

    cout << "O valor final eh de R$ "
         << applePrice(apple);

    return 0;
}
