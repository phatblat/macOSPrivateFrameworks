//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPLocalMessageAction.h>

@class NSArray, NSIndexSet;

@interface IMAPFlagChangeMessageAction : IMAPLocalMessageAction
{
    NSIndexSet *_uids;
    NSArray *_messagesWithoutUIDs;
    long long _flags;
    long long _mask;
}

@property(readonly, nonatomic) long long mask; // @synthesize mask=_mask;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSArray *messagesWithoutUIDs; // @synthesize messagesWithoutUIDs=_messagesWithoutUIDs;
@property(readonly, copy, nonatomic) NSIndexSet *uids; // @synthesize uids=_uids;
- (void).cxx_destruct;
- (id)newSyncOperationWithDataSource:(id)arg1;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 uids:(id)arg5 messagesWithoutUIDs:(id)arg6 flags:(long long)arg7 mask:(long long)arg8;

@end

