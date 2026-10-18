
/* Programa de prueba del scanner.
   Autores: Carlos y Jialiang
   Comprueba comentarios y tokens.
   Prueba / y /* */

algoritmo pruebasVarias;
    ent n, m: entero;
    sal suma: entero;

    const
        LIMITE = 10;
    fconst

    var
        tabla : entero[1..10];
        i, comb, pruebaEnt: entero;
        pruebaEnt1, pruebaEnt2: entero;
        x, pruebaReal: real;
        correcto, pruebaBool: booleano;
        inicial, pruebaCaracter, pruebaCaracterVacio: caracter;
        mensaje1, mensaje2, mensajeVacio: cadena;
    fvar

    {Pre: n = N AND m = M AND M >= N > 0}

    i := 0;
    suma := 0;
    comb := m;

    x := -12.5;
    correcto := verdadero;
    inicial := "A";
    pruebaCaracter := "/"";
    pruebaCaracterVacio := "";
    mensaje1 := 'Prueba de cadenas';
    mensaje2 := 'Prueba de cadenas con /' comilla simple';
    mensajeVacio := '';

    // Pruebas diversas
    pruebaBool := VERDADERO;
    pruebaBool := Falso;
    pruebaBool := 1 <= 2;
    pruebaBool := 1 <> 2;
    pruebaBool := 1 >= 1;
    pruebaBool := 1 > 0;
    pruebaBool := 1 < 2;
    pruebaBool := 1 = 1;

    pruebaEnt := 123;
    pruebaEnt := -45;
    pruebaEnt := 12e3;
    pruebaEnt := 1 + 1;
    pruebaEnt := 1 + +1;
    pruebaEnt := 1 + -1;
    pruebaEnt := 1 - +1;
    pruebaEnt := 1 - -1;
    pruebaEnt1 := -1;
    pruebaEnt2 := +1;
    pruebaEnt := pruebaEnt1 + pruebaEnt2;

    pruebaReal := 12r;
    pruebaReal := 1.5e-2;
    pruebaReal := 12.0;
    pruebaReal := 12R;
    pruebaReal := 1 * 5;
    pruebaReal := 1 / 2;
    

    // Operadores aritmeticos
    x := 1.25e-3 + 2.5E+2 - 3 * 4 / 2;

    mientras i < n hacer
        suma := suma + comb;
        comb := comb * (m - i - 1) div (i + 2);
        i := i + 1;
    fmientras;

    si suma >= 0 ->
            correcto := verdadero;
        []
            correcto := falso;
    fsi

    {Post: n = N AND suma = SUMATORIO(i=1..N)(M sobre i)}
falgoritmo.
