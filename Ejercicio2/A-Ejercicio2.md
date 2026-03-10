SOLID en diseño
S
-Cada clase tiene su función. La clase Circulo contiene los métodos de un círculo, la clase Rectangulo contiene los métodos de un rectangulo.
-La clase figura se encarga de area(); no tiene calcularareacirculo o calcular arearectangulo()
-El codigo es más ordenado.

O
-Puedo crear clases de otras figuras geometricas sin la necesidad de modificar la clase Figura
-Si quisiera agregar una clase Cuadrado, se heredará area(); de la clase Figura
-Puedo agregar más figuras geometrícas sin modificar el código de las otras clases

L
-Las clases hijas pueden usarse como si fueran la clase padre.
-Pueden sustituir a la clase padre

