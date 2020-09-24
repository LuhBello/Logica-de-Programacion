public class UsoArrays{
	public static void main(String[] args) {
		
		
			
		int[] array;
		array= new int[20];
		int mayor=array[0], menor;
	
		menor=array[0];

		for(int x=0;x<array.length;++x){
			int n= (int)((Math.random()*500)+1);
			array[x]=n;
			
			
            	if(array[x] > mayor) {
                	mayor = array[x];
            		}
            	if(array[x]<menor) {
                	menor = array[x];
            	}
        	}
        System.out.println("El numero mayor es: "+mayor);
        System.out.println("El numero menor es: "+menor);			

		}	
}