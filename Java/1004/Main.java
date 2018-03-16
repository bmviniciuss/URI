// 1004 - PRODUTO SIMPLES

import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		int num1, num2;

		Scanner sc = new Scanner(System.in);

		num1 = sc.nextInt();
		num2 = sc.nextInt();

		sc.close();

		System.out.printf("PROD = %d\n", (num1 * num2));

	}

}