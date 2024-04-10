// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.designpattern.Email;

import java.util.HashMap;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        HashMap<String, List<Email>> mailboxes = new HashMap<>();

        Email email1 = new Email("Kwan", "Kate", "Hello");
        Email email2 = new Email("George", "Ken", "Hi");

        EmailSystem emailSystem = new EmailSystem(mailboxes);

        email1.send(emailSystem, new CaesarEncryptionStrategy(2));

        email2.send(emailSystem, new SwitchCipherEncryptionStrategy());
    }
}
