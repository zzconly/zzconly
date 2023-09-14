# include <stdlib.h>
# include <stdio.h>
int main  (){
	int floor_qiming [10] = {1,2,3,4,5,6,7,8,9,10};
	int Huster_x , Elevator_x, goal_floor,t = 0,people = 0;
    scanf ("%d %d %d", &Huster_x,&Elevator_x,&goal_floor);
	if ( Huster_x != Elevator_x ){
        t += abs(Elevator_x - Huster_x);
        Elevator_x = Huster_x;
        printf ("过了%d个时间单位，电梯里有%d人\n",t ,people);
	}
	if ( Elevator_x != goal_floor && Huster_x == Elevator_x ){
		people += 1;
		t += abs( Elevator_x - goal_floor );
		printf ("过了%d个时间单位，电梯里有%d人\n",t,people );
		Elevator_x = goal_floor;
		Huster_x = goal_floor;
	}
	if(Huster_x == goal_floor){
		people -=1;
		printf("小Huster下电梯了，电梯里有%d人",people) ;
	}
	return 0 ;
}
