/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM nsIDOMMsgAppCore.idl
 */

#ifndef __gen_nsIDOMMsgAppCore_h__
#define __gen_nsIDOMMsgAppCore_h__

#include "nsISupports.h" /* interface nsISupports */
#include "nsIDOMBaseAppCore.h" /* interface nsIDOMBaseAppCore */

#ifdef XPIDL_JS_STUBS
#include "jsapi.h"
#endif
class nsIDOMWindow; /* forward decl */
class nsIDOMNodeList; /* forward decl */
class nsIDOMXULTreeElement; /* forward decl */
class nsIDOMXULElement; /* forward decl */
class nsIRDFCompositeDataSource; /* forward decl */
#include "nsrootidl.h" /* interface nsrootidl */
#include "nsIDOMWindow.h"
#include "nsIDOMNodeList.h"
#include "nsIDOMXULTreeElement.h"
#include "nsIDOMXULElement.h"
#include "nsIRDFCompositeDataSource.h"


/* starting interface:    nsIDOMMsgAppCore */

/* {4f7966d0-c14f-11d2-b7f2-00805f05ffa5} */
#define NS_IDOMMSGAPPCORE_IID_STR "4f7966d0-c14f-11d2-b7f2-00805f05ffa5"
#define NS_IDOMMSGAPPCORE_IID \
  {0x4f7966d0, 0xc14f, 0x11d2, \
    { 0xb7, 0xf2, 0x00, 0x80, 0x5f, 0x05, 0xff, 0xa5 }}

class nsIDOMMsgAppCore : public nsIDOMBaseAppCore {
 public: 
  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDOMMSGAPPCORE_IID)

  /* void GetNewMessages (in nsIRDFCompositeDataSource database, in nsIDOMXULElement folder); */
  NS_IMETHOD GetNewMessages(nsIRDFCompositeDataSource *database, nsIDOMXULElement *folder) = 0;

  /* void Open3PaneWindow (); */
  NS_IMETHOD Open3PaneWindow() = 0;

  /* void SetWindow (in nsIDOMWindow ptr); */
  NS_IMETHOD SetWindow(nsIDOMWindow *ptr) = 0;

  /* void OpenURL (in string str); */
  NS_IMETHOD OpenURL(const char *str) = 0;

  /* void DeleteMessages (in nsIDOMXULTreeElement tree, in nsIDOMXULElement srcFolder, in nsIDOMNodeList node); */
  NS_IMETHOD DeleteMessages(nsIDOMXULTreeElement *tree, nsIDOMXULElement *srcFolder, nsIDOMNodeList *node) = 0;

  /* void DeleteFolders (in nsIRDFCompositeDataSource db, in nsIDOMXULElement parentFolder, in nsIDOMXULElement folder); */
  NS_IMETHOD DeleteFolders(nsIRDFCompositeDataSource *db, nsIDOMXULElement *parentFolder, nsIDOMXULElement *folder) = 0;

  /* void CopyMessages (in nsIDOMXULElement srcFolderElement, in nsIDOMXULElement dstFolderElement, in nsIDOMNodeList messages, in boolean isMove); */
  NS_IMETHOD CopyMessages(nsIDOMXULElement *srcFolderElement, nsIDOMXULElement *dstFolderElement, nsIDOMNodeList *messages, PRBool isMove) = 0;

  /* nsISupports GetRDFResourceForMessage (in nsIDOMXULTreeElement tree, in nsIDOMNodeList node); */
  NS_IMETHOD GetRDFResourceForMessage(nsIDOMXULTreeElement *tree, nsIDOMNodeList *node, nsISupports **_retval) = 0;

  /* void Exit (); */
  NS_IMETHOD Exit() = 0;

  /* void ViewAllMessages (in nsIRDFCompositeDataSource database); */
  NS_IMETHOD ViewAllMessages(nsIRDFCompositeDataSource *database) = 0;

  /* void ViewUnreadMessages (in nsIRDFCompositeDataSource database); */
  NS_IMETHOD ViewUnreadMessages(nsIRDFCompositeDataSource *database) = 0;

  /* void ViewAllThreadMessages (in nsIRDFCompositeDataSource database); */
  NS_IMETHOD ViewAllThreadMessages(nsIRDFCompositeDataSource *database) = 0;

  /* void MarkMessagesRead (in nsIRDFCompositeDataSource database, in nsIDOMNodeList messages, in boolean markRead); */
  NS_IMETHOD MarkMessagesRead(nsIRDFCompositeDataSource *database, nsIDOMNodeList *messages, PRBool markRead) = 0;

  /* void NewFolder (in nsIRDFCompositeDataSource database, in nsIDOMXULElement parentFolderElement, in string name); */
  NS_IMETHOD NewFolder(nsIRDFCompositeDataSource *database, nsIDOMXULElement *parentFolderElement, const char *name) = 0;

  /* void AccountManager (in nsIDOMWindow parent); */
  NS_IMETHOD AccountManager(nsIDOMWindow *parent) = 0;

#ifdef XPIDL_JS_STUBS
  static NS_EXPORT_(JSObject *) InitJSClass(JSContext *cx);
  static NS_EXPORT_(JSObject *) GetJSObject(JSContext *cx, nsIDOMMsgAppCore *priv);
#endif
};
extern "C" 
nsresult NS_InitMsgAppCoreClass(nsIScriptContext *aContext, void **aPrototype);
 


#endif /* __gen_nsIDOMMsgAppCore_h__ */
