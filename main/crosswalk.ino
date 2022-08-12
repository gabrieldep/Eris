void faixaPedestre()
{
	readS();
	errorI();
	sprint();
	if ((s5 || s4 || s6) && !s9 && !s1 && !s8 && !s7)
	{
		readS();
		error();
		sprint();
	}
	else if (!s3 && !s4 && !s5 && !s6 && !s7) {
		parar();
		delay(5000);
		analogWrite(motorR, 150);
		analogWrite(motorL, 150);
		delay(1000);
		faixa = false;
	}
}

void parar() {
	analogWrite(motorR, 0);
	analogWrite(motorL, 0);
}
