#include<iostream>
#include<string>
using namespace std;

class FoodItem// class definition
{
	private:
	//private data members.
	 string name;
	 int calories;
	 float grams_of_fats;
	 float grams_of_proteins;
	 float grams_of_carbohydrates;
	
	public:
	   FoodItem():name(""),calories(0),grams_of_fats(0.0),grams_of_proteins(0.0),grams_of_carbohydrates(0.0){}//default constructor
	   
	   //Parametrized constructor will asign values to arguments.
	   FoodItem(string name, int calories, float grams_of_fats, float grams_of_proteins, float grams_of_carbohydrates)
	   {
	   	
	   	    this->name = name;// argument and data members is of same name.
	   	    this->calories = calories;
	   	    this->grams_of_fats = grams_of_fats;
	   	    this->grams_of_proteins = grams_of_proteins;
	   	    this->grams_of_carbohydrates = grams_of_carbohydrates;
	   }
	   
	   //getter function will return name of current food item.
	   string get_name()const
	   {
	   	    return name; 
	   }
	   
	   //getter function will return grams of proteins.
	   float get_grams_of_proteins()const
	   {
	   	    return grams_of_proteins; 
	   }
	   
	   //getter function will return grams of fats.
	   float get_grams_of_carbohydrates()const
	   {
	   	    return grams_of_carbohydrates; 
	   }
	   
	   //getter function will return grams of fats.
	   float get_grams_of_fats()const
	   {
	   	    return grams_of_fats; 
	   }
	   
	   //friend function of food item class that will calculate calories of food.
	   friend float calculate_calories(const FoodItem& item);
	   
	   //display function will show the details of food.
	   void display()
	   {
	   	
	   	  cout<<"Name: "<<get_name()<<endl;
	   	  cout<<"Protein Quantity: "<<get_grams_of_proteins()<<endl;
	   	  cout<<"Carbohydrate Quantity: "<<get_grams_of_carbohydrates()<<endl;
	   	  cout<<"Calculated Calories: "<<calculate_calories(*this)<<endl;
	   
	   }
};
//calculate calories funcion definition, function will take object of food item clas as argument.
float calculate_calories(const FoodItem& item)
{
    //formula or calculating the calories of food.
    return (9*item.grams_of_fats) + (4*item.grams_of_proteins) + (4*item.grams_of_carbohydrates);
}
	   
int main() 
{
    string name, option;
    float proteins;
	float fats; 
	float carbohydrates;

  do //do while loop will iterate until user enter 'exit'.
  {
  	//prompt user to enter name of food item.
    cout<<"Enter name of Food Item (or 'exit' to 'quit'): ";
    cin>>option;
  
    if(option == "exit" || option == "Exit") //if user enter exit the close the program.
	{
      break;
    }

    do //this loop will ensures that user enter non-negative values.
	{
	  //prompt user to enter grams of proteins.	
      cout<<"Enter Proteins(in grams): ";
      cin>>proteins;
      
      if(proteins < 0) //if user enter negative value than ask user to again enter positive value. 
	  {
        cout<<"Error: Protein content cannot be negative. Please enter a non-negative value."<<endl;
      }
    } while(proteins < 0);// until user enter negative number

    do //this loop will ensures that user enter non-negative values.
	{
	  //prompt user to enter grams of carbohydrates.		
      cout<<"Enter Carbohydrates(in grams): ";
      cin >> carbohydrates;
      
      if(carbohydrates < 0) 
	  {
        cout<<"Error: Carbohydrate content cannot be negative. Please enter a non-negative value."<<endl;
      }
      
    } while(carbohydrates < 0);

    do //this loop will ensures that user enter non-negative values.
	{
      cout<<"Enter Fat content (in grams): ";
      cin>>fats;
      if(fats < 0) 
	  {
        cout<<"Error: Fat content cannot be negative. Please enter a non-negative value."<<endl;
      }
    } while(fats < 0);

    cout<<"\n\n";

    //Parametrized constructor call passing values of data members, passing calories as 0 , which will be later calculate in function.
    FoodItem F1(name, 0, fats, proteins, carbohydrates);
    F1.display();

    cout<<"Food item details displayed successfully!"<<endl; 

  } while(option != "exit" || option != "Exit");

  return 0;
}
