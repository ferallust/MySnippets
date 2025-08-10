byte ReverseBitsInByte(byte x)
{
    int intSize = 8;
    byte y = 0;
    for (int position = intSize - 1; position >= 0; position--)
    {
        y += ((x & 1) << position);
        x >>= 1;
    }
    return y;
}
