#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

vector<size_t> topk_indices(const vector<float> &v, int k) {
    vector<size_t> idx(v.size());
    iota(idx.begin(), idx.end(), 0);
    nth_element(idx.begin(), idx.begin()+k, idx.end(), [&v](size_t i1, size_t i2) {return v[i1] < v[i2];});
    return idx;
}


