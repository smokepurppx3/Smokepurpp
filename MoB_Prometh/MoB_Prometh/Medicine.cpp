/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medicine.cpp
 * Author: Rita Gonçalves 
 */

#include "Medicine.h"
#include <stdexcept>
#include <string>

/**
 * Validates the name (size > 0).
 * @param name Name to validate
 * @return 1 (true) if the name is valid. Otherwise, returns 0 (false).
 */
bool Medicine::validate_name(std::string name) {
    return name.length() > 0;
}

/**
 * Validates the dosage (value > 0).
 * @param dosage Dsage to validate
 * @return 1 (true) if the dosage is valid. Otherwise, returns 0 (false).
 */
bool Medicine::validate_dosage(double dosage) {
    return dosage > 0;
}

/**
 * Describes the Medicine.
 * 
 * @return a textual description of the Medicine (name and dosage)
 */
char* Medicine::to_string() {
    return "Nome: %s\nDose: %d\n", name, dosage;
}
