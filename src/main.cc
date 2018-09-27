#include "windchillindex.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using edu::vcccd::vc::csv13::computeWindChillIndex;

int main(int argc, char *argv[]){
    double temp = 1.1;
    double velocity = 12.0;
    cout << "With temp of " << temp << " and wind speed of " << velocity << endl;
    cout << "Current Wind Chill: " << computeWindChillIndex(temp, velocity) << endl;
    return 0;
}
