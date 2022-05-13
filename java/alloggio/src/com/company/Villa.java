package com.company;

public class Villa extends Accommodation{
    // Villa Garden Extension.
    private final double gardenMQ;
    // Villa Pool Extension.
    private final double poolMQ;

    // Constructor.
    public Villa(int code, int people, double accommodationMQ, double gardenMQ, double poolMQ) {
        super(code, people, accommodationMQ);
        this.gardenMQ = gardenMQ;
        this.poolMQ = poolMQ;
    }

    // Get villa value.
    public double getVillaValue(double pricePerAccommodationMQ, double pricePerGardenMQ, double pricePerPoolMQ) {
        return super.getAccommodationValue(pricePerAccommodationMQ) + gardenMQ * pricePerGardenMQ + poolMQ * pricePerPoolMQ;
    }

    // Get villa density.
    @Override
    public double getDensity() {
        return (getAccommodationMQ() + gardenMQ) / getPeople();
    }

    // Print villa data.
    public void printVillaData(double pricePerWater, double pricePerAccommodationMQ, double pricePerGardenMQ, double pricePerPoolMQ) {
        super.printData(pricePerWater);
        System.out.printf("Villa Density: %f%n", getDensity());
        System.out.printf("Villa Value: %f%n", getVillaValue(pricePerAccommodationMQ, pricePerGardenMQ, pricePerPoolMQ));
    }
}
