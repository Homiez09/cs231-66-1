//ุ6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.composition.composition3;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class System {
    private Map<String, List<Email>> mailboxes;
    private String loggedInUser;

    public System() {
        mailboxes = new HashMap<>();
        loggedInUser = null;
    }

    public void login(String username) {
        loggedInUser = username;
        mailboxes.putIfAbsent(username, new ArrayList<>());
    }

    public void logout() {
        loggedInUser = null;
    }

    public void sendEmail(String recipient, String text) {
        if (loggedInUser == null) {
            java.lang.System.out.println("Please log in first.");
            return;
        }

        mailboxes.putIfAbsent(recipient, new ArrayList<>());

        Email email = new Email(loggedInUser, recipient, text);
        mailboxes.get(recipient).add(email);
        java.lang.System.out.println("Email to " + recipient + " is Sent");
    }



    public void readEmails() {
        if (loggedInUser == null) {
            java.lang.System.out.println("Please log in first.");
            return;
        }
        java.lang.System.out.println("************");

        List<Email> inbox = mailboxes.get(loggedInUser);
        if (inbox.isEmpty()) {
            java.lang.System.out.println("No emails in your inbox.");
        } else {
            for (Email email : inbox) {
                java.lang.System.out.println("From: " + email.getSender());
                java.lang.System.out.println("To: " + email.getRecipient());
                java.lang.System.out.println(email.getText());
                java.lang.System.out.println("************");
            }
        }
    }

}
