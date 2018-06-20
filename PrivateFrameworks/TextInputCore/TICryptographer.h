//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TICryptographing.h"

@class NSData, NSObject<OS_dispatch_queue>, NSString;

@interface TICryptographer : NSObject <TICryptographing>
{
    NSData *_deviceSalt;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_cachedRecipientName;
    NSString *_cachedRecipientDigest;
}

+ (id)sharedCryptographer;
+ (id)singletonInstance;
+ (void)setSharedCryptographer:(id)arg1;
@property(copy, nonatomic) NSString *cachedRecipientDigest; // @synthesize cachedRecipientDigest=_cachedRecipientDigest;
@property(copy, nonatomic) NSString *cachedRecipientName; // @synthesize cachedRecipientName=_cachedRecipientName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)stringDigestForName:(id)arg1;
@property(readonly, nonatomic) NSData *deviceSalt;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
