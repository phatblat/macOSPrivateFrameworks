//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BaseBoard/BSMachPortRight.h>

#import "NSCopying.h"

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>
{
}

+ (BOOL)supportsSecureCoding;
+ (void)_queue_destroyPort:(unsigned int)arg1;
+ (id)_rightDescription;
+ (id)bootstrapLookUpWithName:(id)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;
+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)taskNamePortForPID:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)_queue_isUsable;
- (BOOL)_shouldInvalidateOnEncode;
- (id)initWithNonRetainingPort:(unsigned int)arg1;
- (id)initFromReceiveRight:(id)arg1;
- (id)initWithCopyOfRight:(id)arg1;
- (id)initWithCopyOfPort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (unsigned int)sendRight;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(BOOL)arg2;

@end

