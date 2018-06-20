//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMDSpamMessageCreator : NSObject
{
}

- (id)surfURLForIMMessageItem:(id)arg1;
- (BOOL)hasDataDetectedInformalPayment:(id)arg1;
- (id)metaDataForSurfURL:(id)arg1;
- (BOOL)isSurfPayment:(id)arg1;
- (void)reportUnknownToIDS:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4;
- (id)reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(BOOL)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long *)arg7;
- (id)transferForGuid:(id)arg1;

@end

