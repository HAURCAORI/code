#include <iostream>
/*
#include <chrono>
#define BEGIN_CHRONO std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
#define END_CHRONO std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - begin).count() << "[ms]" << std::endl;
*/
int main() {
    
    int n;
    int ret = -1;
    int count = 0;
    std::cin >> n;
     
    for(long i = 1; i <= 9876543210; i++) {
        if(count >= n) { ret = i-1; break; }
        bool result = true;
        long x = i;
        
        while( x >= 10) {
            if( (x % 10) >= ((x / 10) % 10) ) {
                result = false;
                break;
            }
            x /= 10;
        }
        if(result) { ++count; }
    }
    std::cout << ret << std::endl;
    return 0;
}