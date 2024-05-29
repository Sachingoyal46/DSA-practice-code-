import java.util.Scanner;

public class SUPPLY {
    private int Code;
    private String FoodName;
    private String Sticker;
    private String FoodType;

    public void GetType() {
        switch (Sticker.toLowerCase()) {
            case "green":
                FoodType = "Vegetarian";
                break;
            case "yellow":
                FoodType = "Contains Egg";
                break;
            case "red":
                FoodType = "Non Vegetarian";
                break;
            default:
                FoodType = "Unknown";
                break;
        }
    }

    public void FoodIn(int Code, String FoodName, String Sticker) {
        this.Code = Code;
        this.FoodName = FoodName;
        this.Sticker = Sticker;
        GetType(); // Call GetType to assign FoodType
    }

    public void FoodOut() {
        System.out.println("Code: " + Code);
        System.out.println("Food Name: " + FoodName);
        System.out.println("Sticker: " + Sticker);
        System.out.println("Food Type: " + FoodType);
    }

    public static void main(String[] args) {
        SUPPLY supply = new SUPPLY();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter Code:");
        int code = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        System.out.println("Enter Food Name:");
        String foodName = scanner.nextLine();
        System.out.println("Enter Sticker (Green/Yellow/Red):");
        String sticker = scanner.nextLine();

        supply.FoodIn(code, foodName, sticker);
        supply.FoodOut();
    }
}