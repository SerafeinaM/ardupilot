#include "Copter.h"
#include "mode.h"

bool ModeDive::init(bool ignore_checks){

    if(!ignore_checks){ //if not ignore checks
        return true;
    }
    return true; //if ignore checks
}

void ModeDive::run(){
    gcs().send_text(MAV_SEVERITY_INFO, "Inside Dive run function");
}