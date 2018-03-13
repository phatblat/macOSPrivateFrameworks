//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBColor, _SFPBMediaDetail, _SFPBMediaItem, _SFPBMediaOffer, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBMediaInfoCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasSpecialOfferButtonLabel;
@property(retain, nonatomic) _SFPBRichText *specialOfferButtonLabel;
@property(readonly, nonatomic) BOOL hasIsMediaContainer;
@property(nonatomic) BOOL isMediaContainer;
@property(readonly, nonatomic) BOOL hasWatchListConfirmationText;
@property(copy, nonatomic) NSString *watchListConfirmationText;
@property(readonly, nonatomic) BOOL hasWatchListContinuationText;
@property(copy, nonatomic) NSString *watchListContinuationText;
@property(readonly, nonatomic) BOOL hasWatchListButtonLabel;
@property(copy, nonatomic) NSString *watchListButtonLabel;
@property(readonly, nonatomic) BOOL hasWatchListIdentifier;
@property(copy, nonatomic) NSString *watchListIdentifier;
@property(copy, nonatomic) NSArray *offers;
@property(readonly, nonatomic) BOOL hasPlayAction;
@property(retain, nonatomic) _SFPBActionItem *playAction;
@property(copy, nonatomic) NSArray *details;
@property(readonly, nonatomic) BOOL hasMediaItem;
@property(retain, nonatomic) _SFPBMediaItem *mediaItem;
@property(readonly, nonatomic) BOOL hasBackgroundColor;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(readonly, nonatomic) BOOL hasSeparatorStyle;
@property(nonatomic) int separatorStyle;
@property(readonly, nonatomic) BOOL hasType;
@property(copy, nonatomic) NSString *type;
@property(readonly, nonatomic) BOOL hasHasBottomPadding;
@property(nonatomic) BOOL hasBottomPadding;
@property(readonly, nonatomic) BOOL hasHasTopPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(readonly, nonatomic) BOOL hasCanBeHidden;
@property(nonatomic) BOOL canBeHidden;
@property(readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBMediaOffer *)offersAtIndex:(unsigned long long)arg1;
- (unsigned long long)offersCount;
- (void)addOffers:(_SFPBMediaOffer *)arg1;
- (void)clearOffers;
- (_SFPBMediaDetail *)detailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)detailsCount;
- (void)addDetails:(_SFPBMediaDetail *)arg1;
- (void)clearDetails;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

