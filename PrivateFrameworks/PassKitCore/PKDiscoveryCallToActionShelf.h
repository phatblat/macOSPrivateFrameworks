//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKDiscoveryShelf.h>

@class PKDiscoveryCallToAction;

@interface PKDiscoveryCallToActionShelf : PKDiscoveryShelf
{
    BOOL _useImageAsTitle;
    PKDiscoveryCallToAction *_callToAction;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL useImageAsTitle; // @synthesize useImageAsTitle=_useImageAsTitle;
@property(readonly, nonatomic) PKDiscoveryCallToAction *callToAction; // @synthesize callToAction=_callToAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

