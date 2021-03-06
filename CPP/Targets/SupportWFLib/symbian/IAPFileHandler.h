/*
Copyright (c) 1999 - 2010, Vodafone Group Services Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of the Vodafone Group Services Ltd nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef IAP_FILE_HANDLER
#define IAP_FILE_HANDLER

#include <e32def.h>
#include <e32std.h>

#include "arch.h"

class IAPFileHandler
{
public:
   /**
    * Returns the IAP id if the Imei number matches, otherwise -1
    */
   static int32 CheckIAPFile(const TDesC& aFilename, const TDesC& aImei);

   /**
    * Reads information from a file that contains
    * info about the iap that is used.
    */
   static int32 ReadIAPFile(const TDesC& aFilename, class CIAPObject* aIAPObject);

   /**
    * Writes information about the iap that is used.
    * Takes a CIAPObject as parameter containing info
    * about to be written
    */
   static int32 WriteIAPFile(const TDesC& aFilename, const class CIAPObject& aIAPObject);

   /**
    * XXX This is not implemented yet.
    * Writes information about the iap that is used.
    * Finds out information about iap by itself.
    */
   static int32 WriteIAPFile();

   /**
    * Deletes the iap file that is used.
    * Takes a filename and path of the file to delete
    */
   static int32 DeleteIAPFile(const TDesC& aFilename);
};

#endif
