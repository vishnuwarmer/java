
abstract class Vehicle {
    
    private String make;
    private String model;
    private int year;
    private String fuelType;

    
    public Vehicle(String make, String model, int year, String fuelType) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.fuelType = fuelType;
    }

    public abstract double calculateFuelEfficiency();
    public abstract double calculateDistanceTraveled(double fuelAmount);
    public abstract double calculateMaxSpeed();

    
    public String getMake() { return make; }
    public String getModel() { return model; }
    public int getYear() { return year; }
    public String getFuelType() { return fuelType; }
}

class Truck extends Vehicle {
    private double cargoCapacity; 

    public Truck(String make, String model, int year, String fuelType, double cargoCapacity) {
        super(make, model, year, fuelType);
        this.cargoCapacity = cargoCapacity;
    }

    @Override
    public double calculateFuelEfficiency() {
        return 15.0; 
    }

    @Override
    public double calculateDistanceTraveled(double fuelAmount) {
        return calculateFuelEfficiency() * fuelAmount;
    }

    @Override
    public double calculateMaxSpeed() {
        return 80.0; 
    }

    public double getCargoCapacity() { return cargoCapacity; }
}

class Car extends Vehicle {
    private boolean hasSunroof;

    public Car(String make, String model, int year, String fuelType, boolean hasSunroof) {
        super(make, model, year, fuelType);
        this.hasSunroof = hasSunroof;
    }

    @Override
    public double calculateFuelEfficiency() {
        return 25.0; 
    }

    @Override
    public double calculateDistanceTraveled(double fuelAmount) {
        return calculateFuelEfficiency() * fuelAmount;
    }

    @Override
    public double calculateMaxSpeed() {
        return 120.0; 
    }

    public boolean hasSunroof() { return hasSunroof; }
}

class Motorcycle extends Vehicle {
    private boolean hasSidecar;

    public Motorcycle(String make, String model, int year, String fuelType, boolean hasSidecar) {
        super(make, model, year, fuelType);
        this.hasSidecar = hasSidecar;
    }

    @Override
    public double calculateFuelEfficiency() {
        return 60.0; // Example value
    }

    @Override
    public double calculateDistanceTraveled(double fuelAmount) {
        return calculateFuelEfficiency() * fuelAmount;
    }

    @Override
    public double calculateMaxSpeed() {
        return 150.0; 
    }

    public boolean hasSidecar() { return hasSidecar; }
}

public class Main {
    public static void main(String[] args) {
        Truck truck = new Truck("Ford", "F-150", 2022, "Diesel", 3.0);
        Car car = new Car("Toyota", "Camry", 2022, "Gasoline", true);
        Motorcycle motorcycle = new Motorcycle("Harley-Davidson", "Sportster", 2022, "Gasoline", false);

        System.out.println("Truck:");
        System.out.println("Make: " + truck.getMake());
        System.out.println("Model: " + truck.getModel());
        System.out.println("Year: " + truck.getYear());
        System.out.println("Fuel Type: " + truck.getFuelType());
        System.out.println("Cargo Capacity: " + truck.getCargoCapacity() + " tons");
        System.out.println("Fuel Efficiency: " + truck.calculateFuelEfficiency() + " mpg");
        System.out.println("Distance Traveled with 10 gallons: " + truck.calculateDistanceTraveled(10) + " miles");
        System.out.println("Max Speed: " + truck.calculateMaxSpeed() + " mph");

        System.out.println("\nCar:");
        System.out.println("Make: " + car.getMake());
        System.out.println("Model: " + car.getModel());
        System.out.println("Year: " + car.getYear());
        System.out.println("Fuel Type: " + car.getFuelType());
        System.out.println("Has Sunroof: " + car.hasSunroof());
        System.out.println("Fuel Efficiency: " + car.calculateFuelEfficiency() + " mpg");
        System.out.println("Distance Traveled with 10 gallons: " + car.calculateDistanceTraveled(10) + " miles");
        System.out.println("Max Speed: " + car.calculateMaxSpeed() + " mph");

        System.out.println("\nMotorcycle:");
        System.out.println("Make: " + motorcycle.getMake());
        System.out.println("Model: " + motorcycle.getModel());
        System.out.println("Year: " + motorcycle.getYear());
        System.out.println("Fuel Type: " + motorcycle.getFuelType());
        System.out.println("Has Sidecar: " + motorcycle.hasSidecar());
        System.out.println("Fuel Efficiency: " + motorcycle.calculateFuelEfficiency() + " mpg");
        System.out.println("Distance Traveled with 10 gallons: " + motorcycle.calculateDistanceTraveled(10) + " miles");
        System.out.println("Max Speed: " + motorcycle.calculateMaxSpeed() + " mph");
    }
}

