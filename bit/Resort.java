import java.util.Scanner;

public class Resort {
    private int RNo;
    private String Name;
    private double Charges;
    private int Days;
    private double Amount;

    public void compute() {
        Amount = Days * Charges;
        if (Amount > 11000) {
            Amount *= 1.02;
        }
    }

    public void getinfo(int RNo, String Name, double Charges, int Days) {
        this.RNo = RNo;
        this.Name = Name;
        this.Charges = Charges;
        this.Days = Days;
        compute(); // Call compute to calculate amount
    }

    public void dispInfo() {
        System.out.println("Room Number: " + RNo);
        System.out.println("Customer Name: " + Name);
        System.out.println("Per Day Charges: " + Charges);
        System.out.println("Number of Days: " + Days);
        System.out.println("Total Amount: " + Amount);
    }

    public static void main(String[] args) {
        Resort resort = new Resort();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter Room Number:");
        int roomNo = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        System.out.println("Enter Customer Name:");
        String name = scanner.nextLine();
        System.out.println("Enter Per Day Charges:");
        double charges = scanner.nextDouble();
        System.out.println("Enter Number of Days:");
        int days = scanner.nextInt();

        resort.getinfo(roomNo, name, charges, days);
        resort.dispInfo();
    }
}