
class p1 {

	public static void main (String args[]) {
	
		int TwoD[][] = new int[4][5];

		int k = 0;
		for(int i=0; i<4; i++) {
		
			for(int j=0; j<5; j++) {
			
				TwoD[i][j] = k;
				k++;
			}
		}
		
		for(int i=0; i<4; i++) {
		
			for(int j=0; j<5; j++) {
			
				if(TwoD[i][j] > 9)
					System.out.print(TwoD[i][j] + " ");
				else
					System.out.print( "0" + TwoD[i][j] + " ");
			}

			System.out.println();
		}
		
	}
}
