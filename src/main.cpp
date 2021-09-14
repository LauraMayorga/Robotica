#include <Arduino.h>
#include <Obstaculo.h>
#include <Temperatura.h>
#include <Relay.h>
#include <Pir.h>
#include <JoyStick.h>

Obstaculo sensorEntrada(1);
Obstaculo sensorPatio(2);
Temperatura aireAcondicionado(3);
Relay luzHabitacion(4);
Relay luzCocina(5);
Relay luzSala(6);
Pir sensorLuzHabitacion(7);
Pir sensorLuzCocina(8);
Pir sensorLuzSala(9);
JoyStick aspiradora(10);

void setup()
{
  // put your setup code here, to run once:
  sensorEntrada.init();
  sensorPatio.init();
  aireAcondicionado.init();
  luzHabitacion.init();
  luzCocina.init();
  luzSala.init();
  sensorLuzHabitacion.init();
  sensorLuzCocina.init();
  sensorLuzSala.init();
  aspiradora.init();

}

void loop()
{
  // put your main code here, to run repeatedly:
  Serial.println("Sensor Puerta Entrada: " + sensorEntrada.read());
  Serial.println("Sensor Puerta Patio: " + sensorEntrada.read());
  Serial.println("Aire Acondicionado: " + aireAcondicionado.read());
  Serial.println("Luz Habitación: " + luzHabitacion.estado());
  Serial.println("Luz Cocina: " + luzCocina.estado());
  Serial.println("Luz Sala: " + luzSala.estado());
  Serial.println("Sensor Luz Habitación: " + sensorLuzHabitacion.read());
  Serial.println("Sensor Luz Cocina: " + sensorLuzCocina.read());
  Serial.println("Sensor Luz Sala: " + sensorLuzSala.read());
  Serial.println("Aspiradora X: " + aspiradora.readX());
  Serial.println(" Aspiradora Y: "+aspiradora.readY());
  Serial.println(" Aspiradora boton: "+aspiradora.readButton());

  if (sensorEntrada.read() == 0){
    Serial.println(" Hay alguien o algo en la entrada");
  }
  if (sensorPatio.read() == 0){
    Serial.println(" Hay alguien o algo en la puerta del patio");
  }
  if (aireAcondicionado.read() > 40){
    Serial.println("Alerta la temperatura es muy alta");
  }else if(aireAcondicionado.read() < 5){
    Serial.println("Alerta la temperatura es muy baja");
  }
  if (sensorLuzHabitacion.read()==1){
    luzHabitacion.activar();
  }else{
    luzHabitacion.desactivar();
  }
  if (sensorLuzCocina.read()==1){
    luzCocina.activar();
  }else{
    luzCocina.desactivar();
  }
  if (sensorLuzSala.read()==1){
    luzSala.activar();
  }else{
    luzSala.desactivar();
  }
  if ( aspiradora.readButton()){
    Serial.println("La aspiradora esta encendida");
  }
}