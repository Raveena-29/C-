# C++
## ABOUT C++ PROGRAMMING LANGUAGE
- C++ developed in 1979
- In 1979, Bjarne Stroustrup, a Danish computer scientist, began work on "C with Classes", the predecessor to C++.
- C++ gives programmers a high level of control over system resources and memory.
- The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.
- C++ is a general purpose(it has a wide variety of use cases and is used in large areas.) object-oriented programming language.
- It is a middle-level langauge, as it encapsulates both high and low level language features.
- C++ supports both procedural and object oriented programming paradigms. Therefore, C++ is also called a hybrid language.
- C++ is a Must for students and working professionals to become a great Software Engineer.
- C++ is very close to hardware, so you get a chance to work at a low level which gives you a lot of control in terms of memory management, better performance and finally robust software development.
- Some of today's most visible used systems have their critical parts written in C++.
  - Bloomberg (Financial formation)
  - Amazon(Web commerce)
  - Google (Web Search)
  - Facebook (Social Media)
- C++ is used to create games and graphics.
- C++ is used in ATM machines from which you withdraw cash.

 <br>

## Difference between C and C++
- C++ was developed as an extension of C, and both languages have almost the same syntax.
- The main difference between C and C++ is that C++ support classes and objects, while C does not.
 <br>

 ## C++ SYNTAX
 **Let's write some code**
 <br>
 
```
 #include <iostream>
 using namespace std;
 int main(){
      cout<<"Hello World";
      return 0;
 }
```
**OUTPUT** :Hello World

<br>

<details>
<summary>Let's break up the code to understand it better</summary>

**Line 1** : 
-  #include <iostream> is a header file library that lets us work with input and output objects, such as cout(used in line 4 in the code).
-  Header files add functionality to C++ programs.
  <br>

**Line 2** :
- Using namespace std means that we can use names for objects and variables from standard library.
  <br>
  
**Line 3** :
- int main() is a function.
- Any code inside its curly brackets{} will be executed.
- main() function is the starting point of any C++ program.
  <br>

**Line 4** :
- cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text.
- In our example it will output "Hello World".
  <br>
  
>[!NOTE]
>Every C++ statement ends with a semicolon (;)
<br>

**Line 5** :
- return 0 ends the main function
- Whenever the return type of a function is not void , we return some value.
- In this example , return type is int and we return 0.
  <br>

**Line 6** :
- Do not forget to add the closing curly bracket } to actually end the main function.

</details>

**Omitting Namespace**
C++ programs that runs without the standard namespace library. The `using namespace std`  line can be omitted and replaced with the `std` keyword, followed by the `::` operator for some objects.
```
#include <iostream>
int main() {
  std::cout << "Hello World!";
  return 0;
}
```
<br>

## C++ OUTPUT
<details>
<summary>
  
- **Print Text**
</summary>
  <br>
  
  - The `cout` object, together with the `<<` operator, is used to output values/print text:
  - You can add as many cout objects as you want.
<br>

>[!NOTE]
>it does not insert a new line at the end of the output.
```
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
}
```
<br>

OUTPUT :
>Hello World!
><br>
>I am learning C++
</details>
<br>

<details>
<summary>
    
- **New Lines**
</summary>

- To insert a newline , use \n character.
  - EXAMPLE: 
```
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  return 0;
}
```
<br>

OUTPUT:
>Hello World!
><br>
>I am learning C++

>[!TIP]: Two \n characters after each other will create a blank line:
> Example:
```
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n\n";
  cout << "I am learning C++";
  return 0;
}
```
<br>

OUTPUT:
>Hello World!
><br>
><br>
>I am learning C++
<br>

- Another way to insert a new line, is with the end1 manipulator
  - EXAMPLE:
```
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
}
```
<br>

OUTPUT :
>Hello World!
><br>
>I am learning C++
<br>

>[!NOTE]
>Both \n and endl are used to break lines. However, \n is most used.

