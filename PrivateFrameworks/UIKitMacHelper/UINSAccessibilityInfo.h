//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINSAccessibilityInfo.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UINSAccessibilityInfo : NSObject <UINSAccessibilityInfo>
{
    NSString *_accessibilityValue;
    NSString *_accessibilityLabel;
    NSString *_accessibilityHint;
}

@property(copy, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityValue; // @synthesize accessibilityValue=_accessibilityValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

