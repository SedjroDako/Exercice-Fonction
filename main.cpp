#include <iostream>
#include <string>

using namespace std;


 string fonction1(int val)        // fonction vérifiant si c'est multiple de 2
{
string reponse;
    if (val%2==0)
        reponse="oui";
    else
        reponse="Non";


   return reponse;
}

string fonction2(int val)       // fonction permettant de vérifier si c'est multiple de 3
{
string reponse;
    if (val%3==0)
        reponse="oui";
    else
        reponse="Non";


   return reponse;
}


main()
{   int val;
    cout<<"Veuillez entrer le nombre a verifier."<<endl;
    cin>>val;
    string resultat1,resultat2;
    resultat1=fonction1(val);
    resultat2=fonction2(val);

    cout<<resultat1<<": pour la divisibilite par 2"<<endl;
    cout<<resultat2<<": pour la divisibilite par 3"<<endl;


}
