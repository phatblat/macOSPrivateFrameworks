//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBImage;

@protocol _SFPBMediaOffer <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasImage;
@property(retain, nonatomic) _SFPBImage *image;
@property(readonly, nonatomic) BOOL hasIsEnabled;
@property(nonatomic) BOOL isEnabled;
@property(readonly, nonatomic) BOOL hasOfferIdentifier;
@property(copy, nonatomic) NSString *offerIdentifier;
@property(readonly, nonatomic) BOOL hasSublabel;
@property(copy, nonatomic) NSString *sublabel;
@property(readonly, nonatomic) BOOL hasActionItem;
@property(retain, nonatomic) _SFPBActionItem *actionItem;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

