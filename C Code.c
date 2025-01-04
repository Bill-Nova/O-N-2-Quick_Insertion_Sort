#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int Compare;
	int i=0;
	int Input_Max=1;
	printf("Input Max=?\n");
	scanf("%d",&Input_Max);
	int Sort_Add_Mid=Input_Max;
	int Sort_Add_High=Input_Max+1;
	int Sort_Add_Low=Input_Max-1;
	int Counter;
	if(Input_Max<0){ 								
		printf("ERR!!!Input Max<0!");								
		goto End;
	}
	
	int* Input_Add=(int*)malloc(Input_Max*sizeof(int));	//!!!	Hypothesis Non-existent! one time one input 	!!!
	if(Input_Add==NULL){ 					//!!!	In order to printf("Input(rand()%10)=\n");  	!!!
		printf("ERR!!!");				//!!!			Non-existent Add		!!!
		goto End;
	}
	int* Sort_Add=(int*)malloc((Input_Max*2)*sizeof(int));	//!!!And If you want this code to run really fast, replace malloc() with a REAL Add[]!!!
	if(Sort_Add==NULL){ 					//!!!				Sort Add Max=Input Add Max*2			     !!!
		printf("ERR!!!");
		goto End;
	}
	
	srand((unsigned)time(NULL));
	printf("Input(rand()%10)=\n");
Loop_Input_Rand:
		Input_Add[i]=rand()%10;
		printf("%d",Input_Add[i]);
	if(i!=Input_Max){
		i++;
		goto Loop_Input_Rand;
	}
	printf("\n Sort=");
//----------------------------------
//Normal Sort
	i=0;//Now i=Input_Add[Low---->High]
	if(i==Input_Max){
		printf("%d",Input_Add[i]);
		goto End;
	}	
	Sort_Add[Sort_Add_High]=Input_Add[i];
	
	i++;
	
	Sort_Add[Sort_Add_Low]=Input_Add[i];
	if(Sort_Add[Sort_Add_Low]>Sort_Add[Sort_Add_High]){
		Compare=Sort_Add[Sort_Add_Low];
		Sort_Add[Sort_Add_Low]=Sort_Add[Sort_Add_High];
		Sort_Add[Sort_Add_High]=Compare;
	}
	if(i==Input_Max){
		printf("%d",Sort_Add[Sort_Add_High]);
		printf("%d",Sort_Add[Sort_Add_Low]);
		goto End;
		}
		
	i++;
	
	Compare=Input_Add[i];
	if(Compare>Sort_Add[Sort_Add_High]){
		Sort_Add[Sort_Add_Mid]=Sort_Add[Sort_Add_High];
		Sort_Add[Sort_Add_High]=Compare;
	}else{
		if(Compare>Sort_Add[Sort_Add_Low]){
			Sort_Add[Sort_Add_Mid]=Compare;
		}else{
			Sort_Add[Sort_Add_Mid]=Sort_Add[Sort_Add_Low];
			Sort_Add[Sort_Add_Low]=Compare;
		}
	}
	if(i==Input_Max){
		printf("%d",Sort_Add[Sort_Add_High]);
		printf("%d",Sort_Add[Sort_Add_Mid]);
		printf("%d",Sort_Add[Sort_Add_Low]);
		goto End;
	}

//----------------------------------------
//Insertion Sort
	goto Skip; //Now that the code has a video
Insertion_Sort_Loop:
	if(i==Input_Max){
	Loop_Printf:
		printf("%d",Sort_Add[Sort_Add_High]);
		Sort_Add_High--;
		if((Sort_Add_High-Sort_Add_Low)==0){
			printf("%d",Sort_Add[Sort_Add_High]);
			goto End;
		}
		goto Loop_Printf;
	}
	Sort_Add_Mid=(Sort_Add_High+Sort_Add_Low)>>1;// <---- =/2
Skip:
	i++;
	Compare=Input_Add[i];
	if(Compare>Sort_Add[Sort_Add_Mid]){
		Counter=Sort_Add_High;
		Sort_Add_High++;
	Greater_Loop:
		if(Compare>=Sort_Add[Counter]){
			Sort_Add[Counter+1]=Compare;
			goto Insertion_Sort_Loop;
		}
		Sort_Add[Counter+1]=Sort_Add[Counter];
		Counter--;
		goto Greater_Loop;
	}else{
		Counter=Sort_Add_Low;
		Sort_Add_Low--;
		Counter_2=Sort_Add_Low;
	Less_Loop:
		if(Compare<=Sort_Add[Counter]){
			Sort_Add[Counter-1]=Compare;
			goto Insertion_Sort_Loop;
		}
		Sort_Add[Counter-1]=Sort_Add[Counter];
		Counter++;
		goto Less_Loop;
	}
End:
}
