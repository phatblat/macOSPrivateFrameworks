//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSPersistenceTaskOperation.h>

@class NSArray;

@interface MFEWSGetMessagesNeedingBodiesOperation : MFEWSPersistenceTaskOperation
{
    id <MFEWSGetMessagesNeedingBodiesOperationDelegate> _delegate;
    NSArray *_mailboxes;
}

@property(readonly, copy, nonatomic) NSArray *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(nonatomic) __weak id <MFEWSGetMessagesNeedingBodiesOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)init;
- (id)initWithMailboxes:(id)arg1;

@end

