#include <stdio.>
/**
 * main - print possible combination of two 2-digit
 * numbers
 * Return: returns zero at the end
 */
int main(void)
{
int i, p;
for (i = 0; i &lt; 100; i++)
{
for (p = 0; p &lt; 100; j++)
{
if (p &gt; i)
{
putchar((i / 10) + &#39;0&#39;);
putchar((i % 10) + &#39;0&#39;);
putchar(&#39; &#39;);
putchar((p / 10) + &#39;0&#39;);
putchar((p % 10) + &#39;0&#39;);
if (i != 98)
{
putchar(&#39;,&#39;);
putchar(&#39; &#39;);
}
}
}
}
putchar(&#39;\n&#39;);
return (0);
}
