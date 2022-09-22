#include <iostream>
#include <math.h>
#include <vector>

std::vector<long> get(int first, int size) {
    if(size == 0) {
        return std::vector<long>{0};
    }
    if(size == 1) {
        return std::vector<long>{first};
    }
    std::vector<long> ret;
    for(int j = 0; j < first; j++) {
        std::vector<long> vec = get(j,size-1);
        for(auto it = vec.begin(); it != vec.end(); ++it) {
            ret.push_back(first * std::pow(10,size-1) + *it);
        }
    }
    return ret;
}

long getValue(int n) {
    int count = 0;
    for(int i = 1; i < 11; ++i) {
        for(int j = 0; j < 10; ++j) {
            std::vector<long> vec = get(j,i);
            count += vec.size();
            if(count > n) {
                return vec[vec.size() - count + n];
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << getValue(n) << std::endl;

        return 0;
    }