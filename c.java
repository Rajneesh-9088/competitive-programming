import java.io.*;
import java.util.*;
public class c {
	public static String  printJava(String a) {
		System.out.println("rajne");
		// b[0] = 99;
		return a;
	}
	public static void main(String[] args) {
		try {
			System.setIn(new FileInputStream("input.txt"));
			System.setOut(new PrintStream(new FileOutputStream("output.txt")));
		} catch (Exception e) {
			System.err.println("Error");
		}


		String raj = "rajnees";
		String  ans = printJava(raj);
		// System.out.println(ans);
		// System.out.println(a[0]);
	}
}