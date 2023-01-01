// https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b

typedef struct Human_Cat_Dog_Years
{
    unsigned human_years, cat_years, dog_years;
} years;

years human_years_cat_years_dog_years(unsigned human)
{
    years y = {
        .human_years = human,
        .cat_years = 15 + ((human - 1) > 0 ? 9 : 0) + (((int)human - 2) > 0 ? (human - 2) * 4 : 0),
        .dog_years = 15 + ((human - 1) > 0 ? 9 : 0) + (((int)human - 2) > 0 ? (human - 2) * 5 : 0),
    };
    return y;
}