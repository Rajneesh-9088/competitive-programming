
Nemo9703
7 minutes ago
import java.util.Scanner;

class Sol {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = Integer.parseInt(sc.nextLine());
        while (cases-- > 0) solve();
    }

    private static void solve() {
        int n = Integer.parseInt(sc.nextLine());
        int j = 2;
        int k = 3;
        String str = "";
        for (int i = 0; i < n; i++) {
            str += j + " ";
            if ((i & 1) == 0) {
                j += 3;
            } else {
                j++;
            }
        }
        System.out.println(str.trim());
    }
}