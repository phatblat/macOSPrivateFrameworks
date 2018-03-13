//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class NSIndexSet;

@interface IMAPGetMessageDetailsOperation : IMAPPersistenceTaskOperation
{
    id <IMAPGetMessageDetailsOperationDelegate> _delegate;
    NSIndexSet *_uids;
}

@property(readonly, copy, nonatomic) NSIndexSet *uids; // @synthesize uids=_uids;
@property(readonly, nonatomic) __weak id <IMAPGetMessageDetailsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)arg1;
- (id)initWithUIDs:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;

@end

