/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medicine.h
 * Author: Rita Gonçalves 
 */

#include <string>

#ifndef MEDICINE_H
#define MEDICINE_H

/** 
 * Represents a medicine.
 * 
 * @param name Name of the medicine
 * @param dosage Dosage of the medicine
 */
class Medicine {
private:
    /**
     * Name of the medicine.
     */
    std::string name;

    /**
     * Dosage of the medicine.
     */
    double dosage;

    /**
     * Validates the name (size > 0).
     * @param name Name to validate
     * @return 1 (true) if the name is valid. Otherwise, returns 0 (false).
     */
    bool validate_name(std::string name);

    /**
     * Validates the dosage (value > 0).
     * @param dosage Dsage to validate
     * @return 1 (true) if the dosage is valid. Otherwise, returns 0 (false).
     */
    bool validate_dosage(double dosage);

public:

    /**
     * Builds an instance of Medicine.
     * @param name Name of the medicine
     * @param dosage Dosage of the medicine
     */
    Medicine::Medicine(std::string name, double dosage) {
        if (validate_name(name) && validate_dosage(dosage)) {
            this->name = name;
            this->dosage = dosage;
        } else {
            throw std::invalid_argument("Dados inválidos");
        }
    }

    /**
     * Deconstructs the Medicine.
     */
    Medicine::~Medicine() {

    }

    /**
     * Describes the Medicine.
     * 
     * @return a textual description of the Medicine (name and dosage)
     */
    std::string to_string();
};

#endif /* MEDICINE_H */

