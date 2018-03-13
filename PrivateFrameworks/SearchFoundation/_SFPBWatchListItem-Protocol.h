//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol _SFPBWatchListItem <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasWatchLiveTextFormat;
@property(copy, nonatomic) NSString *watchLiveTextFormat;
@property(readonly, nonatomic) BOOL hasAddedToUpNextText;
@property(copy, nonatomic) NSString *addedToUpNextText;
@property(readonly, nonatomic) BOOL hasAddToUpNextText;
@property(copy, nonatomic) NSString *addToUpNextText;
@property(readonly, nonatomic) BOOL hasInUpNextText;
@property(copy, nonatomic) NSString *inUpNextText;
@property(readonly, nonatomic) BOOL hasPurchaseOfferTextFormat;
@property(copy, nonatomic) NSString *purchaseOfferTextFormat;
@property(readonly, nonatomic) BOOL hasInstallButtonTitle;
@property(copy, nonatomic) NSString *installButtonTitle;
@property(readonly, nonatomic) BOOL hasOpenButtonTitle;
@property(copy, nonatomic) NSString *openButtonTitle;
@property(readonly, nonatomic) BOOL hasContinueInTextFormat;
@property(copy, nonatomic) NSString *continueInTextFormat;
@property(readonly, nonatomic) BOOL hasSeasonEpisodeTextFormat;
@property(copy, nonatomic) NSString *seasonEpisodeTextFormat;
@property(readonly, nonatomic) BOOL hasWatchListIdentifier;
@property(copy, nonatomic) NSString *watchListIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

