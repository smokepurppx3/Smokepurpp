/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Time.h
 * Author: Rita Gonçalves (1160912)
 */

#ifndef TIME_H
#define TIME_H

/**
 * Represents a time.
 * 
 * @param hours Hours of the Time
 * @param minutes Minutes of the Time
 * @param seconds Seconds of the Time
 */
class Time {
public:

    /**
     * Creates an instance of Time.
     * 
     * @param hours Hours of the time
     * @param minutes Minutes of the time
     * @param seconds Seconds of the time
     */
    Time(short hours, short minutes, short seconds) {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    /**
     * Deconstructs the Time.
     */
    ~Time() {

    }

private:
    /**
     * Hours of the Time.
     */
    short hours;

    /**
     * Minutes of the Time.
     */
    short minutes;

    /**
     * Seconds of the Time.
     */
    short seconds;
};

#endif /* TIME_H */