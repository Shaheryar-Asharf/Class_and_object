#include<iostream>
using namespace std;


class Cricketer{
	
	
	private  :
		
		
		
		string name,dob;
		int shirtno,odi_rating,test_rating,t20_rating,startyear;
		public:
			
			
			
			Cricketer():name("\0"),dob("\0"),shirtno(0),odi_rating(0),test_rating(0),t20_rating(0),startyear(0){
				cout<<"i am default constructor of cricketer"<<endl;
			}
			
			
			
			
			Cricketer(string name_1,int shirtnumber,string D_O_B,int ODIRating,int testRate,int t20Rate,int start_year){
				cout<<"i am paramitrized  constructor"<<endl;
				name=name_1;
				shirtno=shirtnumber;
				dob=D_O_B;
				odi_rating=ODIRating;
				test_rating=testRate;
				t20_rating=t20Rate;
				startyear=start_year;		
}
			
			
			void display(){
				cout<<"the name of  player is: "<<name<<endl;
				cout<<"shirt number of player is: "<<shirtno<<endl;
				cout<<"date of birth of player is: "<<dob<<endl;
				cout<<"ODI rating of player is: "<<odi_rating<<endl;
				cout<<"test rating of player is: "<<test_rating<<endl;
				cout<<"t20 rating of player is: "<<t20_rating<<endl;
				cout<<"player start playing in: "<<startyear<<endl;
			}
			
			
			
			int calculateAge(){
					int birthdate=2023-stoi(dob);
				return birthdate;
				
			}
			
			
			int calculateExperience(){
					int experience=2023-startyear;
					return experience;
				
			}
			
			
			
			void changeODIRating(int change){
				odi_rating=change;
				cout<<"your changed ODIRating is: "<<odi_rating<<endl;
				
			}
			
			
			
			void changeTestRating(int change){
				test_rating=change;
				cout<<"your changed test rating is: "<<test_rating<<endl;
			}
			
			
			
			void changeT20Rating(int change){
				t20_rating=change;
				cout<<"your t20 rating is: "<<t20_rating<<endl;
			}
			
			
			
			
			~Cricketer(){
				cout<<"i am destructor of Cricketer"<<endl;
			}
			
			
			
};
class Bowler:public Cricketer{
	private:
		
		
		string type;
		int total_wicket,match_played;
		public:
			
			
			
			Bowler():type("\0"),total_wicket(0),match_played(0){
				cout<<"i am default constructor of bowler class"<<endl;
			}
			
			
			Bowler(string typ,int tl_wickets,int mtch_played,string name,int shirt,string birth,int ODI,int test,int t20,int startyear):Cricketer(name,shirt,birth,ODI,test,t20,startyear){
				type=typ;
				total_wicket=tl_wickets;
				match_played=mtch_played;
				
			}
			
			
			
			void display(){
					cout<<"the type of the player is: "<<type<<endl;
				cout<<"the total wicket of this player is: "<<total_wicket<<endl;
				cout<<"matches had played by this player is: "<<match_played<<endl;
			}
			
			
		int calculateBowlAverage(){
			int Average=total_wicket/match_played;
			return Average;
				
			}
			
			
			void updateMatches(int update){
				match_played=update;
				cout<<"your updated matches are: "<<match_played<<endl;
			}
			
			
			void updateWickets(int update){
				total_wicket=update;
			
			
				cout<<"your updated wickets are: "<<total_wicket;
			}
			~Bowler(){
				cout<<"i am destructor of bowler class"<<endl;
			
			}
			
			
			
};


class Batsman:public Cricketer{
	private:
		
		
		string type;
		int tl_runs,mtch_played,best_Score;
		public:
			
			
			
			Batsman():type("\0"),tl_runs(0),mtch_played(0),best_Score(0)
			{
				cout<<"i am default constructor of batsman class"<<endl;
		    }
			
			
			Batsman(string typ,int totl_run,int match_play,int bst_Score,string name,int shirt,string birth,int ODI,int test,int t20,int startyear):Cricketer(name,shirt,birth,ODI,test,t20,startyear){
				type=typ;
				tl_runs=totl_run;
				mtch_played=match_play;
				best_Score=bst_Score;
				
			}
			
			
			void display(){
				cout<<"the type of the player is: "<<type<<endl;
				cout<<"the total runs of this player is: "<<tl_runs<<endl;
				cout<<"matches had played by this player is: "<<mtch_played<<endl;
				cout<<"best score of this player is: "<<best_Score<<endl;
				
				
			}
			
			
			int calculateBAtAverage(){
				int Averages=tl_runs/mtch_played;
				return Averages;
			}
			
			
			
			void updateMatches(int update){
			
			
				mtch_played=update;
				cout<<"updated matches :"<<  mtch_played<<endl;
			}
			
			
			
			void updateRuns(int update){
			tl_runs=update;
			cout<<	"updated matches are :"<<tl_runs<<endl;
			}
			
			
			~Batsman(){
			
			
				cout<<"i am destructor of batsman"<<endl;
			}
			
			
			
};



class Allrounder{
	public:
		
		
		Allrounder(){
			cout<<"i am constructor of Allrounder clas"<<endl;
		}
		
		
		~Allrounder(){
			cout<<"i am destructor of allrounder"<<endl;
		}
		
		
};


int main (){
	Cricketer obj1;
	Bowler bowl("Bowler",5,33,"shery",31,"1997-12-30",26,69,20,2015);
	bowl.display();
	cout<<"the age of player is: "<<bowl.calculateAge();
	bowl.changeODIRating(19);
	bowl.changeTestRating(12);
	bowl.updateMatches(49);
	cout<<"the average of the matches are: "<<bowl.calculateBowlAverage()<<endl;
	Batsman bat("Batsman",200,30,150,"shery",31,"1995-02-10",26,69,20,2015);
cout<<"your average of bat playing is:"<<bat.calculateBAtAverage()<<endl;
bat.updateMatches(30);
bat.updateRuns(200);
bat.display();
}

