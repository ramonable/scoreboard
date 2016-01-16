#include <stdio.h>
int main()
{
	int a;
	char name[29];
	int won;
	int tied;
	int lost;
	int streak;
	int points;
	int maxPoints = 0;
	int longestStreak = 0;
	
	while ((a = scanf("%s %d %d %d %d\n", name, &won, &tied, &lost, &streak)) != EOF)
	{
		if (won < 0 || tied < 0 || lost < 0)
		{
			printf("%s\tnegative number of games\n", name);
			points = 0;
			streak = 0;
		}
	else if ((won + tied + lost) > 99)
	{
		printf("%s\tgames played are more than 9\n", name);
		points = 0;
		streak = 0;
	}
	else 
	{
		points = (3*won + 1*tied + 0*lost);
		printf("%s\t%3d\t%+3d\n", name, points, streak);
	}
	if (points > maxPoints)
	{
		maxPoints = points;
	}
	if (streak > longestStreak)
	{
		longestStreak = streak;
	}
	}
	
	printf("\n");
	printf("The maximum points by any team is%5d\n", maxPoints);
	printf("The longest winning streak is%5d\n", longestStreak);
}