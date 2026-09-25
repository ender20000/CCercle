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
    CCercle c1(5, 15 ,20);
    cout << "surface : " << c1.surface() << ", perimetre : " << c1.perimetre() << ", diametre : " << c1.diametre() <<", axe x : " << c1.abscisse() << ", axe y : " << c1.ordonnee() << endl;

    CCercle c2(10, 30.09 , -45);
    cout << "surface : " << c2.surface() << ", perimetre : " << c2.perimetre() << ", diametre : " << c2.diametre() <<", axe x : " << c2.abscisse() << ", axe y : " << c2.ordonnee() << endl;

}