#pragma once
#include "Contact.h"
#include <vector>
#include <string>

class ContactManager {
public:
    // Fonctions principales
    void addContact(const Contact& c);
    bool deleteContact(const std::string& name);
    bool updateContact(const std::string& name, const Contact& newData);
    Contact* searchContact(const std::string& name);
    void listContact() const;

    // Accès aux contacts
    std::vector<Contact>& getAllContacts();
    const std::vector<Contact>& getAllContacts() const;

private:
    std::vector<Contact> contacts;
};
