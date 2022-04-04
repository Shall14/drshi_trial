#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
#include <set>
#include <map>


int main()
{
    set<int> s;
    int n;

    // Point 3

    printf("Please Enter A Number: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        s.insert(val);
    }

    // Point 4

    printf("Enter a number to check if it exists in set or not: \n");
    int n1;
    scanf("%d", &n1);
    if (s.count(n1) == 1)
        printf("The number %d is present in the set\n", n1);
    else
        printf("The number %d is NOT present in the set\n", n1);

    // Point 5

    printf("Enter a number you want to erase: \n");
    int n2;
    scanf("%d", &n2);
    if (s.count(n2) == 1)
    {
        s.erase(n2);
        printf("The number %d is erased from the set\n", n2);
    }

    // Point 6

    set<int>::iterator itr = s.begin();
    char tt[1001];
    map<int, string> mp;

    while (itr != s.end())
    {
        printf("Enter a string that you want to associate with the value %d\n", *itr);

        scanf("%1000s", tt);
        string tmp = tt;

        mp[*itr] = tmp;
        itr++;
    }

    // Point 7

    map<int, string>::iterator itr2 = mp.begin();

    printf("The contents of the map is as follows: \n");
    printf("Key  Value\n");
    while (itr2 != mp.end())
    {
        printf("%d %s\n", (*itr2).first, (*itr2).second.c_str());
        itr2++;
    }


    // Displaying the map values

    itr2 = mp.begin();

    printf("The contents of the map is as follows: \n");
    printf("Key  Value\n");
    while (itr2 != mp.end())
    {
        printf("%d %s\n", (*itr2).first, (*itr2).second.c_str());
        itr2++;
    }

    return 0;
}
