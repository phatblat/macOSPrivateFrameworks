//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol TPKeyPair <NSObject>
- (NSData *)signatureForData:(NSData *)arg1 withError:(id *)arg2;
- (id <TPPublicKey>)publicKey;
@end

