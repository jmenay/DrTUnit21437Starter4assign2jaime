//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_Jordan

create a single main.cpp that contains code samples and implementations of each of the following topics */


#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert> // library used in stack, set, and map
#include <stack>  // library for stack
#include <set>    // library for set
#include <utility> // library for pair structure
#include <map>      //library for map
#include <algorithm>
using namespace std;

typedef map<string, int> MapT;              //type definition for Map Section
typedef MapT::const_iterator MapIterT;      //type definition for Map Section creates iterator


class MyClassVector1
{
private:
    vector<int> vec;
public:
    MyClassVector1(vector<int> v)  //parameterized constructor
    {
        vec = v;
    }
    void print()
    {
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
};

class MyClassVector2
{
private:
    vector<double> vec;
public:
    MyClassVector2(vector<double> v)  //parameterized constructor
    {
        vec = v;
    }
    void print()
    {
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
};
class MyClassVector3
{
private:
    vector<string> vec;
public:
    MyClassVector3(vector<string> v)  //parameterized constructor
    {
        vec = v;
    }
    void print()
    {
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
};



 bool less_than_7(int value)
        {
            return value < 7;
        } 
int main(int argc, char* argv[])
{
    /****Section_Name***Vectors*/
 //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector  - COMMENTED OUT ONE OF THE FOUR ELEMENTS SO THAT IT IS 3 ELEMENTS

    vd.push_back(1);
    vd.push_back(2);
    // vd.push_back(3);
    vd.push_back(55.4);

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

    // add 3 elements to the vs vector.
    vs.push_back("Item 1");
    vs.push_back("Item 2");
    vs.push_back("Item 3");


    // display the 3 elements in the vd vector 

    cout << "\nValues in vd: \n";
    for (double vals : vd)
    {
        cout << vals << endl;
    }

    cout << "\nAnother way to print vector: " << endl;
    for (int i = 0; i < vd.size(); i++)
    {
        cout << vd[i] << endl;
    }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n";


    for (double vals : vi)
    {
        cout << vals << endl;
    }


    // display the 3 elements in the vs vector  

    cout << "\nElements in vs: \n";

    for (std::string& item : vs)
    {
        cout << item << endl;
    }

    /****Section_Name***Vector_as_Class_Member*/
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/
    //WHAT ARE WE ACTUALLY DOING HERE. I hope I did this the way it was requested in the assignment instructions.

    cout << "\nVector_as_Class_Member Double" << endl;
    // vector<double> vecDouble; 
      //   for (int i = 1; i <= 5; i++) // 5 items into the vector container vec
         //MyClassVector2 objDouble(vecDouble);
    MyClassVector2 objDouble(vd); // passing vec into MyClassVector2
    objDouble.print();
    cout << endl;

    cout << "\nVector_as_Class_Member Int" << endl;
    // vector<int> vecInt; 
      //   for (int i = 1; i <= 5; i++) // 5 items into the vector container vec
        //     vecInt.push_back(i); 
         // MyClassVector1 objInt(vecInt);
    MyClassVector1 objInt(vi); // passing vec into MyClassVector1
    objInt.print();
    cout << endl;

    cout << "\nVector_as_Class_Member String " << endl;
    //  vector<string> vecString; 
      //    for (int i = 1; i <= 5; i++) // 5 items into the vector container vec
           //   vecString.push_back("item "+ std::to_string(i));
          // MyClassVector3 objString(vecString);
    MyClassVector3 objString(vs); // passing vec into MyClassVector3
    objString.print();
    cout << endl;
   
    /****Section_Name***STL_Iterators*/
    cout << "\nIterations expanded to 10 elements: " << endl;

    vector< int > vint(10); // vector with 10 integer numbers
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;
    vint[3] = 40;
    vint[4] = 50;
    vint[5] = 60;
    vint[6] = 70;
    vint[7] = 80;
    vint[8] = 90;
    vint[9] = 100;

    // Display elements of the vector:

    vector< int >::iterator it;                         // Like pointer, iterator is dereferenced to  
    for (it = vint.begin(); it != vint.end(); ++it)     // access the value of the element pointed by it:
    {
        std::cout << " " << *it;
    }
    std::cout << endl;


    /**************Section_Name*************** Stack*/
        /*A stack is a container that permits to insert and extract its elements
        only from the top of the container. */
    {
        std::cout << "\nStack: \n" << endl;

        stack< int > st;

        st.push(100);           // push number on the stack
        assert(st.size() == 1); // verify one element is on the stack
        assert(st.top() == 100);// verify element value
        std::cout << "The value at the top of the stack = " << st.top() << endl;

        st.top() = 456;           // assign new value
        assert(st.top() == 456);

        std::cout << "The value at the top of the stack after assigning a new value = " << st.top() << endl;

        st.pop();                 // remove element
        assert(st.empty() == true);

        std::cout << "The size of the stack after removal = " << st.size() << endl; //displaying the removal of the element

        //Write comments that help one better understand what the code is doing.

    /****************Section_Name**************** Set*/

        //A set is a container that holds unique elements. The elements in std::set are always sorted.

        std::cout << "\nSet: \n" << endl;

        //Write the code as presented in: 3. std::set

        set< int > iset;   // set of unique integer numbers *keyword unique* it will sort the data inputed before  

        /*set <int> iset({11,-11,55,22,22}); ----- Tested out this method of populating the set.
        Output was as expected: -11 11 22 55  */

        //populate set with values
        iset.insert(11); 
        iset.insert(-11);
        iset.insert(55);
        iset.insert(22);
        iset.insert(22);

        if (iset.find(55) != iset.end()) // is value already stored?
        {
            iset.insert(55);
        }
        
        assert(iset.size() == 4); // sanity check :-) ---I left this out originally just to see and it was 4
        
        set< int >::iterator it;
        
        for (it = iset.begin(); it != iset.end(); it++)
        {
            std::cout << " " << *it;
        }
        cout <<endl;


        //Write comments that help one better understand what the code is doing.

    /**************Section_Name******************Pair_Structure*/
        //Pair Structure *** std::pair< T1, T2 > *** 
        //is a C++ structure that holds one object of type T1 and another one of type T2
        //A pair is much like a container that holds exactly two elements.
        //The pair is defined in the standard header named utility.

        cout << "\nPair Structure: \n" << endl;

        //Write the code as presented in: 4. std::pair structure
        
        pair< string, string > strstr;
        strstr.first = "Hello";
        strstr.second = "World";

        std::cout << strstr.first <<" " << strstr.second;
        cout << endl;

        pair< int, string > intstr;
        intstr.first = 1;
        intstr.second = "one";

        std::cout << intstr.first << " " << intstr.second;
        cout << endl;

        pair< string, int > strint("two", 2);
        assert(strint.first == "two");
        assert(strint.second == 2);

        std::cout << strint.first << " " << strint.second;
        cout << endl;

        //Write comments that help one better understand what the code is doing.

    /*******Section_Name******* Map_Insert*/

        // Use insert( ) to put in a new item -- ONLY -- if it isn't there.
       
        cout << "\nMap Insert: \n" << endl;


        //Write the code as presented in: 14. std::map::insert
        /*REMINDER type definitions are : 
        A.   typedef map<string, int> MapT; 
        B.   typedef MapT::const_iterator MapIterT;
        They reside above int (main)*/ 

        MapT amap;
        pair< MapIterT, bool> result = amap.insert(make_pair("Fred", 45));
        
        /* created a pair containing the Iteration
       found in type def B **see REMINDER** and a boolion aka True or False with the name of this pair being result. Result is
       already defined here as an insertion into Map T's amap. 
       The amap.insert that result is equal to further designates a pair containing the string Fred and interger 45
       So that amap references the pair ("Fred", 45)
       Okay now I'm getting lost probably been staring at this screen too long and definetly in need of sleep. 
        */
        
        
        assert(result.second == true);
        assert(result.first->second == 45);
     
        result = amap.insert(make_pair("Fred", 54));

        // Fred was already in the map, and -- result.first -- simply points there now:
        assert(result.second == false);
        assert(result.first->second == 45);


        //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
        /*  A map is a container that holds unique pairs of keys and values.
            The elements in std::map are always sorted by its keys.
            Each element of the map is formed by the combination of the key value and a mapped value.
            Map iterators access both the key and the mapped value at the same time.    */

        cout << "\nMap Summary: \n" << endl;

        //Write the code as presented in: 16. Map summary
        
        map < string, string > phone_book;
        
        phone_book["411"] = "Directory";
        phone_book["911"] = "Emergency";
        phone_book["508-678-2811"] = "BCC";

        if (phone_book.find("411") != phone_book.end()) 
        {
            phone_book.insert(make_pair(string("411"),string("Directory")));
        }

        assert(phone_book.size() == 3);
        
        map< string, string >::const_iterator itsummary;
       
        for (itsummary = phone_book.begin(); itsummary != phone_book.end(); ++itsummary)
        {
           std:: cout << " " << itsummary->first << " " << itsummary->second << endl;
        }



        //Write comments that help one better understand what the code is doing.STILL NEED TO DO THIS


    /****Section_Name**** Sort_Algorithm*/
                /*Sort the range between two iterators
        Iterators must be random access 
        Items pointed to must have operator <

            template < typename RandomIterT >
            void sort ( RandomIterT first, RandomIterT last );

            template < typename RandomIterT, typename PredicateT >
            void sort ( RandomIterT first, RandomIterT last, PredicateT pr );  */

        cout << "\nSort Algorithm: \n" << endl;

        //Write the code as presented in: 23. sort example
        /*  
            #include< algorithm>
            #include< vector>

            using namespace std;
                                    */
        
        int arr[100];           //declaring an integer array with the size of 100
        sort(arr, arr + 100);   //performing a sort on the array

        vector <int> v1(5);
        v1[0] = 32;
        v1[1] = 6;
        v1[2] = 16;
        v1[3] = 8;
        v1[4] = 41;


        sort(v1.begin(), v1.end());                         //performing sort on the vector
        vector< int >::iterator it2;                         // Like pointer, iterator is dereferenced to  
        for (it2 = v1.begin(); it2 != v1.end(); ++it2)     // access the value of the element pointed by it:
        {
            std::cout << " " << *it2;
            
        }
        std::cout << endl;
        //Write comments that help one better understand what the code is doing.




    /****Section_Name****Predicate_Algorithm*/

        cout << "\nSort Algorithm: \n" << endl;

        //Write the code as presented in: 25. count_if and predicate function

        

        vector < int > v2(3);
            v2[0] = 2;
            v2[1] = 3;
            v2[2] = 9;
        int count_less = std::count_if(v2.begin(), v2.end(), less_than_7);
       
        cout << count_less;// will show a value of 2 because there are only 2 elements less than 7 in the vector
        std::cout << endl;
        //Write comments that help one better understand what the code is doing. 

        return 0;
    }
       
}
