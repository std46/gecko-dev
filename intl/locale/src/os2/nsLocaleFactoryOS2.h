/*
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.1 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 * License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is the Mozilla OS/2 libraries.
 *
 * The Initial Developer of the Original Code is John Fairhurst,
 * <john_fairhurst@iname.com>.  Portions created by John Fairhurst are
 * Copyright (C) 1999 John Fairhurst. All Rights Reserved.
 *
 * Contributor(s): 
 *
 */

#include "nscore.h"
#include "nsISupports.h"
#include "nsIFactory.h"
#include "nsCollationOS2.h"
#include "nsDateTimeFormatOS2.h"
 


class nsLocaleOS2Factory : public nsIFactory
{
  public:
    NS_DECL_ISUPPORTS

    NS_DECL_NSIFACTORY

    nsLocaleOS2Factory(const nsCID &aClass); 
    virtual ~nsLocaleOS2Factory();  

  private:   
    nsCID     mClassID;
};
