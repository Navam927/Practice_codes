import java.util.Scanner;

class if_else{
    public static void main(String[] Args){
        Scanner sc = new Scanner(System.in);
        int button = sc.nextInt();
        if(button == 1){
            System.out.println("Hello");
        }
        else if(button == 2){
            System.out.println("Namaste");
        }
        else if(button == 3){
            System.out.println("Bonjour");
        }
        else{
            System.out.println("Invalid button");
        }
        sc.close();
    }
}