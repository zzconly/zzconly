# include <stdlib.h>
# include <stdio.h>
int main  (){
	int floor_qiming [10] = {1,2,3,4,5,6,7,8,9,10};
	int Huster_x , Elevator_x, goal_floor,t = 0,people = 0;
    scanf ("%d %d %d", &Huster_x,&Elevator_x,&goal_floor);
	if ( Huster_x != Elevator_x ){
        t += abs(Elevator_x - Huster_x);
        Elevator_x = Huster_x;
        printf ("����%d��ʱ�䵥λ����������%d��\n",t ,people);
	}
	if ( Elevator_x != goal_floor && Huster_x == Elevator_x ){
		people += 1;
		t += abs( Elevator_x - goal_floor );
		printf ("����%d��ʱ�䵥λ����������%d��\n",t,people );
		Elevator_x = goal_floor;
		Huster_x = goal_floor;
	}
	if(Huster_x == goal_floor){
		people -=1;
		printf("СHuster�µ����ˣ���������%d��",people) ;
	}
	return 0 ;
}
