import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class: Comfortable seating with premium facilities.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment: Reserved for women passengers only.";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment: Open seating for all passengers.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment: For storing baggage safely.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] compartments = new Compartment[10];
        Random rand = new Random();

        for (int i = 0; i < compartments.length; i++) {

            int type = rand.nextInt(4) + 1; // 1 to 4

            switch (type) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }

        // Polymorphic behavior
        for (Compartment c : compartments) {
            System.out.println(c.notice());
        }
    }
}