//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDecimalNumber, NSString;

@interface WFQuantityValue : NSObject <NSSecureCoding>
{
    NSDecimalNumber *_magnitude;
    NSString *_unitString;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property(readonly, nonatomic) NSDecimalNumber *magnitude; // @synthesize magnitude=_magnitude;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMagnitude:(id)arg1 unitString:(id)arg2;

@end

