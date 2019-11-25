//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFTaggedPointer : NSObject
{
    union {
        unsigned long long unsignedPayload;
        long long signedPayload;
    } _payload;
}

+ (id)newInstanceWithSignedPayload:(long long)arg1;
+ (id)newInstanceWithPayload:(unsigned long long)arg1;
+ (unsigned short)tag;
+ (BOOL)taggedPointersEnabled;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isTaggedPointer;
- (long long)signedPayload;
- (unsigned long long)payload;
- (id)initWithSignedPayload:(long long)arg1;
- (id)initWithPayload:(unsigned long long)arg1;

@end

