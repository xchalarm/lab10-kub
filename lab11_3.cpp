//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>

using namespace std;
double deviation(double x,double y,double z){
    double O = sqrt((x)/y-pow(z,2)) ;
    return O ;
}

int main(){
    int n = 0 ;
    float sum = 0;
    float sum1 = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        sum1 +=pow(atof(textline.c_str()),2) ;
        n++;
    }
    cout << "Number of data = ";
    cout << n <<"\n";
    cout << setprecision(3);
    cout << "Mean = ";
    double U=sum/n ;
    cout << U <<"\n";
    cout << "Standard deviation = ";
    cout <<  sqrt((sum1)/n-pow(U,2)) <<"\n";

    return 0 ;
}