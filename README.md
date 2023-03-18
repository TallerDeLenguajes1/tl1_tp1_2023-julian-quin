# Punto 2
## archivo .gitignore
- ¿Qué es? ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?. 

-Es un archivo de texto plano, donde especificamos aquellos archivos o carpetas que queremos que git no tenga en cuenta y no almacene las modificaciones que se han realizado sobre ellos durante el tiempo,
Porque puede ocurrir que durante nuestro manejo de esos archivos se creen archivos secundarios que se crean por herramientas externas, que no son relevantes y que su información es cambiante con el tiempo y no nos aporta nada. Por ejemplo, quizás en nuestro repositorio debido a la herramienta que utilizamos, se generan archivos temporales, archivos logs, o similares que no nos sirven para nada y sobre los que no queremos tener control de versiones.-

# punto 3g)
- Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?

claramente el puntero está almacenando la direccion de memoria de la variable, por lo que es obvio que va a coincidir el contenido que alamacenado en ese puntero con la direccion de memoria de la variable en cuestion.
la direccion de memoria del puntero no tiene nada que ver con la direccion de memoria de la variable a la cual apunta ese puntero. Es algo aparte.