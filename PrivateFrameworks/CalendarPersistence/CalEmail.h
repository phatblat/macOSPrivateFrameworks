//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalEmail : NSObject
{
}

+ (void)composeEmailTo:(id)arg1 withCCRecipients:(id)arg2 withSubject:(id)arg3 withBody:(id)arg4 from:(id)arg5;
+ (void)composeEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3 from:(id)arg4 withAttachment:(id)arg5 andAttachmentFilename:(id)arg6 delegate:(id)arg7;
+ (void)composeEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3 from:(id)arg4 withAttachment:(id)arg5 andAttachmentFilename:(id)arg6;
+ (void)sendEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3 withAttachment:(id)arg4 andAttachmentFilename:(id)arg5 delegate:(id)arg6;
+ (void)sendEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3 withAttachment:(id)arg4 andAttachmentFilename:(id)arg5;
+ (void)composeEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3 from:(id)arg4 delegate:(id)arg5;
+ (void)composeEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3 from:(id)arg4;
+ (void)sendEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3 delegate:(id)arg4;
+ (void)sendEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3;

@end

