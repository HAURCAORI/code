#include <iostream>
#include <vector>
#include <algorithm>

struct link {
    int x;
    int y;
};

struct node {
    int delay;
};

std::vector<node> tail(const std::vector<link>& links, int target) {
    std::vector<node> ret;
    //std::copy_if(links.begin(),links.end(),ret.begin(),[target](link& l){ return l.y == target;});
    return ret;
}

int main()
{
    int test;
    std::cin >> test;
    while(test--) {
        // 입력
        int n;
        int k;
        int w;
        std::cin >> n >> k;

        std::vector<node> nodes;
        nodes.reserve(n);
        for(int i = 0; i < n; ++i) {
            int d;
            std::cin >> d;
            nodes.push_back({d});
        }
        
        std::vector<link> links;
        links.reserve(k);
        for(int i = 0; i < k; ++i) {
            int x;
            int y;
            std::cin >> x >> y;
            links.push_back({x,y});
        }

        std::cin >> w;

        //처리
        auto vec = tail(links, w);
        for(auto it = vec.begin(); it != vec.end(); ++it) {
            std::cout << it->delay << std::endl;
        }
        //출력
    }
    return 0;
}