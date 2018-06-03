#include "ft_printf.h"

#define LR "\e[38;2;225;100;125m"
#define LY "\e[38;2;255;220;65m"
#define LG "\e[38;2;185;225;70m"
#define LB "\e[38;2;80;220;200m"
#define LP "\e[38;2;160;160;255m"
#define R "\e[1;38;2;225;20;20m"
#define O "\e[1;38;2;255;120;10m"
#define Y "\e[1;38;2;255;200;0m"
#define G "\e[1;38;2;80;200;60m"
#define B "\e[1;38;2;50;150;250m"
#define P "\e[1;38;2;150;75;255m"
#define BR "\e[0;1;48;2;150;0;0m"
#define BY "\e[0;1;48;2;255;155;0m"
#define BG "\e[0;1;48;2;0;100;25m"
#define BB "\e[0;1;48;2;0;65;140m"
#define BP "\e[0;1;48;2;60;0;125m"
#define E "\e[0m"

int main (int argc, char const *argv[])
{
	write(1, "😀 ", ft_strlen("😀") + 1);
	write(1, "♥️ ", ft_strlen("♥️") + 1);
	write(1, "\U00002618\n", ft_strlen("\U00002618\n"));
	write(1, BR, ft_strlen(BR));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, BY, ft_strlen(BY));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, BG, ft_strlen(BG));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, BB, ft_strlen(BB));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, BP, ft_strlen(BP));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, E, ft_strlen(E));
	write(1, R, ft_strlen(R));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, O, ft_strlen(O));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, Y, ft_strlen(Y));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, G, ft_strlen(G));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, B, ft_strlen(B));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, P, ft_strlen(P));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, E, ft_strlen(E));
	write(1, LR, ft_strlen(LR));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, LY, ft_strlen(LY));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, LG, ft_strlen(LG));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, LB, ft_strlen(LB));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, LP, ft_strlen(LP));
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, E, ft_strlen(E));
	
	int r;
	int b;
	int g;
	g = -1;
	while (++g <= 10)
	{
		b = -1;
		while (++b <= 10)
		{
			r = -1;
			while (++r <= 10)
			{
				write(1, "\e[1m", 5);
				settext(r, g, b);
				write(1, "XX", 2);
				write(1, "\e[0m", 5);
			}
		}
		write(1, "\n", 1);
	}
	setlocale(LC_ALL, "");
	wchar_t tmp;
	tmp = L'⃠';
	printf("%c", (unsigned char)0xE2);
	sleep(1);
	printf("%c", (unsigned char)0x83);
	sleep(1);
	printf("%c", (unsigned char)0xA0);
	sleep(1);
	return 0;
}
