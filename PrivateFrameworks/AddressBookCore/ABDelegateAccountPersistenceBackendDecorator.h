//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABAccountPersistenceBackend.h"

@class NSString;

@interface ABDelegateAccountPersistenceBackendDecorator : NSObject <ABAccountPersistenceBackend>
{
    id <ABAccountPersistenceBackend> _delegateBackend;
    id <ABAccountPersistenceBackend> _parentBackend;
}

@property(readonly, nonatomic) id <ABAccountPersistenceBackend> parentBackend; // @synthesize parentBackend=_parentBackend;
@property(readonly, nonatomic) id <ABAccountPersistenceBackend> delegateBackend; // @synthesize delegateBackend=_delegateBackend;
- (void).cxx_destruct;
- (void)deletePersistentValuesWithAddressBook:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1 postNotifications:(BOOL)arg2;
- (void)rediscoverPersistentValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (id)accountTypeIdentifier;
- (id)acAccountIdentifier;
- (id)initWithDelegateBackend:(id)arg1 parentBackend:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
