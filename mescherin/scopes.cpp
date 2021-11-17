#include <iostream>
#include <vector>



char y = 'c'; //глобальная переменная

//declaration != difinition
//One definition rule
int f(int x);
int f(int x);
/*int g(int z) {
    if (z == 0) return 0;
    std::cout << 1 << std::endl;
    f(z - 1);
}

int f(int x) {
    if (x == 0) return 0;
    std::cout << 2 << std:: endl;
    g(x - 1);
}
*/
namespace N {
int x = 3;
int f(int x);
namespace NN 
{
    int x = 22;
}
}
//qualified-id
int N::f(int x) {
    return x * 2;
}
using vi = std::vector<int>;
int main() {
    vi v = {1, 2, 3, 4};
//    int x = 5;
    int vi;
    using N::x;
    std::cout << x << '\n';
    {
        int x = 10;
        std::cout << N::NN::x << '\n';//обращение к глобальному x
    }
    std::cout << N::f(x) << '\n';
}
