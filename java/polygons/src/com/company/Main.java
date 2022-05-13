package com.company;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Scanner class declaration and initialization.
        Scanner input = new Scanner(System.in);

        // Circle class instance.
        Circle cerchio;
        // Square class instance.
        Square quadrato;
        // Triangle class instance.
        Triangle triangolo;
        // Trapezium class instance.
        Trapezium trapezio;

        // Ask for Square input.
        float squareSideLength;
        System.out.print("Inserire la lunghezza del lato del quadrato: ");
        squareSideLength = input.nextFloat();
        // Ask for Triangle input.
        float triangleSide1, triangleSide2, traingleSide3;
        System.out.print("Inserire la lunghezza del lato 1 del triangolo: ");
        triangleSide1 = input.nextFloat();
        System.out.print("Inserire la lunghezza del lato 2 del triangolo: ");
        triangleSide2 = input.nextFloat();
        System.out.print("Inserire la lunghezza del lato 3 del triangolo: ");
        traingleSide3 = input.nextFloat();
        // Ask for Trapezium input.
        float trapeziumSide1, trapeziumSide2, trapeziumSide3, trapeziumSide4, trapeziumHeight;
        System.out.print("Inserire la lunghezza della base maggiore del trapezio: ");
        trapeziumSide1 = input.nextFloat();
        System.out.print("Inserire la lunghezza della base minore del trapezio: ");
        trapeziumSide2 = input.nextFloat();
        System.out.print("Inserire la lunghezza del lato 1 del trapezio: ");
        trapeziumSide3 = input.nextFloat();
        System.out.print("Inserire la lunghezza del lato 2 del trapezio: ");
        trapeziumSide4 = input.nextFloat();
        System.out.print("Inserire la lunghezza dell'altezza del trapezio: ");
        trapeziumHeight = input.nextFloat();


        // Square init.
        quadrato = new Square(squareSideLength);
        // Circle init.
        float raggio = quadrato.getSquareDiagonal()/2;
        cerchio = new Circle(raggio);
        // Triangle init.
        triangolo = new Triangle(triangleSide1, triangleSide2, traingleSide3);
        // Trapezium init.
        trapezio = new Trapezium(trapeziumSide1, trapeziumSide2, trapeziumSide3, trapeziumSide4, trapeziumHeight);

        // Line separator.
        System.out.print(System.lineSeparator());

        // Print results.
        System.out.printf("Area cerchio circoscritto: %f%n", cerchio.getCircleArea());
        System.out.printf("Area quadrato: %f%n", quadrato.getSquareArea());
        System.out.printf("Perimetro triangolo: %f%n", triangolo.getTrianglePerimeter());
        System.out.printf("Perimetro trapezio: %f%n", trapezio.getTrapeziumPerimeter());
        System.out.printf("Area trapezio: %f%n", trapezio.getTrapeziumArea());

        // Scanner class shutdown.
        input.close();
    }
}
