import java.util.Scanner;

public class factorial
{
    
    public static int fact(int a){
        
        if(a == 1 || a == 0){
            return 1;
        }
        
        return (a*fact(a-1));
        
    }
    
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();

		int tmp = fact(a);
	    
	    System.out.print(tmp);

        sc.close();

	}
}
