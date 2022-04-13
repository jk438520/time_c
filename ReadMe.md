# Sito Eratostenesa: Java vs c++ vs Python

## Opis

Wszystkie programy najpierw wykonują sito Eratostenesa na pierwszych N liczbach, a następnie wrzucają kolejne liczby pierwsze na jakąś dynamiczną strukturę danych (odpowiednio ArrayList, Vector i List).

## Środowisko

- Linux 5.13.0-35-generic x86_64

## Wersje języków programowania

- javac 17.0.2
- c++ (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
- Python 3.8.10

## Wyniki

Nie używałem flagi -Xprof. Nie działa ona w java 17.

2^27 było największym rozmiarem tablicy akceptowalnym przez Javę.
|Komenda wywołania|N=2^27|N=2^20|N=2^10|
|-|-|-|-|
|time java SitoStatic|real 2m9,925s<br>user 7m45,243s<br>sys 0m1,377s|real 0m0,695s<br>user 0m2,260s<br>sys 0m0,040s|real 0m0,063s<br>user 0m0,031s<br>sys 0m0,018s
|time java -Xint SitoStatic|real 3m59,340s<br>user 10m17,664s<br>sys 0m1,748s|real 0m1,646s<br>user 0m3,245s<br>sys 0m0,024s|real 0m0,062s<br>user 0m0,031s<br>sys 0m0,010s
| g++ sito_static.cpp -O3 -o sito_static.exe<br>time ./sito_static.exe|real 0m5,110s<br>user 0m4,887s<br>sys  0m0,208s|real 0m0,025s<br>user 0m0,016s<br>sys 0m0,008s|real 0m0,006s<br>user 0m0,006s<br>sys 0m0,000s
|time python3 sitoStatic.py|real 1m33,049s<br>user 1m28,517s<br>sys 0m1,183s|real 0m0,676s<br>user 0m0,662s<br>sys 0m0,013s|real 0m0,038s<br>user 0m0,023s<br>sys 0m0,015s

## Kody źródłowe
    