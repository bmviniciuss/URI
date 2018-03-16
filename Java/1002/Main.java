// 1002 - ÁREA DO CIRCULO

import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		double PI = 3.14159;

		Scanner sc = new Scanner(System.in);
		double radius;
		
		radius = sc.nextDouble();
		sc.close();
		double area = PI * (radius * radius);

		System.out.printf("A=%.4f\n",area);

	}

}