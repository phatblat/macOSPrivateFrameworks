//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface PCSKeybagKey : NSObject <NSSecureCoding>
{
    NSData *_data;
    long long _flags;
}

+ (BOOL)supportsSecureCoding;
@property long long flags; // @synthesize flags=_flags;
@property(retain) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

