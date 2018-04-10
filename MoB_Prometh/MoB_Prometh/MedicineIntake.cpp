/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MedicineIntake.cpp
 * Author: Rita Gonçalves
 */

#include "MedicineIntake.h"
#include <string>

/**
 * Returns the intake frequency of the medicine.
 * 
 * 
 * @return the intake frequency
 */
int MedicineIntake::get_intake_frequency() {
    return this->frequency;
}

/**
 * Returns the intake hours of the medicine.
 * 
 * @return the intake hours
 */
std::list<int> MedicineIntake::get_intake_hours() {
    return this->intakeHours;
}

/**
 * Returns the medicine instance itself.
 * 
 * @return the medicine
 */
Medicine MedicineIntake::get_medicine(){
    return this->medicine;
}