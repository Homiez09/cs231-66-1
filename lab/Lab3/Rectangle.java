public class Rectangle {
    private double width;
    private double height;

    public Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }

    public Rectangle(Rectangle rec) {
        this(rec.width, rec.height);
    }

    public void printRectangle() {
        System.out.println(width + "," + height);
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public static void main(String[] args) {
        Rectangle rec1 = new Rectangle(3, 3);
        Rectangle rec2 = new Rectangle(rec1);
        System.out.println(rec1 == rec2);
        rec1.printRectangle();
        rec2.printRectangle();
        rec2.setWidth(100);
        rec1.printRectangle();
        rec2.printRectangle();
    }
}