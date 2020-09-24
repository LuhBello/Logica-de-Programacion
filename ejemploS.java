import java.util.Scanner;

public class ejemploS{
	
	public static void main(String[] args) {
			int[] v;
			v= new int[10];
			String numero="";
			Scanner wr = new Scanner(System.in);

			
			try{

				for(int i=0; i<v.length;i++){
			System.out.println("ingresa numero para el indice "+i+" : ");		 
				numero= wr.nextLine();
				v[i]=	Integer.parseInt(numero);	

				}
				System.out.print("el array queda: ");								
				for(int i=0; i<v.length;i++){
					
					System.out.print(v[i]+" ");
				}
				
			 
			}
        
        catch(Exception e){
            System.out.println("El Error es : " + e + " ");
        }			
	}
}
	
