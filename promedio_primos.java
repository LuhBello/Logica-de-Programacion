public class promedio_primos{
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
		int x=0,s=0;
		double p;

		for(int i=0;i<=100;i++){
			if(esPrimo(i)){
				x=x+i;
				s= s+1;						
		 	}
		}
					p=x/s;
		 			System.out.println(p);		 	
	}
}