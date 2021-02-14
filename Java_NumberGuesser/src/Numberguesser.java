import java.util.Scanner;
import java.lang.Math;

/*
    NumberGuesser for Java
*/

public class Numberguesser {
    public static void main(String[] args) {
        System.out.println("Willkommen bei Zahlen-Raten! Gib die Zahl ein, von der du denkst, dass sie richtig ist: ");

        try (Scanner scanner = new Scanner(System.in)) {
            long random = Math.round(Math.random() * (100));
            boolean guessed = false;
            int tries = 0;

            while (!guessed) {
                int guessNumber = scanner.nextInt();
                if (guessNumber < random) {
                    System.out.println("Deine Zahl ist zu klein!");
                    tries++;
                } else if (guessNumber > random) {
                    System.out.println("Deine Zahl ist zu groß!");
                    tries++;
                } else if (guessNumber == random) {
                    tries++;
                    System.out.println("Du hast die Zahl erraten! Herzlichen Glückwunsch! Du hast insgesamt " + tries
                            + " Versuche benötigt!");
                    guessed = true;
                }
            }
        }
    }
}