</details>
<br>

## COMMENTS
- In programming we comment to describe our code or to give some extra details about the code.
- Programming comments are explanatory statements that you can include in the C++ code.
- These comments help anyone reading the source code. All programming languages is allow for some form of comments.
  <br>

**Comments in C++**
- C++ supports single-line and multi-line comments.
- All characters available inside any comment are ignored by C++ complier.
- Single line comments start with //
  - Example :
    ```
    // This is a comment.
    ```
- Multi line comments start with /* and ends with */
  - Example :
    ```
    /* This is a multi line comment
    We are learning C++ */
    ```
<br>

## CONTAINER
Computer have large memory spaces. But as a programmer , we need to utilize these spaces effectively. Hence, we use the concept of storing stuff in containers. It is similar to how we keep food in containers inside the refrigerator. These Containers make it easy to access the stuff whenever we need it.
<br>

## VARIABLE
<br>
Now let's assume you need to store something in your computer memory. For this, you will need a container. In programming , this storage container is called a _variable_.
<br>
It becomes much easier to identify the food in the container if you had put a label on the container in the refrigerator.
<br>

Similary, we have to provide our storage container (Variable)  a _unique name_ . So, that it comes to our service whenever called upon.
<br>

Along with that, we also need to mention the _type of value_ it will contain.Eg: words,numbers,etc.
<br>
- In C++, there are different types of variables (defined with different keywords).
- For example:
  - **int** - stores integers (whole numbers), without decimals, such as 123 or -123
  - **double** - stores floating point numbers, with decimals, such as 19.99 or -19.99
  - **char** - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
  - **string** - stores text, such as "Hello World". String values are surrounded by double quotes
  - **bool** - stores values with two states: true or false
<details>
  
<summary> 
  
  **CONCEPT**: Variables </summary>

<br>
Now you might be wondering, what kind of data we need to store and exactly why we need to store it.
<br>
Rather it is any kind of application or simple application, where we will neeed to store login credentials or be it a game where we sill store the game score, we se variables to store these things!
<br>
Thus, understanding that variables might be a simple concept, but is a powerful one.
<br>
<br>

- To understand it better. let's compare the steps of storing food in containers to storing data in a variable.
  1. **Identify one container** : define the type of variable
  2. **Give the container a label** : Assign a name to the variable
  3. **Put stuff in the container** : Put a value in the variable.
  <br>
  That's it! It is as simple as that
</details>
<br>

<details>
<summary>
Let's see how to store variable in C++ </summary>
  
  - **Define the type of variable** : Let's say we want to store your name and name would be a word and a word in programming is called a _string!_ .
  - **Give the container a label** : _firstName_ (The name we are giving to the container.)
<br>

>[!TIP]
>Make sure that the names that you give to the container should be meaningful!

<br>

 - **Put a value in the variable** : firstName = "John" (We assigned John as the value to store in the container.)
 - This is how it would finally look like:
```
string firstName = john
```
 - Now let's print the value
   ```
   cout<<firstName;
   ```
   <br>

   **OUTPUT**
   > John
</details>
<br>

**Declaring (Creating) Variables**
<br>
SYNTAX:
```
type variableName = value;
```
<br>

**EXAMPLE** :To create a variable that should store a number.
<br>
`Create a variable called myNum of type int and assign it the value 15`
```
#include <iostream>
using namespace std;

int main() {
  int myNum = 15;
  cout << myNum;
  return 0;
}
```
OUTPUT :
>15
<br>

`Declare a variable without assigning the value, and assign the value later`
```
#include <iostream>
using namespace std;
int main(){
    int myNum;
    myNum = 15;
    cout << myNum;
    return 0;
}
```
OUTPUT :
>15
<br>

`To declare more than one variable of the same type, use a comma-separated list:`
**EXAMPLE:**
```
#include <iostream>
using namespace std;
int main(){
    int x = 5, y = 6, z = 50;
    cout << x + y + z;
    return 0;
}
```
<br>

