//____________________________________________________________________________
/*
 Copyright (c) 2003-2017, GENIE Neutrino MC Generator Collaboration
 For the full text of the license visit http://copyright.genie-mc.org
 or see $GENIE/LICENSE

 Author: Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         University of Liverpool & STFC Rutherford Appleton Lab - January 25, 2004

 For the class documentation see the corresponding header file.

 Important revisions after version 2.0.0 :

*/
//____________________________________________________________________________

#include "EVGCore/EventGeneratorList.h"
#include "EVGCore/EventGeneratorI.h"
#include "Framework/Messenger/Messenger.h"

using std::endl;
using namespace genie;

//____________________________________________________________________________
namespace genie {
 ostream & operator << (ostream & stream, const EventGeneratorList & evgl)
 {
   evgl.Print(stream);
   return stream;
 }
}
//___________________________________________________________________________
EventGeneratorList::EventGeneratorList()
{

}
//___________________________________________________________________________
EventGeneratorList::~EventGeneratorList()
{

}
//___________________________________________________________________________
void EventGeneratorList::Print(ostream & stream) const
{
  EventGeneratorList::const_iterator iter;

  for(iter = this->begin(); iter != this->end(); ++iter) {

    const EventGeneratorI * evg = *iter;

    if(evg) stream << *evg;
    else    stream << "\n********* NULL EVENT GENERATOR *********" << endl;
  }
}
//___________________________________________________________________________
