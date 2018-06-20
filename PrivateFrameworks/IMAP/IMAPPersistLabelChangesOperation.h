//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class NSDictionary;

@interface IMAPPersistLabelChangesOperation : IMAPPersistenceTaskOperation
{
    id <IMAPPersistLabelChangesOperationDelegate> _delegate;
    NSDictionary *_labelChangesByMessageDetails;
}

@property(readonly, copy, nonatomic) NSDictionary *labelChangesByMessageDetails; // @synthesize labelChangesByMessageDetails=_labelChangesByMessageDetails;
@property(readonly, nonatomic) __weak id <IMAPPersistLabelChangesOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)description;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 labelChangesByMessageDetails:(id)arg2 delegate:(id)arg3;

@end

