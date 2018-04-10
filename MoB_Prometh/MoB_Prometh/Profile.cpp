/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Profile.cpp
 * Author: Rita Gonçalves (1160912)
 */

#include <map>
#include <algorithm>

#include "Profile.h"

/**
 * Returns a list containing all the medicine that the user is taking.
 * 
 * @return the medicine that the user is taking
 */
std::list<Medicine> Profile::list_medicine() {

}

/**
 * Returns the intake hours for a certain medicine.
 * 
 * @param medicine Medicine to search for
 * @return the intake hours of the medicine. -1 if the medicine isn't within the list
 */
int* Profile::get_medicine_intake_hours(Medicine medicine) {
    int index = search_medicine(medicine);
    
    if (index != -1) {
        std::list<MedicineIntake>::iterator it = medicineList.begin();
        std::advance(it, index);
//return *it.get_intake_hours();
    }
    return -1;
}

/**
 * Returns the intake frequency of a certain medicine.
 * 
 * @param medicine Medicine to search for
 * @return the intake frequency of the medicine. -1 if the medicine isn't within the list
 */
int Profile::get_medicine_frequency(Medicine medicine) {
    int index = search_medicine(medicine);

    if (index != -1) {
        std::list<MedicineIntake>::iterator it = medicineList.begin();
        std::advance(it, index);
     //   return *it.get_intake_frequency();
    } else {
        return -1;
    }
}

/**
 * Searches for a medicine in the map.
 * 
 * @param medicine  Medicine to search for
 * @return the index of the medicine in the table. If not found, returns -1
 */
bool Profile::search_medicine(Medicine medicine) {
    int i = 0;
    std::list<MedicineIntake>::iterator it = medicineList.begin();

    for (; i < medicineList.size(); i++) {
        std::advance(it, i);
        //      if (*it.get_medicine().equals(medicine) dá-me um erro aqui
        //      && std::find(medicineList.begin(), medicineList.end(), *it) != medicineList.end(){
        return i;
        //      }
    }
    return -1;
}