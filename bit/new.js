class CARRENTAL {
    constructor() {
        this.cars = [];
    }

    GetCar(CarId, CarType) {
        this.cars.push({ CarId: CarId, CarType: CarType, Rent: this.GetRent(CarType) });
    }

    GetRent(CarType) {
        switch (CarType.toLowerCase()) {
            case "small car":
                return 1000;
            case "van":
                return 800;
            case "suv":
                return 2500;
            default:
                return null; // Return null for unknown car types
        }
    }

    ShowCar() {
        console.log("Cars Available for Rental:");
        console.log("CarId\tCarType\tRent");
        this.cars.forEach(car => {
            console.log(${car.CarId}\t${car.CarType}\t${car.Rent});
        });
    }
}

// Example Usage
let carRental = new CARRENTAL();

// Add cars
carRental.GetCar(1, "Small Car");
carRental.GetCar(2, "Van");
carRental.GetCar(3, "SUV");

// Show available cars
carRental.ShowCar();