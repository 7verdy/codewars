// https://www.codewars.com/kata/5adadcb36edb07df5600092e

unsigned int seven_wonders_science(unsigned int compasses, unsigned int gears, unsigned int tablets)
{
    int min = compasses <= gears && compasses <= tablets ? compasses : gears <= tablets && gears <= compasses ? gears
                                                                                                              : tablets;
    return (min * 7 + (compasses * compasses + gears * gears + tablets * tablets));
}