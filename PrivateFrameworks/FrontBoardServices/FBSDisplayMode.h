//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FBSDisplayMode : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _preferredScale;
    double _scaleOverride;
    double _refreshRate;
    long long _gamut;
    long long _hdr;
    long long _rotation;
    BOOL _virtual;
}

+ (BOOL)supportsSecureCoding;
+ (id)_emptyMode;
@property(readonly, nonatomic) long long hdrMode; // @synthesize hdrMode=_hdr;
@property(readonly, nonatomic) long long colorGamut; // @synthesize colorGamut=_gamut;
@property(readonly, nonatomic) double refreshRate; // @synthesize refreshRate=_refreshRate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_height;
- (unsigned long long)_width;
- (id)_referenceSizeDescription;
- (long long)_rotation;
- (id)_caHDRMode;
- (id)_caColorGamut;
- (double)_caRefreshRate;
- (unsigned long long)_caPreferredScale;
- (unsigned long long)_caHeight;
- (unsigned long long)_caWidth;
- (BOOL)_isVirtualMode;
- (id)_copyWithOverrideSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 preferredScale:(unsigned long long)arg3 scaleOverride:(double)arg4 refreshRate:(double)arg5 gamut:(long long)arg6 hdr:(long long)arg7 rotation:(long long)arg8 virtual:(BOOL)arg9 validityCheck:(long long)arg10;
- (id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 scale:(unsigned long long)arg3 refreshRate:(double)arg4 gamut:(long long)arg5 hdr:(long long)arg6;
- (id)_initWithCADisplayMode:(id)arg1 scale:(double)arg2 rotation:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

