/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MedicineIntake.h
 * Author: Rita Gonçalves
 */

#include <string>

#ifndef MEDICINEINTAKE_H
#define MEDICINEINTAKE_H

/**
 * Represents the intake of a certain medicine.
 * 
 * @param frequency Frequency of the medicine intake
 * @param intakeHours Hours of the medicine intake
 * @param medicine Medicine in question
 */
class MedicineIntake {
private:
    /**
     * Frequency of the intake.
     */
    int frequency;

    /**
     * Hours of the intake.
     */
    std::list<int> intakeHours;

    /**
     * Medicine in question.
     */
    Medicine medicine;

    /**
     * Constant for daily medicine intake.
     */
    const int DAILY = 1;

    /**
     * Constant for medicine intake twice a day.
     */
    const int BIDAILY = 2;

    /**
     * Constant for medicine intake three times a day.
     */
    const int TRIDAILY = 3;

    /**
     * Constant for weekly medicine intake.
     */

    const int WEEKLY = 4;

public:
    /**
     * Creates an instance of MedicineIntake.
     * 
     * @param frequency Frequency of the intake for a specific medicine
     * @param intakeHours Intake hours for a specific medicine
     * @param medicione Medicine in question
     */
    MedicineIntake::MedicineIntake(int frequency, std::list<int> intakeHours, Medicine medicine) {
        this->frequency = frequency;
        this->intakeHours = intakeHours;
        this->medicine = medicine;
    }

    /**
     * Deconstructs the MedicineIntake.
     */
    MedicineIntake::~MedicineIntake() {
    }

    /**
     * Returns the intake frequency of the medicine.
     * 
     * 
     * @return the intake frequency
     */
    int get_intake_frequency();

    /**
     * Returns the intake hours of the medicine.
     * 
     * @return the intake hours
     */
    std::list<int> get_intake_hours();

    /**
     * Returns the medicine instance itself.
     * 
     * @return the medicine
     */
    Medicine get_medicine();
};

#endif /* MEDICINEINTAKE_H */