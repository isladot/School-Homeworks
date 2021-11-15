package com.company;

import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        // Scanner class declaration and allocation.
        Scanner input = new Scanner(System.in);
        // Input variable declaration.
        int n;
        // Sum variable declaration.
        int sum = 0;
        // Array declaration and allocation.
        int[] array = new int[10];

        // Get input from user.
        System.out.print("Inserire il valore n: ");
        n = input.nextInt();

        // Loop through the array and populate it.
        for (int i = 0; i<array.length; i++){
            sum += array[i] = (int) (n * Math.random());
        }

        // Loop through the array and read it.
        System.out.println("Valori nell'array:");
        for (int i :array){
            System.out.printf("%d\t", i);
        }

        // Line separator.
        System.out.print(System.lineSeparator());

        // Print median.
        System.out.println("Media:");
        System.out.println(sum/array.length);
    }
}
