#include <iostream>

using namespace std;

class vecteur3d {
	private:
	float x;
	float y;
	float z;
	public:
	vecteur3d(float x = 0, float y = 0, float z = 0){
	this->x=x;
	this->y=y;
	this->z=z;
	}
	vecteur3d(const vecteur3d & v) {
		x = v.x;
		y = v.y;
		z = v.z;
		}
	void afficher() {
		cout << "("<<x<<","<<y<<","<<z<<")" << endl;
		}
	vecteur3d somme(const vecteur3d & v22) {
		vecteur3d v1;
		v1.x = x + v22.x;
		v1.y = y + v22.y;
		v1.z = z + v22.z;
		return v1;
	}
	float produit(const vecteur3d & v) {
		return x*v.x + y*v.y + z*v.z;
	}
	bool coincide(const vecteur3d & v) {
		return (x == v.x && y == v.y && z == v.z);
	}
	float norme() {
		return (x*x + y*y + z*z);
	}
	vecteur3d normax(vecteur3d v) {
		if( this->norme() > v.norme())
		    return *this;

		return v;
	}
	vecteur3d * normax(vecteur3d * v) {
		if( this->norme() > v->norme())
		    return this;
        else
		return v;
	}
	vecteur3d & normax_ref(vecteur3d &v) {
		if( this->norme() > v.norme())
		    return *this;

		return v;
	}
};

int main() {
	cout << " le vecteur V1 est : ";
	vecteur3d v1(4,2,6);
	v1.afficher();
	cout << " le Vecteur V2 est :";
	vecteur3d v2(3,9,1);
	v2.afficher();
	cout<<endl;
     cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).afficher();
    cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl;
	cout<<endl;
	if(v1.coincide(v2))
	    cout << "Les vecteurs v1 et v2 coincident " << endl;
	else
	    cout << "Les vecteurs v1 et v2 ne coincident pas " << endl;
	cout<<endl;
	cout << "Le vecteur qui a la plus grande norme est (par valeur): ";
	(v1.normax(v2)).afficher();
	cout << "Le vecteur qui a la plus grande norme est (par adresse): ";
	(v1.normax(&v2))->afficher();
	cout << "Le vecteur qui a la plus grande norme est (par reference) :";
	(v1.normax_ref(v2)).afficher();
	cout<<endl;
}
