package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Array2 {
    // Scanner class declaration and initialization.
    static Scanner input = new Scanner(System.in);

    static final int MAX = 10;
    static int[] array = new int[MAX];

    public static void populateArray() {
        // Random max variable declaration.
        int randomMax;
        // Get MAX variable from user input.
        System.out.print("Inserire il valore random max: ");
        randomMax = input.nextInt();

        // Loop through the array and populate it.
        for (int i = 0; i<array.length; i++){
            array[i] = (int) (randomMax * Math.random());
        }

        readArray(array);
    }

    public static void readArray(int[] array) {
        // Loop through the array and read it.
        System.out.println("Valori nell'array:");
        for (int i :array){
            System.out.printf("%d\t", i);
        }

        // Line separator.
        System.out.print(System.lineSeparator());
    }

    public static boolean searchInArray() {
        // Target variable declaration.
        int target;
        // Get MAX variable from user input.
        System.out.print("Inserire il valore target: ");
        target = input.nextInt();

        return Arrays.stream(array).anyMatch(i -> i == target);
    }

    public static void printSortedArray() {
        // Duplicate array to perform sorting in an immutable way.
        int[] sortedArray = array;
        // Sort array.
        Arrays.sort(sortedArray);

        // Print sorted array.
        readArray(sortedArray);
    }

    public static void main(String[] args) {
        // Populate array.
        populateArray();

        // Search in array.
        System.out.printf("Il numero cercato %sè presente nell'array", searchInArray() ? "" : "non ");

        // Sort and print array.
        printSortedArray();
    }
}
