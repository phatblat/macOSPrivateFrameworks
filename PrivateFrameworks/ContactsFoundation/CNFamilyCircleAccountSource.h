//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNDelegateAccountSource.h"

@class FAFamilyCircle, NSString;

@interface CNFamilyCircleAccountSource : NSObject <CNDelegateAccountSource>
{
    FAFamilyCircle *_familyCircle;
}

@property(readonly, nonatomic) FAFamilyCircle *familyCircle; // @synthesize familyCircle=_familyCircle;
- (void).cxx_destruct;
- (id)delegateAccounts;
- (id)primaryAccount;
- (id)myFamilyMemberRecord;
@property(readonly, copy) NSString *description;
- (id)initWithFamilyCircle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

