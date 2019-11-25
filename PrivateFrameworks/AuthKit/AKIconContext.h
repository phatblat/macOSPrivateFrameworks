//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSNumber;

@interface AKIconContext : NSObject <NSSecureCoding>
{
    NSData *_data;
    NSNumber *_scale;
    unsigned long long _maskingStyle;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long maskingStyle; // @synthesize maskingStyle=_maskingStyle;
@property(retain, nonatomic) NSNumber *scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

