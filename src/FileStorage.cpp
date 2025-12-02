#include "FileStorage.h"
#include <sstream>
#include <fstream>
#include <iostream>

void FileStorage::save(const std::string& filename, const ContactManager& manager) {
    std::ofstream file(filename);

    if (!file) {
        std::cerr << "Impossible d'ouvrir le fichier" << std::endl;
        return;
    }

    for (const auto& c : manager.getAllContacts()) {
        file << c.name << ";" << c.phone << "\n";
    }
}
