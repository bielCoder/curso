<?php
		// Tarefa de retorna o calculo IMC
		function calculaIMC(){
			$altura = 1.80;
			$peso = 70;
			$result = $peso / ($altura ^ 2);
			if($result < 18.5){
				echo "Você está abaixo do peso!";
			}else{
				echo "Você não está abaixo do peso!";
			}
		}
		return calculaIMC();