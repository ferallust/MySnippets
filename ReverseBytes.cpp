static void ReverseBytes(void* _source, byte _size)
{
	byte * arrByte = new byte[_size];
	memcpy(arrByte, _source, _size);
	
	byte f = 0;
	byte r = _size - 1;
	byte tmp;

	while (f < r)
	{
		tmp = arrByte[f];
		arrByte[f] = arrByte[r];
		arrByte[r] = tmp;

		f++;
		r--;
	}

	memcpy(_source, arrByte, _size);

	delete[] arrByte;
	arrByte = NULL;
}
