/**************************************************
 *
 * Main routine for the Halo Model
 * 
 * Version 0.1 
 * Cameron Thacker
 * 5/1/14
 *
 **************************************************/


extern "C" {
#include "trans_fitting.h"
}
#include <iostream>
#include <ctime>
using std::cout;
using std::endl;
using std::clock_t;

// This is first testing the Transfer function
//




int main() 
{
    clock_t begin, end;
    double time_spent;

    begin = clock();
    
    // These parameters come from PLanck+WP+highL+BAO best fit          
    double omega0=.31318553;
    double hubble=.6711;
    double f_baryon=.022161/hubble/hubble;
    double Tcmb=2.72548;	
    double k[] = {0.0,1.0,1.5,1.7,1.9};
    int numk= sizeof(k)/sizeof(double);
    //double foo_init[numk];
    //double *tf_full=foo_init;
    double tf_full[numk];
    //double *tf_full=new double[numk];
    double *tf_baryon = NULL;
    double *tf_cdm = NULL;  
    
    TFfit_hmpc(omega0, f_baryon, hubble, Tcmb, numk, k, tf_full, tf_baryon, tf_cdm);
    
    
    for (int i=0; i<numk; i++){
        cout << tf_full[i] << endl;
    }
    cout << ' ' << endl;

    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
 
    cout << time_spent << endl;

    return 0;
}

