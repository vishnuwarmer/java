
class Vehicle {
   
    int speed = 0;

   
    void speedUp() {
        System.out.println("The vehicle speeds up.");
    }

  
    void displaySpeed() {
        System.out.println("Current speed: " + speed + " km/h");
    }
}


class Car extends Vehicle {
    
    @Override
    void speedUp() {
        speed += 20;
        System.out.println("The car speeds up by 20 km/h.");
    }
}

class Bicycle extends Vehicle {
   
    @Override
    void speedUp() {
        speed += 5;
        System.out.println("The bicycle speeds up by 5 km/h.");
    }
}

public class Main {
    public static void main(String[] args) {
        
        Vehicle car = new Car();
        car.displaySpeed();
        car.speedUp();
        car.displaySpeed();

        
        Vehicle bicycle = new Bicycle();
        bicycle.displaySpeed();
        bicycle.speedUp();
        bicycle.displaySpeed();
    }
}

