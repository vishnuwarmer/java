public class SkipNumbers {
    public static void main(String[] args) {
        int M = 50;
        int N = 100;
        int K = 7;

        System.out.print("Numbers from " + M + " to " + N + " by skipping " + K + " numbers in between: ");

        for (int i = M; i <= N; i += (K + 1)) {
            System.out.print(i);
            if (i + (K + 1) <= N) {
                System.out.print(", ");
            }
        }
    }
}

