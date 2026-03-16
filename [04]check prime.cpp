#include <iostream>
using namespace std;
class Check {
public:
    bool isPrime(int n) {
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
};

int main() {
    Check obj;
    int n=1;
    if(obj.isPrime(n))
        cout<<"prime number";
    else
        cout<<"not a prime number";
    return 0;
}
