#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    for (int i=0; i<=20; i++){
        if ((i%4)==0){
            continue;
        }
        cout << i << ", ";
    }
}
