/*
** EPITECH PROJECT, 2021
** my_strisupper
** File description:
** my_strcapitalize
*/

int my_strlen(const char *str);

int my_str_isupper(char const *str)
{
    int i = 0;

    if (my_strlen(str) <= 0)
        return 1;
    while (str[i] >= 'A' && str[i] <= 'Z') {
        if (str[i + 1] == '\0')
            return 1;
	i++;
    }
    return 0;
}
