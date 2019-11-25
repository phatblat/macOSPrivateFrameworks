//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABAccountCollection.h"

@class ABAccount, NSArray, NSPredicate, NSString;

@interface ABDelegateAccessAccountCollection : NSObject <ABAccountCollection>
{
    NSPredicate *_predicate;
    id <ABAccountCollection> _accountCollection;
    NSArray *_allAccountsImpl;
}

+ (id)os_log;
@property(readonly, copy, nonatomic) NSArray *allAccountsImpl; // @synthesize allAccountsImpl=_allAccountsImpl;
@property(readonly, nonatomic) id <ABAccountCollection> accountCollection; // @synthesize accountCollection=_accountCollection;
@property(readonly, copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)tag;
- (void)setTag:(id)arg1;
@property(readonly) ABAccount *defaultAccount;
@property(readonly, copy) NSString *basePath;
@property(readonly, copy) NSArray *hiddenAccounts;
@property(readonly, copy) NSArray *persistentAccounts;
@property(readonly, copy) NSArray *enabledAccounts;
@property(readonly, copy) NSArray *allAccounts;
- (id)accountWithIdentifier:(id)arg1;
- (id)initWithBaseURL:(id)arg1;
- (void)updateAccounts;
@property(readonly, copy) NSString *description;
- (id)initWithPredicate:(id)arg1 accountCollection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

