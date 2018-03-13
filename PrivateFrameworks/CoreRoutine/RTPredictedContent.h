//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface RTPredictedContent : NSObject <NSSecureCoding>
{
    NSString *_contentIdentifier;
    NSString *_bundleIdentifier;
    double _confidence;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 confidence:(double)arg3;
- (id)initWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 confidence:(double)arg3;

@end

