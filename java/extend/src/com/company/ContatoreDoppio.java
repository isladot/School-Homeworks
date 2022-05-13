package com.company;

public class ContatoreDoppio extends Contatore {
    // Class constructor matching super.
    ContatoreDoppio(int value) {
        super(value);
    }

    // Overriding increment method.
    @Override
    public void increment() {
        super.increment();
        super.increment();
    }
}
