#include <iostream>
#include <cmath>

unsigned long long factorial(unsigned int n){
    unsigned long long per {1};
    for (int i {1}; i<=n; ++i){
        per*=i;
    }
    return per;
}


double exp_sum(unsigned int n){
    double per = 0;
    for (int i {0} ; i <= n; ++i){
        per += (1.0/(factorial(2*i)));
    }
    return per;
}

int main() {
    const double e {std::exp (1.0)};
    double f {(e+(1.0/e))/2.0};

    for  (unsigned int i {0}; i<10; i++){
        double diff {std::abs(exp_sum(i) - f)};
        std::cout << i << "\t" << diff << std::endl;
    }
    return 0;
}
