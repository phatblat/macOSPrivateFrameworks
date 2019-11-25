//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding>
{
    NSString *_assetUUID;
    NSString *_momentUUID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *momentUUID; // @synthesize momentUUID=_momentUUID;
@property(readonly, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2;

@end

