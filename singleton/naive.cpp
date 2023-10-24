//It’s pretty easy to implement a sloppy Singleton. 
//You just need to hide the constructor and implement a static creation method.

//The same class behaves incorrectly in a multithreaded environment.
//Multiple threads can call the creation method simultaneously and get several instances of Singleton class.
