#include <iostream>
#include<string>

using namespace std;

class Animal{     

public:
   int age;          
   string nom;
    animal(){}
    void set_value(int age,string nom){
  this->age=age;
    this->nom=nom; 
	}
};

class zebra : public Animal {    

 public :
    string origine;
     zebra(){
     }

    int get_age(){
    return age;}
    string get_name(){
    return nom; }
    void set_origine(string x){
    origine=x;}

    string get_origine(){
    return origine; }




 void afficher_details() {     

cout<<"l'age du zebra est : "<<get_age()<<endl;
cout<<"le nom du zebra est : "<<get_name()<<endl;
cout<<"l'origine du zebra est : "<<get_origine()<<endl;}} ;



class dolphine : public Animal {   

 public :
    string origine;
     dolphine(){
     }

    int get_age(){
    return age;}
    string get_name(){
    return nom;
    }
    void set_origin(string origine){
    this->origine=origine;
    }
    string get_origine(){
    return origine; }


 void afficher_details() { 

cout<<"l'Age de dolphine est : "<<get_age()<<endl;
cout<<"le Nom du dolphine est : "<<get_name()<<endl;
cout<<"l'Origine de dolphine est : "<<get_origine()<<endl;
 }
 };


int main()
{

zebra Z;  
  Z.set_value(33,"Z1");
  Z.set_origine("France");
  Z.afficher_details();
dolphine D;  
 D.set_value(55,"D1");
 D.set_origin("Algeria");
 D.afficher_details();


    return 0;
}

