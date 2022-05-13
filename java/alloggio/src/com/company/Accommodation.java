package com.company;

public class Accommodation {
    // Accommodation Code.
    int code;

    // Accommodation People.
    int people;

    // Accommodation Extension.
    double accommodationMQ;

    // Constructor.
    public Accommodation(int code, int people, double accommodationMQ) {
        this.code = code;
        this.people = people;
        this.accommodationMQ = accommodationMQ;
    }

    // Code var getter.
    public int getCode() {
        return code;
    }
    // People var getter.
    public int getPeople() {
        return people;
    }
    // Accommodation MQ var getter.
    public double getAccommodationMQ() {
        return accommodationMQ;
    }

    // Get price of water for this accommodation.
    public double getWaterPrice(double pricePerWater) {
        return pricePerWater * people;
    }

    // Get accommodation value.
    public double getAccommodationValue(double pricePerAccommodationMQ) {
        return pricePerAccommodationMQ * accommodationMQ;
    }

    // Get density.
    public double getDensity() {
        return accommodationMQ / people;
    }

    // Print common data.
    public void printData(double pricePerWater) {
        System.out.printf("Code: %d%n", getCode());
        System.out.printf("People: %d%n", getPeople());
        System.out.printf("Extension (MQ): %f%n", getAccommodationMQ());
        System.out.printf("Water Price: %f%n", getWaterPrice(pricePerWater));
    }

    // Print accommodation data.
    public void printAccommodationData(double pricePerWater, double pricePerAccommodationMQ) {
        printData(pricePerWater);
        System.out.printf("Accommodation Density: %f%n", getDensity());
        System.out.printf("Accommodation Value: %f%n", getAccommodationValue(pricePerAccommodationMQ));
    }
}
