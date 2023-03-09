#include <iostream>

int main()
{
    int input[10], res=0;
    for(int i=0; i<5; i++) {
        std::cin>>input[i];
        res += input[i];
    }
    std::cout<<res;
    return 0;
}