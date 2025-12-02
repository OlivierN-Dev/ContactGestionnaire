#include "ContactManager.h"
#include <iostream>

// Ajouter un contact
void ContactManager::addContact(const Contact& c) {
    contacts.push_back(c);
}

// Supprimer un contact
bool ContactManager::deleteContact(const std::string& name) {
    for (size_t i = 0; i < contacts.size(); ++i) {
        if (contacts[i].name == name) {
            contacts.erase(contacts.begin() + i);
            return true;
        }
    }
    return false;
}

// Mettre à jour un contact
bool ContactManager::updateContact(const std::string& name, const Contact& newData) {
    for (auto& c : contacts) {
        if (c.name == name) {
            c = newData;
            return true;
        }
    }
    return false;
}

// Rechercher un contact
Contact* ContactManager::searchContact(const std::string& name) {
    for (auto& c : contacts) {
        if (c.name == name) {
            return &c;
        }
    }
    return nullptr; // Aucun contact trouvé
}

// Lister tous les contacts
void ContactManager::listContact() const {
    if (contacts.empty()) {
        std::cout << "Aucun contact disponible.\n";
        return;
    }

    std::cout << "Liste des contacts :\n";
    for (const auto& c : contacts) {
        std::cout << "Nom : " << c.name
                  << " | Téléphone : " << c.phone << "\n";
    }
}

// Accès aux contacts
std::vector<Contact>& ContactManager::getAllContacts() {
    return contacts;
}

const std::vector<Contact>& ContactManager::getAllContacts() const {
    return contacts;
}
