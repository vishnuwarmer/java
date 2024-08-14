public class CompositeNumbers {
    public static boolean isComposite(int n) {
        if (n < 4) {
            return false; 
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return true; 
            }
        }
        return false; 
    }

    public static void main(String[] args) {
        int A = 12;
        int B = 19;

        System.out.print("Composite numbers between " + A + " and " + B + " are: ");
        
        boolean first = true; 
        for (int i = A; i <= B; i++) {
            if (isComposite(i)) {
                if (!first) {
                    System.out.print(", ");
                }
                System.out.print(i);
                first = false;
            }
        }
    }
}

