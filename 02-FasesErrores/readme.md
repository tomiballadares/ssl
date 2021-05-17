1-Los programas de C constan de uno o más archivos de codigo fuente. Un archivo de código fuente, junto con sus archivos de inclusión, los archivos que se incluyen con la #include Directiva de preprocesador, pero sin incluir las secciones de código que se han quitado mediante directivas de compilación condicional como #if , se denomina una unidad de traducción.
Las unidades de traducción traducidas se pueden procesar en archivos de objetos o bibliotecas de código de objetos independientes. Estas unidades de traducción independientes traducidas se vinculan para formar un programa ejecutable o una biblioteca de vínculos dinámicos 

Las unidades de traducción pueden comunicarse mediante:
-Llamadas a funciones que tienen vinculación externa.
-Llamadas a funciones miembro de clase que tienen vinculación externa.
-Modificación directa de objetos que tienen vinculación externa.
-Modificación directa de archivos.

2- Secuencia de pasos:
    1-Preprocesador
        b- Para generar el .i, utilicé el comando: 
        gcc -E hello2.c -o hello2.i. El cual el modificador «-E» permite especificarle al compilador (gcc) que solo preprocese, y que la salida sea escrita en el archivo hello2.i.
        Las conclusiones que puedo sacar, observando el archivo hello2.i, es que, al principio el preprocesador interpreta la directiva del #include. Al final del archivo, en el main, los comentario fueron reemplazados por vacío, siendo así tambien, una caracteristica del preprocesador.
        d- A mi parecer, la semántica de la primera linea de hello3.c es querer definir la función printf.
        e-Para generar el .i, utilicé el comando: 
        gcc -E hello3.c -o hello3.i. La diferencia que encontré fue que, al no utilizar la directiva del #include, no estaban interpretadas en el hello3.i, a comparación del hello2.i, que en el .c, si usa #include.
    2-Compilación.
        b-Corregí el error de {} que tenía el código, prontf es solamente un warning. Para generar el .s, utilicé: gcc -c hello4.c -o hello4.s
        c-El objetivo del código es; 
        1. Análisis léxico
        2. Análisis gramatical
        3. Análisis semántico
        4. Optimización del código
        5. Generar instrucciones (generar código de ensamblaje) 
   3- Vinculación.
        c- Al parecer, no funciona el .exe, en mi caso, me dice que no es compatible con mi sistema operativo.
    4-Corrección de bug.
        a-Funciona perfectamente, como se espera.
    5-Remoción de prototipo
        b- Funciona de todas formas debido a que printf, en C, su biblioteca está predeterminada en los programas, por mas que no se importe su header.
    6-Compilación Separada: Contratos y Módulos
        b- (Explicado anteriormente en el punto1.)
        c-Al parecer, sigue funcionando correctamente.
        d- Al agregar el contrato tanto en los clientes como en el proveedor, a parte de poder visualizar las funciones, nos tira error a la hora de agregar un parametro en "prontf" cosa de que sin contrato, compilaría igual.