`You can also assign the same value to multiple variables in one line:`
**EXAMPLE:**
```
#include <iostream>
using namespace std;
int main(){
  int x, y, z;
  x = y = z = 50;
  cout << x + y + z;

}
```
> OUTPUT: 150
<br>

>[!NOTE]
>If assign a new value to an existing variable, it will overwrite the previous value.
><br>
>EXAMPLE:
```
#include <iostream>
using namespace std;
int main(){
    int myNum = 15;  // myNum is 15
    myNum = 10;  // Now myNum is 10
    cout << myNum;  // Outputs 10
    return 0;
}
```
> OUTPUT :
><br>
>  10
<br>

**EXAMPLE:** A demonstration of other data types:
<br>
```
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
```
<br>

**Display Variables**
<br>
The cout object is used together with the << operator to display variables.
<br>
To combine both text and a variable, separate them with the << operator:
<br>
**EXAMPLE:**
```
int myAge = 35;
cout << "I am " << myAge << " years old.";
```
<br>

**Add Variables Together**
<br>
To add a variable to another variable, you can use the + operator:
**EXAMPLE:**
```
#include <iostream>
using namespace std;
int main(){
  int x = 5;
  int y = 6;
  int sum = x + y;
  cout << sum;
}
```
>OUTPUT: 11
<br>

## C++ INDENTIFIERS
- All C++ variables must be identified with unique names.These unique names are called identifiers.
- Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
- he general rules for naming variables are:
  - Names can contain letters, digits and underscores.
  - Names must begin with a letter or an underscore (_).
  - Names are case sensitive (myVar and myvar are different variables).
  - Names cannot contain whitespaces or special characters like !, #, %, etc.
  - Reserved words (like C++ keywords, such as int) cannot be used as names.

<br>

>[!NOTE]
>It is recommended to use descriptive names in order to create understandable and maintainable code.
<br>

**EXAMPLE:**
```
// Good
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;
```
<br>

## C++ CONSTANT VARIABLE
When you do not want others (or yourself) to change existing variable values, use the `const` keyword (this will declare the variable as "constant", which means unchangeable and read-only)
<br>

**EXAMPLE:**
```
const int myNum = 15;         // myNum will always be 15
myNum = 10;                  // error: assignment of read-only variable 'myNum'
```
>[!TIP]
>You should always declare the variable as constant when you have values that are unlikely to change.
><br>
>EXAMPLE:
>```
>const int minutesPerHour = 60;
>const float PI = 3.14;
>```
>`When you declare a constant variable, it must be assigned with a value:`
>
>EXAMPLE:
>```
>//  Like this:
>const int minutesPerHour = 60;
><br>
>//  This however, will not work:
>const int minutesPerHour;
>minutesPerHour = 60;       // error
>```
<br>

## USER INPUT IN C++
`cin` is a predefined variable that reads data from the keyboard with the extraction operator `(>>)`.
<br>

**EXAMPLE:** The user can input a number, which is stored in the variable x. Then we print the value of x.
```
#include <iostream>
using namespace std;
int main(){
  int x;
  cout << "ENTER A NUMBER:";      // Type a number and press enter.
  cin >> x;                       // Get user input from the keyboard.
  cout << "YOUR NUMBER IS "<<x;   // Display the input value.
}
```
>OUTPUT :
```
ENTER A NUMBER:5
YOUR NUMBER IS 5
```
**Creating a Simple Calculator**
<br>

**EXAMPLE:** The user must input two numbers. Then print the sum by calculating (adding) the two numbers.
```
#include <iostream>
using namespace std;
int main(){
  int x,y,sum;
  cout<<"Enter first number:";
  cin >> x;
  cout<<"Enter second number:";
  cin >> y;
  sum=x+y;
  cout<<"The sum is :"<<sum;
}
```
>OUTPUT
```
Enter first number:15
Enter second number:20
The sum is :35
```
