<?php 	

		function calculaModulo(){
			$numero = 8;
		
			$result = $numero % 2;

				if($result == 1){
					echo "O resto da divisao de ".$numero." e 2 resulta em : ".$result."<br>";
					echo "Consequentemente o ".$numero." é impar";
				}else{
					echo "O resto da divisao de ".$numero." e 2 resulta em : ".$result."<br>";
					echo "Consequentemente o número ".$numero." é par.";
				}
				
		}

			return calculaModulo();


 ?>