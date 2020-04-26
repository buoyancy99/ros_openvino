#include "utils.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv){
    const vector<float> v = {0.7, 0.3, 0.1, 0.6, 0.2, 0.4, 0.9, 0.8, 0.5};

    for (auto i: topk_indices(v, 5)) {
        cout << v[i] << endl;
    }
    return 0;
}