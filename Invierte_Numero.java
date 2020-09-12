import java.util.Scanner;
public class Programa{

	public static void main(String[] args) {
		
		int n1,n2=0,n3=0;
		Scanner wr = new Scanner(System.in);

		n1 = wr.nextInt();
		while(n1>0){
			n2=n1%10;
			n1=n1-n2;
			n1=n1/10;
			n3=n3*10+n2;
		}
		System.out.println(n3);

	}
}