public class IndicePar_Arrays {
	public static void main(String[] args) {
		int s=0, t=0;
		double p;
		
			
		int[] array;
		array= new int[200];

		for(int x=0;x<array.length;x++){
		  	int n= (int)((Math.random()*2000)+1);
		  	array[x]=n;
			if(x%2==0){			
				System.out.println("Elemento en el índice " + x + " : "+array[x]);			
				t=t+array[x];
				s=s+1;
				}
			}
		p=t/s;
		System.out.println("El promedio de los números de los arreglos es: "+p);
		System.out.println("¡AHORA EN EL ORDEN CONTRARIO!: ");

		for(int x=array.length-1; x>=0; x--){
				System.out.println("Elemento en el índice " + x + " : "+array[x]);
			}
	}
}