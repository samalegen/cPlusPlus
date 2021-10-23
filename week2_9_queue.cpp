#include <iostream>
#include <vector>
#include <string>



int main() {
    int Q;
    std::string question;
    int count;
    std::vector<bool> v;
    std::vector<int> w;
    std::cin >> Q;

    for (int i = 0; i < Q; i++) {
        std::cin >> question;
        if (question == "WORRY_COUNT") {
            int worry = 0;
            if (v.size() == 0) {
                worry = 0;
            }
            else {
                for (int i = 0; i < v.size(); ++i) {
                    if (v[i] == true) {
                        ++worry;
                    }
                }
            }
            w.push_back(worry);
        }
        else {
            std::cin >> count;
            if (question == "COME") {
                v.resize(v.size() + count, false);
            }
            if (question == "WORRY") {
                v[count] = true;
            }
            if (question == "QUIET") {
                v[count] = false;
            }
        }
    }
    for (auto i : w) {
        std::cout << i << "\n";
    }
}
