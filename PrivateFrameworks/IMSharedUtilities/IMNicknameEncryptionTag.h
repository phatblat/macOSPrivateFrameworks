//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface IMNicknameEncryptionTag : NSObject
{
    NSData *_dataRepresentation;
}

+ (id)_tagWithStringRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
+ (id)_tagWithDataRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTag:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *stringRepresentation;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1;

@end

