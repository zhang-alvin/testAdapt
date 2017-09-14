#include <apf.h>
#include <apfMDS.h>
#include <apfMesh2.h>
#include <PCU.h>
#include <pcu_util.h>
#include <cassert>
#include <ma.h>
#include <gmi_mesh.h>
#include <gmi_lookup.h>
#include <stdlib.h>

#include <iostream>

int main(int argc, char** argv) {
  MPI_Init(0, 0);
  PCU_Comm_Init();
  gmi_model* g;

  PCU_Comm_Free();
  MPI_Finalize();

}
