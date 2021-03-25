//~ ++Task 3:
//~ -------
//~ ---> read 3 subject marks     
    //~ ---> Print total marks
    //~ ---> Print percentage
    
    //~ Based on percentage you should have to print the grade
        //~ percentage>=90  
        
        //~ Grade A
        
        //~ percentage >=70 and percentage <90
        //~ Grade B
        
        //~ percentage >=50 and percentage <70
        //~ Grade C
        
        //~ if less than 50
        //~ Fail
#include <stdio.h>
int main()
{
	float maths,drawing,beee,per;
	printf("Enter marks:-");
	scanf("%f %f %f",&maths,&drawing,&beee);
	printf("total marks are %.2f\n",maths+drawing+beee);
	per=((maths+drawing+beee)/300)*100;
	printf("Secured percentage is %.2f\n",per);
	if(per>=90)
		printf("Grade A");
	else if(per>=70)
		printf("Grade B");
	else if(per>=50)
		printf("Grade C");
	else
		printf("Grade Fail");
	return 0;
}










