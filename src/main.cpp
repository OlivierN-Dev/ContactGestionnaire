#include <iostream>

int main() {
    int choice = 0;

    while (true) {
        std::string name;
        std::cout << "\n------------------- Gestionnaire de Contacts -------------------\n";
        std::cout << "1 : Ajouter un contact\n";
        std::cout << "2 : Supprimer un contact\n";
        std::cout << "3 : Modifier un contact\n";
        std::cout << "4 : Chercher un contact\n";
        std::cout << "5 : Afficher tous les contacts\n";
        std::cout << "6 : Quitter\n";
        std::cout << "Votre choix : ";
        std::cin >> choice;
        std::cin.ignore(); // pour consommer le '\n' laissé par std::cin

        if (choice == 6) {
            std::cout << "Au revoir !\n";
            break; // sortir de la boucle
        }
        switch (choice)
        {
        case 1:
            std::cout << "Veuillez nous donner sont nom et sont numéros de telephone";
            std::cout << "nom : ";
            std::cin >> name;
            break;
        case 2:
            std::cout << "2";
        case 3:
            std::cout << "3";
        case 4:
            std::cout << "4";
        case 5:
            std::cout << "5";
        default:
            break;
        }
    }

    return 0;
}
