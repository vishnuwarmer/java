class Rectangle {
    double length;
    double width;
    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }
    double calculateArea() {
        return length * width;
    }

    public static void main(String[] args) {
        Rectangle rect = new Rectangle(5.0, 3.0);
        double area = rect.calculateArea();
        System.out.println("The area of the rectangle is: " + area);
    }
}

