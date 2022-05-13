package com.company;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Scanner class declaration and initialization.
        Scanner input = new Scanner(System.in);

        // Accommodation class declaration.
        Accommodation accommodation;
        // Villa class declaration.
        Villa villa;

        // Water price.
        final double waterPrice = 15.5;
        // Accommodation value per MQ.
        final double pricePerAccommodationMQ = 2000;
        // Garden value per MQ.
        final double pricePerGardenMQ = 700;
        // Pool value per MQ.
        final double pricePerPoolMQ = 1000;

        // Accommodation data vars declaration.
        int code, people;
        double accommodationMQ;
        // Villa additional data var declaration.
        double gardenMQ, poolMQ;

        // Menu selection.
        int menu;
        do {
            // Ask for menu selection.
            System.out.println("1. Manage accommodation.\n2. Manage villa.\n0. Quit.");
            System.out.print("Select an option: ");
            menu = input.nextInt();

            switch (menu) {
                case 1:
                    // Ask for accommodation data input.
                    System.out.print("Insert accommodation code: ");
                    code = input.nextInt();
                    System.out.print("Insert accommodation people: ");
                    people = input.nextInt();
                    System.out.print("Insert accommodation extension: ");
                    accommodationMQ = input.nextDouble();

                    accommodation = new Accommodation(code, people, accommodationMQ);
                    accommodation.printAccommodationData(waterPrice, pricePerAccommodationMQ);
                break;
                case 2:
                    // Ask for villa data input.
                    System.out.print("Insert villa code: ");
                    code = input.nextInt();
                    System.out.print("Insert villa people: ");
                    people = input.nextInt();
                    System.out.print("Insert villa extension: ");
                    accommodationMQ = input.nextDouble();
                    System.out.print("Insert villa garden extension: ");
                    gardenMQ = input.nextDouble();
                    System.out.print("Insert villa pool extension: ");
                    poolMQ = input.nextDouble();

                    villa = new Villa(code, people, accommodationMQ, gardenMQ, poolMQ);
                    villa.printVillaData(waterPrice, pricePerAccommodationMQ, pricePerGardenMQ, pricePerPoolMQ);
                break;
            }
        } while (menu != 0);
    }
}
