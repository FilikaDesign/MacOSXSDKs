/* CoreGraphics - CGSession.h
   Copyright (c) 2003-2008 Apple Inc.
   All rights reserved. */

#ifndef CGSESSION_H_
#define CGSESSION_H_

#include <CoreGraphics/CGBase.h>
#include <CoreFoundation/CoreFoundation.h>

/* Return a window server session dictionary, or NULL if the caller is not
   running within a Quartz GUI session or the window server is disabled. You
   should release the dictionary when you are finished using it. */

CG_EXTERN CFDictionaryRef CGSessionCopyCurrentDictionary(void)
  CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_NA);

/* Keys for window server session dictionaries. */

/* The user ID for the session's current user, specified as a CFNumber
   32-bit unsigned integer value. */

#define kCGSessionUserIDKey		CFSTR("kCGSSessionUserIDKey")

/* The session's short user name as set by the login operation, specified as
   a CFString value. */

#define kCGSessionUserNameKey		CFSTR("kCGSSessionUserNameKey")

/* The set of hardware composing a console, specified as a CFNumber 32-bit
   unsigned integer value. */

#define kCGSessionConsoleSetKey		CFSTR("kCGSSessionConsoleSetKey")

/* An indication of whether the session is on a console, specified as a
   CFBoolean value. */

#define kCGSessionOnConsoleKey		CFSTR("kCGSSessionOnConsoleKey")

/* An indication of whether the login operation has been done, specified as
   a CFBoolean value. */

#define kCGSessionLoginDoneKey		CFSTR("kCGSessionLoginDoneKey")

/* When the GUI session on a console changes, this notification is posted
   via `notify_post'. */

#define kCGNotifyGUIConsoleSessionChanged				\
  "com.apple.coregraphics.GUIConsoleSessionChanged"

/* When a user logs in or out of a session, this notification is posted via
   `notify_post'. */

#define kCGNotifyGUISessionUserChanged					\
  "com.apple.coregraphics.GUISessionUserChanged"

#endif /* CGSESSION_H_ */
