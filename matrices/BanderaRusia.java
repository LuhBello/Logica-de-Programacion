public class BanderaRusia{
	public static void main(String[] args) {
		
		char matriz[][];
		matriz= new char[9][12];

		System.out.println("Cantidad de filas "+matriz.length);
		 System.out.println("Cantidad de columnas "+matriz[0].length);

		 for (int i= 0; i<3;i++ ) {

		 	for (int j=0;j<matriz[0].length ;j++ ) {
		 		matriz[i][j] = 'B';
		 	}
		 }

		 for (int i=3;i<6 ;i++ ) {

		 	for (int j=0;j<matriz[0].length;j++ ) {
		 		matriz[i][j] = 'A';
		 	}
		 }

		 for(int i = 6; i<9; i++){

			 for(int j= 0; j<matriz[0].length; j++){
			 	matriz[i][j]= 'R';
			 }
		}

		

		 for (int i=0;i<matriz.length ;i++ ) {

		 	for (int j=0;j<matriz[0].length ;j++ ) {
		 		//System.out.print(matriz[i][j]+" ");
		 		if(matriz[i][j]=='B')
		 		{
		 			System.out.print(ConsoleColors.WHITE_BACKGROUND+"  ");
		 		}
		 		if(matriz[i][j]=='A')
		 		{
		 			System.out.print(ConsoleColors.BLUE_BACKGROUND+"  ");
		 		}
		 		if(matriz[i][j]=='R')
		 		{
		 			System.out.print(ConsoleColors.RED_BACKGROUND+"  ");
		 		}
		 		
		 		System.out.print(ConsoleColors.RESET);
		 	}
		 	System.out.println();
		 }
	System.out.println("La bandera de Rusia");

	}
}