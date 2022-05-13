package com.company;

public class Circle {
    // Circle radius.
    float raggio;

    // Class constructor.
    Circle(float radius) {
        raggio = radius;
    }

    // Getter.
    public float getRaggio() {
        return raggio;
    };

    // Setter.
    public void setRaggio(float radius) {
        raggio = radius;
    }

    // Get circle area.
    public float getCircleArea() {
        return (float) (Math.PI * Math.pow(raggio, 2));
    }
}
