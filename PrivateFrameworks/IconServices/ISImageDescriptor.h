//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface ISImageDescriptor : NSObject <NSCopying>
{
    struct CGSize _size;
    double _scale;
    unsigned long long _variantOptions;
    unsigned long long _badgeOptions;
    unsigned long long _backgroundStyle;
}

@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long badgeOptions; // @synthesize badgeOptions=_badgeOptions;
@property(nonatomic) unsigned long long variantOptions; // @synthesize variantOptions=_variantOptions;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly) double sanitizedScale;
@property(readonly) struct CGSize sanitizedSize;
@property(nonatomic) BOOL drawBorder;
@property(nonatomic) BOOL shouldApplyMask;
@property(nonatomic) unsigned long long shape;
@property(nonatomic) BOOL selectedVariant;
@property(nonatomic) BOOL templateVariant;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)init;

@end

