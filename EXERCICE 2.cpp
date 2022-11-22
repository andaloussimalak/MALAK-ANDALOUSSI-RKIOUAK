#include<iostream>
using namespace std;
class shape{
	protected:
		float largeur;
		float hauteur;
	public:
		shape(float largeur,float hauteur){
			this->hauteur=hauteur;
			this->largeur=largeur;
		}
};
class Rectangle:public shape{
	public:
  Rectangle(float largeur,float hauteur) : shape(largeur, hauteur) {}   

  float area()                      
  {
    return (largeur * hauteur);
  }
  };
class Triangle : public shape {
	public:
	Triangle(float largeur, float hauteur):shape(largeur,hauteur){
	}
	float area()
	{ return ( (largeur*hauteur)/2);
	}
};
int main(){
	Rectangle R(2,4);
	Triangle T(2,4);
	cout<<"l'aire du rectangle est : "<<R.area() << endl;
	cout<<"l'aire du triangle est : "<<T.area()<< endl;
	return 0;
}
