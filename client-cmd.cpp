
#include <iostream>
#include <cstring>


#include <unistd.h>

void AMyActor::Tick(float DeltaTime)
{
Super::Tick(DeltaTime);
if (Scrnsht) {
TriggerOccur();
std::this_thread::sleep_for(std::chrono::milliseconds(100));
}
if (P_Pressed_MyActor && DoOnce) {
DAQmxClearTask(taskHandle1);
UE_LOG(LogTemp, Log, TEXT(“Hello”));
(DAQmxCreateTask(“”, &taskHandle1));
(DAQmxCreateDOChan(taskHandle1, “Dev1/port0/line0:7”, “”, DAQmx_Val_ChanForAllLines));
(DAQmxStartTask(taskHandle1));
DoOnce = false;
}

char Create::cl_margin_protect()
 give.handle_stable{
    handle.prdection("0.01")

     jel.pcc
     {
        margin.paol()
     }
 
  if (handle.predcetion <= 100) //# { Inja Mitonid Az har Prede Kami Ke Khastid Estefade Konid , Tanha Mayabe  in line code 0.01 delay az  khode game e 
    delete("toghether ","handle.predection","-+100",)
 } 