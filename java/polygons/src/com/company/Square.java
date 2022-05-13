package com.company;

public class Square {
    // Square side.
    float lato;

    // Square constructor.
    Square(float side) {
        lato = side;
    }

    // Getter.
    public float getLato() {
        return lato;
    }

    // Setter.
    public void setLato(float side) {
        lato = side;
    }

    // Get square area.
    public float getSquareArea() {
        return (float) Math.pow(lato, 2);
    }

    // Get square diagonal.
    public float getSquareDiagonal() {
        return (float) Math.sqrt(Math.pow(lato, 2)*2);
    }
}
