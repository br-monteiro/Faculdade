ALUNO: **EDSON BRUNO SOARES MONTEIRO**

CURSO: **BANCO DE DADOS**

RM: **RM86957**

<p align="center">

**CAP 10 - COMANDOS DRS - JOIN - DRS - CONSULTAS SIMPLES**

</p>

##### 1.Objetivo: Select Básico – Operador Relacional

Crie uma instrução SQL que exiba os dados da tabela de Bancos, apenas para Bancos com códigos maiores que 20. Mostre essa consulta em ordem de nome de banco.

**COMANDO SQL:**

```sql
SELECT
    *
FROM
    LOC_BANCO
WHERE
    cd_banco > 20
ORDER BY nm_banco
```

![image](https://user-images.githubusercontent.com/12873897/115474802-a4a11d80-a214-11eb-884d-1672a21e2db9.png)

##### 2. Objetivo: Select Básico – Cláusula Like

Crie uma instrução SQL que apresente todos os dados da tabela de Bancos, mas somente para nomes de bancos que tenham a sílaba “ne” em alguma parte de seus nomes.

```sql
SELECT
    *
FROM
    LOC_BANCO
WHERE nm_banco LIKE '%ne%'
```

![image](https://user-images.githubusercontent.com/12873897/115475614-6147ae80-a216-11eb-9e59-be3a692994aa.png)

##### 3. Objetivo: Select Básico – Operadores Lógicos

Apresente códigos e nomes de funcionários que tenham salários maiores ou iguais a `R$ 2 mil` e menores ou iguais a `R$ 5 mil`.

```sql
SELECT
    cd_func,
    nm_func
FROM LOC_FUNCIONARIO
WHERE
    vl_salario >= 2000 AND
    vl_salario <= 5000
```

![image](https://user-images.githubusercontent.com/12873897/115476377-1f1f6c80-a218-11eb-8465-4d0f1a5204ea.png)

##### 4. Objetivo: Join Simples

Listar código e nome em ordem alfabética de funcionários e código e nome do departamento onde trabalham.

```sql
SELECT
    F.cd_func,
    F.nm_func,
    D.cd_depto,
    D.nm_depto
FROM
    LOC_FUNCIONARIO F
    INNER JOIN LOC_DEPTO D
        ON D.cd_depto = F.cd_depto
```

![image](https://user-images.githubusercontent.com/12873897/115477319-0c0d9c00-a21a-11eb-9605-c5c3a4f8a6ad.png)

##### 5. Objetivo: Right Outer Join e Operador Nulo

Listar código e nome em ordem alfabética de funcionários sem subordinados.

```sql
SELECT
    F.cd_func, F.nm_func
FROM LOC_FUNCIONARIO G
    RIGHT OUTER JOIN LOC_FUNCIONARIO F
        ON F.cd_func = G.CD_GERENTE
WHERE
    G.cd_func IS NULL
ORDER BY F.cd_func, F.nm_func
```

![image](https://user-images.githubusercontent.com/12873897/115484849-e2f50780-a229-11eb-8751-32b8dcca1a3b.png)

