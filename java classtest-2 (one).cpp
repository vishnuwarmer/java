
abstract class Shape {
    
    abstract double calculateArea();
    abstract double calculatePerimeter();
}


class Circle extends Shape {
    
    double radius;

    
    Circle(double radius) {
        this.radius = radius;
    }

    
    @Override
    double calculateArea() {
        return Math.PI * radius * radius;
    }

    
    @Override
    double calculatePerimeter() {
        return 2 * Math.PI * radius;
    }
}


class Triangle extends Shape {
    
    double side1, side2, side3;

    
    Triangle(double side1, double side2, double side3) {
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
    }

    
    @Override
    double calculateArea() {
        double s = (side1 + side2 + side3) / 2;
        return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    
    @Override
    double calculatePerimeter() {
        return side1 + side2 + side3;
    }
}

public class Main {
    public static void main(String[] args) {
        
        Shape circle = new Circle(5.0);

        
        System.out.println("Circle:");
        System.out.println("Area: " + circle.calculateArea());
        System.out.println("Perimeter: " + circle.calculatePerimeter());

        
        Shape triangle = new Triangle(3.0, 4.0, 5.0);

        
        System.out.println("\nTriangle:");
        System.out.println("Area: " + triangle.calculateArea());
        System.out.println("Perimeter: " + triangle.calculatePerimeter());
    }
}

