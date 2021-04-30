import java.util.Scanner;

import javax.swing.JOptionPane;

public class AccontTest 
{
    public static void main(String[] args) 
    {
        //String name = JOptionPane.showInputDialog("What is your name?");
        //String balance = JOptionPane.showInputDialog(String.format("Welcome %s %n how much are your balance:", name));
        //Account account1 = new Account(name, Double.parseDouble(balance));

        name = JOptionPane.showInputDialog("What is your name?");
        balance = JOptionPane.showInputDialog(String.format("Welcome %s %n How much is yout balance", name));
        Account account2 = new Account(name, Double.parseDouble(balance));
        
        //System.out.printf("%n%s balance: $%.2f", account1.getName(), account1.getBalance());
        //System.out.printf("%n%s balance: $%.2f %n", account2.getName(), account2.getBalance());
        account1.printAccount();
        account2.printAccount();
        
        Scanner input = new Scanner(System.in);

        System.out.print("Enter deposit amount for account1: ");
        double depositAmount = input.nextDouble();
        System.out.printf("%nAdding $%.2f to account1 balance%n%n", depositAmount);

        account1.deposit(depositAmount);
        
        //System.out.printf("%s balance: $%.2f %n", account1.getName(), account1.getBalance());
        //System.out.printf("%s balance: $%.2f %n", account2.getName(), account2.getBalance());
        account1.printAccount();
        account2.printAccount();
        
        System.out.print("Enter deposit amount for account2: ");
        depositAmount = input.nextDouble();
        System.out.printf("%nAdding $%.2f to account2 %n%n",depositAmount);

        account2.deposit(depositAmount);
        
        //System.out.printf("%s balance: $%.2f %n", account1.getName(), account1.getBalance());
        //System.out.printf("%s balance: $%.2f %n", account2.getName(), account2.getBalance());
        account1.printAccount();
        account2.printAccount();
        
    }
}
