package com.company;

public class Main {

    public static void main(String[] args) throws Exception {
        Contatore c1 = new Contatore(10);
        ContatoreDoppio c2 = new ContatoreDoppio(10);

        // Print initial values.
        System.out.printf("Valore iniziale c1: %d%n", c1.getValue());
        System.out.printf("Valore iniziale c2: %d%n", c2.getValue());

        // Increment values.
        c1.increment();
        c2.increment();

        // Print incremented values.
        System.out.printf("Valore finale c1: %d%n", c1.getValue());
        System.out.printf("Valore finale c2: %d%n", c2.getValue());
    }
}
