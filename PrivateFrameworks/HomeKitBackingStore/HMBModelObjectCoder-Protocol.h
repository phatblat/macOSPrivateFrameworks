//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol HMBModelObjectCoder <NSObject>
+ (id)hmbDecodeData:(NSData *)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
- (NSData *)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
@end
