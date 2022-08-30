#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list> 

#include <numeric>

std::string sortItOut(std::string beforeSort)
{
    std::sort(beforeSort.begin(), beforeSort.end());
    return beforeSort;
}

std::string shuffleIt(std::string beforeShuffle)
{
    std::random_shuffle(beforeShuffle.begin(), beforeShuffle.end());
    return beforeShuffle;
}

std::vector<char> doubleCheck(std::string first, std::string second)
{
    std::vector<char>catcher;

    for (int i = 0; i < first.size(); i++)
    {
        if (first[i] == second[i])
        {
            catcher.push_back(first[i]);
        }
    }
    return catcher;
}

std::string spaceRemover(std::string& s)
{

    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    return s;
}

int sameLetters(std::string s, char c)
{

     auto howManyChars=std::count(s.begin(), s.end(), c);
     return howManyChars;

}

bool checkIfPalindrom2ndMethode(std::string s)
{
    return std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
}

bool checkIfPalindrom(std::string s)
{
    std::string theOldS = s;
    std::reverse(s.begin(), s.end());
    
    return theOldS == s;
}

std::vector<int> squaresFromRange(int a, int b)
{
    std::vector<int> v;

    while (v.size() >= a || v.size() <= b)
    {
        int num = a * a;
        v.push_back(num);
        a++;

    }

    return v;
}

int SumofSquares(std::vector<int> v)
{
   return std::accumulate(v.begin(), v.end(), 0);

}

std::vector<int> createFrom1ToN(int n)
{
    std::vector<int> from1ToN(n);
    iota(from1ToN.begin(), from1ToN.end(), 1);
    return from1ToN;
}

void permute3numbers(int a, int b, int c)
{
    std::vector <int>abc;
    abc.push_back(a);
    abc.push_back(b);
    abc.push_back(c);

    std::sort(abc.begin(), abc.end());
    do
    {
        for (int i : abc)
        {
            std::cout << i << ", ";
        }
        std::cout << std::endl;

    } while (std::next_permutation(abc.begin(), abc.end()));

}

int main()
{

}

void zad1()
{ //1. Napisz funkcj�, kt�ra przyjmuje stringa, nast�pnie uszereguje wszystkie litery w porz�dku alfabetycznym i zwraca tak odwr�conego stringa (sort).
    std::string toSort;
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> toSort;

    std::cout << sortItOut(toSort) << std::endl;
}
void zad2()
{
    ////2. Napisz analogiczn� funkcj�, kt�ra zwr�ci przemieszanego stringa(random_shuffle).Zwr�� uwag� czy za ka�dym uruchomieniem, faktycznie string jest przemieszany innaczej
    std::string toShuffle;
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> toShuffle;

    std::cout << shuffleIt(toShuffle) << std::endl;
}
void zad3()
{
    //3. Napisz funkcj�, kt�ra przyjmuje dwa stringi a nast�pnie zwraca vector ich wsp�lnych liter(powtarzajcych sie w obu stringach).
    std::string one, two;
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> one;
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> two;

    auto fromTwoStrings = doubleCheck(one, two);
    std::cout << "powstaly wektor to: ";
    std::for_each(fromTwoStrings.begin(), fromTwoStrings.end(), [](const char a) {std::cout << a << ","; });
}
void zad4()
{
    //4. Napisz funkcj�, kt�ra usunie spacje z podanego stringa.
    std::string myString = ("Hejka ! Ciao ! Ola !");
    spaceRemover(myString);
    std::for_each(myString.begin(), myString.end(), [](const char a) {std::cout << a; });
}
void zad5()
{
    //5. Napisz funkcj�, kt�ra zliczy wyst�pienia podanej litery w podanym stringu(count). vector i lista
    std::string someString = "Policz ile liter sie powtarza";
    char charCheck = 'a';

    auto result = sameLetters(someString, charCheck);
    std::cout << result << std::endl;

}

void zad6()
{
    //6. Napisz funkcj�, kt�ra sprawdzi czy podany string jest palindromem(reverse i transform lub equal)
    std::string someString = "Czy to jest palindrom";
    std::string someString2 = "radar";
    std::cout << someString << std::endl;
    std::cout << std::boolalpha << checkIfPalindrom(someString2) << std::endl;

    std::cout << std::boolalpha << checkIfPalindrom2ndMethode(someString2);

}

void zad7()

{//7. Napisz funkcj�, kt�ra stworzy wektor przechowuj�cy pot�gi kwadratowe z podanego zakresu np od. 3 do 10 (for_each)
    std::cout << "zad 7" << std::endl;

    int a, b = 0;
    std::cout << "podaj zakres" << std::endl;
    std::cout << "od: ";
    std::cin >> a;
    std::cout << "do: ";
    std::cin >> b;
    auto result = squaresFromRange(a, b);

    std::for_each(result.begin(), result.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl << std::endl;

}

void zad8()
{
    //8. Zmie� poprzednie zadanie tak aby zwraca�o sum� kwadrat�w(accumulate)
    std::cout << "zad 8" << std::endl;

    int a, b = 0;
    std::cout << "podaj zakres" << std::endl;
    std::cout << "od: ";
    std::cin >> a;
    std::cout << "do: ";
    std::cin >> b;
    auto result = squaresFromRange(a, b);

    std::for_each(result.begin(), result.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl << std::endl;

    std::cout << "sum of squares from range " << SumofSquares(result) << std::endl;

}

void zad9()
{
    //9. Napisz funkcj�, kt�ra stworzy wektor przechowuj�cy liczby od 1 do n.Nast�pnie utw�rz dwa wektory.
    // Jeden, kt�rzy b�dzie przechowywa� tylko wielokrotno�ci 2, a drugi tylko wielokrotno�ci 3. 
    // Nast�pnie zwr�� vector przechowuj�cy tylko wielokrotno�ci 2 i 3. (remove_copy_if, set_intersecti

    std::cout << "zad 9" << std::endl;
    auto result = createFrom1ToN(20);
    std::for_each(result.begin(), result.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl;

    std::vector<int> onlyTwo;
    copy_if(result.begin(), result.end(), std::back_inserter(onlyTwo), [](int n) { return n % 2 == 0; });
    std::for_each(onlyTwo.begin(), onlyTwo.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl;

    std::vector<int> onlyThree;
    copy_if(result.begin(), result.end(), std::back_inserter(onlyThree), [](int n) { return n % 3 == 0; });
    std::for_each(onlyThree.begin(), onlyThree.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl;


    std::vector<int> both;
    std::set_intersection(onlyTwo.begin(), onlyTwo.end(), onlyThree.begin(), onlyThree.end(), std::back_inserter(both));
    for (int n : both)  std::cout << n << ' ';


}

void zad10()
{
    permute3numbers(2, 3, 5);

}

//11. Napisz funkcj�, kt�ra przyjmuje wektor cyfr, a zwraca liczb� permutacji tych cyfr, kt�re s� wielokrotno�ci� 11.
//12. Napisz funkcj�, kt�ra zamieni podanego int na vector jej cyfr.
//13. Napisz funkcj�, kt�ra znajdzie pierwsz� wi�ksz� liczb�, kt�ra jest palindromem od zadanej liczby.



