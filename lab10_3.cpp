#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count = 0 ;
    double Zigma1 , Zigma2 ;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        Zigma1+=atof(textline.c_str());
        Zigma2+=pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of data = "<< count << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< Zigma1 / count << "\n" ;
    cout << "Standard deviation = "<<sqrt((Zigma2/count)-pow((Zigma1 / count),2));
    return 0;
}

