//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSURL, PKImage;

@interface PKPhysicalCardArtworkOption : NSObject <NSSecureCoding>
{
    BOOL _optionUnavailable;
    NSString *_identifier;
    NSURL *_frontFaceImageURL;
    unsigned long long _minimumEstimatedShippingTime;
    unsigned long long _maximumEstimatedShippingTime;
    long long _shippingTimeUnit;
    PKImage *_frontFaceImage;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKImage *frontFaceImage; // @synthesize frontFaceImage=_frontFaceImage;
@property(readonly, nonatomic) BOOL optionUnavailable; // @synthesize optionUnavailable=_optionUnavailable;
@property(readonly, nonatomic) long long shippingTimeUnit; // @synthesize shippingTimeUnit=_shippingTimeUnit;
@property(readonly, nonatomic) unsigned long long maximumEstimatedShippingTime; // @synthesize maximumEstimatedShippingTime=_maximumEstimatedShippingTime;
@property(readonly, nonatomic) unsigned long long minimumEstimatedShippingTime; // @synthesize minimumEstimatedShippingTime=_minimumEstimatedShippingTime;
@property(retain, nonatomic) NSURL *frontFaceImageURL; // @synthesize frontFaceImageURL=_frontFaceImageURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
