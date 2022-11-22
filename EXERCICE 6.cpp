#include <iostream>

using namespace std;

class Personne{   
 private:
     string nom;
     string prenom;
     int date ;
 public:

    Personne(string nom,string prenom,int date){  
    this->nom=nom;
    this->prenom=prenom;
    this->date=date;
	}

 void afficher(){       

 cout<<"le nom est:"<<nom<<endl;
 cout<<"le prenom est:"<<prenom<<endl;
 cout<<"la date de naissance est:"<<date<<endl; 
 }
 };


 class Employe:public Personne {
    private :
       int salaire;
     public :

   Employe(string nom,string prenom,int date,int salaire):Personne(nom,prenom,date){

             this->salaire=salaire;
			 }

        void afficher(){
      Personne::afficher();
    cout<<"le salaire est :"<<salaire; 
	} 
	};


 class Chef:public Employe{
        private:
          string service ;

        public :

    Chef(string n,string p,int d,int s,string se):Employe(n,p,d,s){

            service=se; }


         void afficher(){

         Employe::afficher();
         cout<<endl;
         cout<<"le service est : "<<service<<endl;
		  }
		  };

class Directeur:public Chef {
          private:
           string societe;
          public :

    Directeur(string nom,string prenom,int date,int salaire,string service,string societe):Chef(nom,prenom,date,salaire,service) {
	       this->societe=societe;
		 }

           void afficher(){
		    Chef::afficher();
           cout<<"l'associete est "<<societe<<endl;}  };



int main()
{

cout<<"les informations de l'employe sont"<<endl;
Employe m1("Hind","Mouhajir",1999,2200);
m1.afficher();
cout<<endl;
cout<<"------------------------------"<<endl;

cout<<"les informations de chef sont"<<endl;
Chef c1("Mohamed","Ali",1992,4500,"developpement");
c1.afficher();

cout<<"------------------------------"<<endl;

cout<<"les informations de directeur sont"<<endl;

Directeur d1("haitham","Morabiti",1980,6000,"developpement","tanger-societe");
d1.afficher();
    return 0;
}
 
