#include <iostream>
#include <string>
#include <list>
#include <algorithm>

struct Personne {
    std::string nom;
    std::string prenom;
    int age;
};

bool comparerPersonnes(const Personne& personne1, const Personne& personne2) {
    if (personne1.nom != personne2.nom) {
        return personne1.nom < personne2.nom;
    }
    if (personne1.prenom != personne2.prenom) {
        return personne1.prenom < personne2.prenom;
    }
    return personne1.age < personne2.age;
}

int main() {
    std::list<Personne> personnes;

    while (true) {
        Personne personne;
        std::cout << "Entrez le nom (ou 'fin' pour terminer) : ";
        std::cin >> personne.nom;
        if (personne.nom == "fin") {
            break;
        }
        std::cout << "Entrez le prénom : ";
        std::cin >> personne.prenom;
        std::cout << "Entrez l'âge : ";
        std::cin >> personne.age;

        personnes.push_back(personne);
    }

    personnes.sort(comparerPersonnes);

    std::cout << "\nListe triée :\n";
    for (const auto& personne : personnes) {
        std::cout << "Nom : " << personne.nom << ", Prénom : " << personne.prenom << ", Âge : " << personne.age << std::endl;
    }

    return 0;
}
