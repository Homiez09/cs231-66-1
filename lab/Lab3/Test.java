public abstract class Test implements InterfaceTest {
}

class SubTest extends Test {
    @Override
    public void m(int x) {
        System.out.println("Hello World m()" + x);
    }

    public static void main(String[] args) {
        // System.out.println("Hello World");
        SubTest s = new SubTest();
        s.m(4);
    }
}

interface InterfaceTest {
    void m(int x);
}