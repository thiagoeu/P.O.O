#include <iostream>
#include <string>

using std::string;

int main(void)
{
    using std::cout; using std::endl;

    for (int i = 10; i < 1001; i = i+10)
    {
        cout << i << endl;
    }
    
    return 0;
}
