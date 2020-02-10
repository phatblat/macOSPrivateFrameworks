//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSBagProtocol.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AMSContractBagShim : NSObject <AMSBagProtocol>
{
    NSObject *_bagContract;
}

+ (id)_callSelector:(SEL)arg1 onBagContract:(id)arg2;
@property(retain) NSObject *bagContract; // @synthesize bagContract=_bagContract;
- (void).cxx_destruct;
- (SEL)_selectorForBagKey:(id)arg1;
- (id)_bagValueForBagKey:(id)arg1 bagValueType:(unsigned long long)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
@property(readonly, copy) NSString *profileVersion;
@property(readonly, copy) NSString *profile;
- (BOOL)isLoaded;
@property(readonly, getter=isExpired) BOOL expired;
@property(readonly) NSDate *expirationDate;
- (id)initWithBagContract:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
