// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.designpattern.Email;

public class CaesarEncryptionStrategy implements EmailEncryptionStrategy {
    private int key;

    public CaesarEncryptionStrategy(int key) {
        this.key = key;
    }

    @Override
    public String encrypt(String text) {
        char[] data = text.toCharArray();
        for (int i = 0; i < data.length; i++) {
            data[i] = (char) (data[i] + key);
        }
        return new String(data);
    }
}

