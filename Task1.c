#include <stdio.h>

void distribute(int, int);

void insert();
	
	//distribute Chocolates 
void distribute(int chocolates, int students)
{
    int distribution = (students * (students + 1)) / 2;				//Two adjacent students must be exactly one.
    
    if (distribution > chocolates) {			
        printf("%d", chocolates);
    }else {
        int temp = chocolates - distribution;
        temp = temp % students;
        printf("%d", temp);
    }
}

void insert() {
    int testCases, chocolates, students;
    scanf("%d", &testCases);
    
    for (int i=0; i<testCases; i++) {
        scanf("%d %d", &chocolates, &students); 
        distribute(chocolates, students);
    }
}

int main() {
	//call the function
    insert();
    return 0;
}
