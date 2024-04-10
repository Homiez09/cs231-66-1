//ุ6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.composition.composition3;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(java.lang.System.in);
        System emailSystem = new System();

        java.lang.System.out.println("=========== SWCon Email System ===========");

        while (true) {
            java.lang.System.out.print("------> Command [Log I)n S)end R)ead Log O)ut Q)uit]: ");
            String command = scanner.nextLine();

            if (command.equalsIgnoreCase("I")) {
                java.lang.System.out.print("Username: ");
                String username = scanner.nextLine();
                emailSystem.login(username);
            } else if (command.equalsIgnoreCase("S")) {
                java.lang.System.out.print("Enter recipient: ");
                String recipient = scanner.nextLine();
                java.lang.System.out.print("Enter text: ");
                String text = scanner.nextLine();
                emailSystem.sendEmail(recipient, text);
            } else if (command.equalsIgnoreCase("R")) {
                emailSystem.readEmails();
            } else if (command.equalsIgnoreCase("O")) {
                emailSystem.logout();
            } else if (command.equalsIgnoreCase("Q")) {
                java.lang.System.out.println("=========== Good Bye ! ===========");
                break;
            }
        }

        scanner.close();
    }
}
