# C++
## ABOUT C++ PROGRAMMING LANGUAGE
- C++ developed in 1979
- In 1979, Bjarne Stroustrup, a Danish computer scientist, began work on "C with Classes", the predecessor to C++.
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

 ## Let's write some code
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
  
> [!NOTE]
> Every C++ statement ends with a semicolon (;)
<br>

**Line 5** :
- return 0 ends the main function
- Whenever the return type of a function is not void , we return some value.
- In this example , return type is int and we return 0.
  <br>

**Line 6** :
- Do not forget to add the closing curly bracket } to actually end the main function.

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

## Container
Computer have large memory spaces. But as a programmer , we need to utilize these spaces effectively. Hence, we use the concept of storing stuff in containers. It is similar to how we keep food in containers inside the refrigerator. These Containers make it easy to access the stuff whenever we need it.
<br>

**Let me introduce you to variables**
<br>
Now let's assume you need to store something in your computer memory. For this, you will need a container. In programming , this storage container is called a _variable_.
<br>
It becomes much easier to identify the food in the container if you had put a label on the container in the refrigerator.
<br>

Similary, we have to provide our storage container (Variable)  a _unique name_ . So, that it comes to our service whenever called upon.
<br>

Along with that, we also need to mention the _type of value_ it will contain.Eg: words,numbers,etc.
<br>

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

>  [!TIP] 
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

