# Asignacion

## Interna

|a <-- 10| ------> esto es igual en código: `int a = 10;`

## Externa

- Entrada:

\ a / ---> esto es igual en código: `cin`

- Salida:

/ a \ ---> esto es igual en código: `cout`

# Condicionales

## En diagrama

  /-------------------\
 /	condición lógica   \
/-----------------------\
|			|	   	    |
|	TRUE	|	False   |
|			|	   	    |
-------------------------

## En codigo

`
if('condicion a controlar') {\\
	'codigo si es verdad';
}else {
	'codigo si no es verdad';
}
`

** Nota ** En c++ en una condicion, cualquier numero es VERDAD:

`
if(1) {
	"Esto es verdad";
}else {
	"esto no es verdad y no entra";
}
`
#Operadores

- A < B --> "A" es menor que "B".
- A <= B --> "A" es menor o igual que "B".
- A > B --> "A" es mayor que "B".
- A >= B --> "A" es mayor o igual que "B".
- A + B --> "+" es el operador de suma.
- A - B --> "-" es el operador de resta.
- A / B --> "/" es el operador de divición.
- A * B --> "*" es el operador de multiplicación.
- A % B --> "%" retorna el resto de la divición.
- && --> El ampersan ("AND") une dos o más condiciones.
- || --> "OR" se debe cumplir una u otra condición.
- ! --> Negación de una condición.

##Ejemplo de &&

`
if(1==1 && 2==2) {
    "Esto es verdad";
}else {
    "Esto no es verdad";
}
`

##Ejemplo de !!

`
if(1==2 || 2==2) {
    "Esto es verdad";
}else {
    "Esto no es verdad";
}
`

## Errores con el condicional

`
if(a = 3){
	"Si soy verdadero";
}else {
	"Soy falso, porque a se igualo a 3";
}
`

** Nota ** Para controlar si una variable es igual a un número se escribe:

`
if(a == 3) {
	"soy verdadero";
}else {
	"Soy falso";
}
`

##Else if()

`
if(condicion) {
	"esto es verdad en la primera condición";
}else if(segundaCondicion){
	"esto es verdad en la segunda condición";
}else {
	"esto no es verdad";
}
`

# Estructuras de repetición

## While

- La lógica interna se repetira tantas veces hasta que la condición dentro no se cumpla.

`
while(condicion) {
	"logica que se ejecutara, mientras se cumpla la condición";
}
`

## do while

- La lógica interna se repetira tantas veces hasta que la condición dentro no se cumpla. Pero siempre se ejecuta por lo menos una vez.

`
do {
	"Se ejecuta la lógica";
}while(condicion) {
	"Se ejecuta la lógica";
}
`	

## For
- Se crea una variable índice que mientras esta cumpla la condición, se ejecutara la lógica.

`
for(int i = 0; i < 10; i++) {
	"Se ejecuta la lógica";
}
`

# Tipos de datos

- Int: (Integer) 				4 bytes
- unsigned int:					4 bytes
- bool:							1 byte
- char:							1 byte
- double (numeros con coma):	8 byte
- float (numeros con coma):		8 byte
