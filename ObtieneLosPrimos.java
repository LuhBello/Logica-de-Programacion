public class primos{
	public static boolean esPrimo(int n){
		int divisores =2, cont =2;

		while(cont<n)
		{
			if(n%cont==0){
				divisores++;
				break;
			}
			cont++;
		}
		return(divisores==2);

	}



	public static void main(String[] args) {
		for(int i=453;i<=3500;i++){
			if(esPrimo(i)){
			System.out.println("= "+i);
		 	}
		}

	}
}