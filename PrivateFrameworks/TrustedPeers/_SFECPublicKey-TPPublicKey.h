//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SFECPublicKey.h"

#import "TPPublicKey.h"

@class NSString;

@interface _SFECPublicKey (TPPublicKey) <TPPublicKey>
- (BOOL)checkSignature:(id)arg1 matchesData:(id)arg2;
- (id)spki;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

