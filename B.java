import java.io.*;
import java.util.*;
public class B {
	public static void main(String[] args) {
		try {
			System.setIn(new FileInputStream("input.txt"));
			System.setOut(new PrintStream(new FileOutputStream("output.txt")));
		} catch (Exception e) {
			System.err.println("Error");
		}

		System.out.println("rajneesh");
		System.out.println("kumar patle is coding now ");
	}
}