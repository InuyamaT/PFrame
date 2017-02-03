import java.util.Scanner;

Class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        String buf = new String();
        System.out.println("please input your name:");
        buf = scanner.nextLine();
        System.out.println("Hello, " + buf + "!\n");
    }
}