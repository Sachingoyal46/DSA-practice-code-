import java.util.ArrayList;
import java.util.List;

class Car {
    int carId;
    String carType;
    float rent;

    public Car(int carId, String carType, float rent) {
        this.carId = carId;
        this.carType = carType;
        this.rent = rent;
    }
}

public class CarRental {
    private List<Car> cars;

    public CarRental() {
        this.cars = new ArrayList<>();
    }

    public void getCar(int carId, String carType) {
        float rent = getRent(carType);
        cars.add(new Car(carId, carType, rent));
    }

    private float getRent(String carType) {
        switch (carType.toLowerCase()) {
            case "small car":
                return 1000;
            case "van":
                return 800;
            case "suv":
                return 2500;
            default:
                return 0; 
        }
    }

    public void showCar() {
        System.out.println("Cars Available for Rental:");
        System.out.println("CarId\tCarType\tRent");
        for (Car car : cars) {
            System.out.println(car.carId + "\t" + car.carType + "\t" + car.rent);
        }
    }

    public static void main(String[] args) {
        CarRental carRental = new CarRental();

        // Add cars
        carRental.getCar(1, "Small Car");
        carRental.getCar(2, "Van");
        carRental.getCar(3, "SUV");

        
        carRental.showCar();
    }
}