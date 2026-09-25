#include <iostream>
using namespace std;

class CCercle
{
    private:
    double rayon;
    
    public:
    CCercle(double r){
        rayon = r;
    }
    double surface(){
        return 3.14159 * rayon * rayon;
    }
    double perimetre(){
        return 2 * 3.14159 * rayon;
    }
    double diametre(){
        return 2 * rayon;
    }
};

int main() {
    CCercle c1(5);
    cout << "surface : " << c1.surface() << ", perimetre : " << c1.perimetre() << ", diametre : " << c1.diametre() << endl;

    CCercle c2(10);
    cout << "surface : " << c2.surface() << ", perimetre : " << c2.perimetre() << ", diametre : " << c2.diametre() << endl;

}