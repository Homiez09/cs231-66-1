// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.designpattern.Email;

import java.util.List;

public class Email {
    private String sender;
    private String recipient;
    private String text;

    public String getSender() {
        return sender;
    }

    public void setSender(String sender) {
        this.sender = sender;
    }

    public String getRecipient() {
        return recipient;
    }

    public void setRecipient(String recipient) {
        this.recipient = recipient;
    }

    public String getText() {
        return text;
    }

    public void setText(String text) {
        this.text = text;
    }

    public Email(String sender, String recipient, String text) {
        this.sender = sender;
        this.recipient = recipient;
        this.text = text;
    }

    public void send(EmailSystem emailSystem, EmailEncryptionStrategy strategy) {
        String encryptedText = strategy.encrypt(this.text);
        this.text = encryptedText;

        List<Email> box = emailSystem.getMailboxes().get(this.recipient);
        if (box != null) {
            box.add(this);
        } else {
            // Handle the case where the recipient doesn't have a mailbox
        }
    }
}
