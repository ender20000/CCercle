#include <iostream>
using namespace std;

class CCercle
{
    private:
    double rayon;
    double axe_y;
    double axe_x;
   
    public: 

    CCercle(double r ,double x ,double y){
        rayon = r;
        axe_x = x;
        axe_y = y;
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
    //on est d'accord qu'il y a une manière plus simple pour afficher les coordonnées? ou alors il faut obligatoirement les déclarer et ENSUITE les utiliser avec un return?
    double  abscisse(){  
        return axe_x;
    }
    double  ordonnee(){
        return axe_y;
    }
};

int main() {
   
    int rayon;
    int axe_x;
    int axe_y;

    cout << "rayon : " << endl;
    cin >> rayon;
    cout << "axe y : " << endl;
    cin >> axe_x;
    cout << "axe x : " << endl;
    cin >> axe_y;

    CCercle c1(rayon ,axe_x  ,axe_y);

    cout << "surface : " << c1.surface() << ", perimetre : " << c1.perimetre() << ", diametre : " << c1.diametre() <<", axe x : " << c1.abscisse() << ", axe y : " << c1.ordonnee() << endl;
}