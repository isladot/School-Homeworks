package com.company;

public class Contatore {
    // Counter value.
    int value;

    // Class constructor.
    Contatore(int value) {
        this.value = value;
    }

    // Getter.
    public int getValue() {
        return value;
    }

    // Increment method.
    public void increment() {
        this.value++;
    }
}
