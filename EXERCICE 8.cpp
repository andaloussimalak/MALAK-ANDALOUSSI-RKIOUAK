#include <iostream>

using namespace std;

class Media{
 public:
     string titre;

string id(string titre){
 this->titre=titre;
 return titre;
}

 virtual void imprimmer(){
 cout<<"l'id du media est :"<<titre<<endl;}};



class Audio:public Media{
public:
    int duree;
    int get_duree(int duree){
    this->duree=duree;
    return duree;}

    void imprimmer(){

  Media::imprimmer();
    cout<<"le duration de audio est "<<duree<<"seconde"<<endl;
	}
	};
class Livre:public Media{
public:

string name;
    string get_name(string name){
    this->name=name;
    return name;}

    void imprimmer(){

  Media::imprimmer();
    cout<<"le nom du livre  est "<<name<<endl;}};




class Presse:public Media{
public:

string name;
    string get_name1(string name){
    this->name=name;
    return name;}

    void imprimmer(){

     Media::imprimmer();
    cout<<"le nom du press  est "<<name<<endl; 
	}
	};
class Journal: public Presse{
public :
    string name_journal;
    string get_namejournal(string nj){
    name_journal=nj;
    return nj;}

    void imprimmer(){

     Presse::imprimmer();
    cout<<"le nom du journal est "<<name_journal<<endl; }};


class Magasine: public Presse{
public :
    string name_m;
    string get_namem(string nm){
    name_m=nm;
    return nm;}

    void imprimmer(){

    Presse::imprimmer();
    cout<<"le nom du magasine est "<<name_m<<endl; }};



class Revue: public Presse{
public :
     int temp;
 int get_temp(int t){
    temp=t;
    return t;}

    void imprimmer(){

     Presse::imprimmer();
    cout<<"le temps de la revue est : "<<temp<<endl; }

};


class Disque: public Audio{
public :

string titre_m;
    string get_titre(string titre){
    this->titre_m=titre;
    return titre;
	}
    void imprimmer(){

     Audio::imprimmer();
    cout<<"letitre du disc est : "<<titre_m<<endl; }

};


class CD: public Audio{
public :
    int poid;
 int get_poid(int poid){
    this->poid=poid;
    return poid;}

    void imprimmer(){

    Audio::imprimmer();
    cout<<"le poid de cd est  : "<<poid<<"g"<<endl; }};

class cassette: public Audio{
public :
    string titre_2;
 string get_titre2(string t2){
    titre_2=t2;
    return t2;}

    void imprimmer(){

     Audio::imprimmer();
    cout<<"le titre de casette est   : "<<titre_2<<endl; }};







int main()
{

Media m1;
m1.id("p1200");
m1.imprimmer();

cout<<"---------------------------------------"<<endl;

Audio o1;
o1.id("s5245");
o1.get_duree(20);
o1.imprimmer();
cout<<"---------------------------------------"<<endl;

Livre l1;
l1.id("l14528");
l1.get_name("antigone");
l1.imprimmer();

cout<<"---------------------------------------"<<endl;
Presse p1;
p1.id("cj145279");
p1.get_name1("sharnoby");
p1.imprimmer();

cout<<"---------------------------------------"<<endl;

CD c1;
c1.id("lj22");
c1.get_poid(10);
c1.get_duree(30);
c1.imprimmer();
cout<<"---------------------------------------"<<endl;
cassette cc1;
cc1.id("pml1254");
cc1.get_titre2("marhsallmathers");
cc1.get_duree(30);
cc1.imprimmer();
cout<<"---------------------------------------"<<endl;






    return 0;

	}
