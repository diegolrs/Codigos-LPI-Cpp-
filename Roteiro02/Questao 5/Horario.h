#ifndef _HORARIO_H_

typedef struct {
      int hora;
      int minuto;
	  int segundo;
   } EstruturaData;

class Horario{
	public:
		
		Horario();
		Horario(int segundo, int minuto, int hora);
		
		//GET------------------
		EstruturaData getData();
		
		//SET------------------
		void Padrao(); //VALOR PADRÃO (0)
		void setHora(int tempo);
		void setMinuto(int tempo);
		void setSegundo(int tempo);
		
	private:
		EstruturaData data;
};

#endif //_HORARIO_H_ 
